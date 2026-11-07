#include <stdio.h>
#include <stdlib.h>

typedef struct {
	short int cols, rows;
	float *data;
} Mat;

void mat_print(Mat m)
{
	for (int i = 0; i < m.rows; ++i)
		for (int j = 0; j < m.cols; ++j)
			printf("%f", *(m.data + (i * m.cols) + j));
}

Mat mat_multiplication(Mat a, Mat b)
{
	Mat c = {
		.rows = a.rows,
		.cols = b.cols,
		.data = (float*) calloc(a.rows * b.cols, sizeof(float))
	};

	for (int i = 0; i < a.rows; ++i) {
		for (int k = 0; k < a.cols; ++k) {
			for (int j = 0; j < b.cols; ++j) {
				*(c.data + (i * b.cols) + j) += (*(a.data + (i * a.cols) + k)) * (*(b.data + (k * b.cols) + j));
			}
		}
	}

	return c;
}


int main()
{
	Mat a = {.cols = 2, .rows = 2, .data = (float[]){1.0f, 2.0f, 3.0f, 4.0f}};
}
