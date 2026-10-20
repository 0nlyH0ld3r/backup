#include <math.h>
#include <stdint.h>
#include <string.h>
#include <stdio.h>

#define SAMPLE_RATE 44100

struct wav_header
{
	char riff[4];		// "RIFF"
	int32_t flength;	// File length in bytes
	char wave[4];		// "WAVE"
	char fmt[4];		// "fmt " with the space
	int32_t chunk_size;	// size of FMT chunk in bytes (usually 16 bytes)
	int16_t format_tag;	// 1=PMC, 257=Mu-Law, 258=A-Law, 259=ADPCM
	int16_t num_chans;	// 1=mono, 2=stereo
	int32_t srate;		// Sampling rate in samples per second
	int32_t bytes_per_sec;	// Bytes per second = srate*bytes_per_samp
	int16_t bytes_per_samp;	// 2 = 16-bit mono, 4 = 16-bit stereo
	int16_t bits_per_samp;	// Number of bits per sample
	char data[4];		// "data"
	int32_t dlength;	// Data length in bytes (filelength - 44)
} wavh;


#define S_RATE 8000
#define DURATION_SEC 10
#define BUF_SIZE (8000 * 10)
#define C3 256.0f

void wav_write(FILE *wav_f, short int *buf);

int main() {
	FILE *fp = fopen("teste.wav", "w+");

	short int audio_buffer[BUF_SIZE] = {0};

	for (int i = 0; i < BUF_SIZE; ++i) {
		audio_buffer[i] = (short int)(cos((2 * M_PI * C3 * i)/S_RATE) * 10000);
	}

	wav_write(fp, audio_buffer);
	fclose(fp);

	return 0;
}

void wav_write(FILE *wav_f, short int *buf) 
{
	size_t wavh_size = sizeof(struct wav_header);

	strncpy(wavh.riff, "RIFF", 4);
	strncpy(wavh.wave, "WAVE", 4);
	strncpy(wavh.fmt, "fmt ", 4);
	strncpy(wavh.data, "data", 4);

	wavh.chunk_size = 16;
	wavh.format_tag = 1;
	wavh.num_chans = 1;
	wavh.bits_per_samp = 16;

	wavh.srate = S_RATE;

	wavh.bytes_per_sec = wavh.srate * wavh.bits_per_samp / 8 * wavh.num_chans;
	wavh.bytes_per_samp = wavh.bits_per_samp / 8 * wavh.num_chans;

	wavh.dlength = BUF_SIZE * wavh.bytes_per_samp;
	wavh.flength = wavh.dlength + wavh_size;

	fwrite(&wavh, 1, wavh_size, wav_f);
	fwrite(buf, 2, BUF_SIZE, wav_f);
}
