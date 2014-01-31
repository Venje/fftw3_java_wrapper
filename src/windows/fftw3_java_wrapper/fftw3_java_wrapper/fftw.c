#include <stdlib.h>
#include "fftw3.h"

void calculate(double* input, int size, double* output) {
	// Массивы для вычисления преобразования
	fftw_complex	*fft_in, *fft_out;
	fftw_plan		plan_forward;
	//double			*output;
	// Для циклов
	int i,j;

	// Выделение памяти
	fft_in	= (fftw_complex*) fftw_malloc(sizeof(fftw_complex) * (size / 2));
	fft_out	= (fftw_complex*) fftw_malloc(sizeof(fftw_complex) * (size / 2));
	//output	= (double*) malloc(sizeof(double) * size);

	plan_forward = fftw_plan_dft_1d(size / 2, fft_in, fft_out, FFTW_FORWARD, FFTW_ESTIMATE);

	for (i = j = 0 ; i < size / 2; ++i, j += 2) {
		fft_in[i][0] = input[j];
		fft_in[i][1] = input[j+1];
	} 				

	// Запуск преобразования
	fftw_execute( plan_forward );
	
	// Записывает действительные и мнимые части в соответствующие массивы
	for (i = 0, j = 0; i < size / 2; ++i, j += 2) {
		output[j]	= fft_out[i][0];
		output[j+1] = fft_out[i][1];
	}

	// Освобождаем память
	fftw_destroy_plan(plan_forward);
	fftw_free(fft_in);
	fftw_free(fft_out);
}
