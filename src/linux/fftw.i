%module fftw
%include "carrays.i"
%array_functions(double, doubleArray);
%{
#include "fftw3.h"
#include <stdlib.h>
%}
void calculate(double* input, int size, double* output);
