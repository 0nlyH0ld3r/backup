#include <stdio.h>

int main()
{
	int horario;
	int hh, mm, ss, cc;
	int totalCentesimos = (((24 * 60) * 60) * 100);
	int horarioCentesimos;
	int hh100, mm100, ss100, cc100;

	float razaoDecimal;
	int horarioDecimal;

	printf("Informe o horario no formato tradicional\n");
	scanf("%d", &horario);
	hh = (horario / 1000000);
	mm = ((horario % 1000000) / 10000);
	ss = ((horario % 10000) / 100);
	cc = horario % 100;
	printf("%dh%dm%ds%d/100\n", hh, mm, ss, cc);

	horarioCentesimos = (hh * 60);
	horarioCentesimos = ((horarioCentesimos + mm) * 60);
	horarioCentesimos = ((horarioCentesimos + ss) * 100);
	horarioCentesimos += cc;

	razaoDecimal = ((float)horarioCentesimos) / totalCentesimos;

	horarioDecimal = 10000000 * razaoDecimal;

	hh100 = (horarioDecimal / 1000000);
	mm100 = ((horarioDecimal % 1000000) / 10000);
	ss100 = ((horarioDecimal % 10000) / 100);
	cc100 = horarioDecimal % 100;

	printf("%d\n", horarioDecimal);
	printf("%dh%dm%ds%d/100\n", hh100, mm100, ss100, cc100);
}
