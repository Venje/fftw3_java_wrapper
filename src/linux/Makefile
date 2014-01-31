SRC=fftw.c fftwlib_wrap.c
OBJ=fftw.o fftwlib_wrap.o

build:
	swig -java -package main fftw.i
	gcc -fPIC -c fftw.c
	gcc -fPIC -c fftw_wrap.c -I/usr/lib/jvm/java-7-oracle/include -I/usr/lib/jvm/java-7-oracle/include/linux
	gcc -shared fftw.o fftw_wrap.o -o libfftw.so -lfftw3

clean:
	rm libfftw.so *.o fftw_wrap.c *.java