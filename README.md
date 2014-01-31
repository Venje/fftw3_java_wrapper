#Simple crossplatform FFTW wrapper for Java using Swig

This repository contains a source code for creating crossplatform fftw wrapper for Java. They can be ease altered for various needs. This wrapper suports Linux, Windows x86 and x64.

For every OS there are SWIG's interface named fftw.i for generating Java classes and wrapper on C and source file fftw.c for executing FFT. 

##Compiling for Linux using gcc
For compilation on Linux is necessary install SWIG and fftw3. fftw3 should be compiled with flag "-fPIC". It can be performed by "./configure CFLAGS=-fPIC". 

Open Makefile, locate string "swig -java -package main fftw.i" and replace "main" for your package hierarchy. For example "main.spectroscope.native". Then type in terminal "make" and you'll get "libfftw.so". Copy generated *.java files and libfftw.so into your projects.

##Compiling for Windows using VS2010
For compiling fftw library you need to set system variable JDK_HOME.

1. Open VS project.
2. Select appropriate architecture.
3. If you need a java package different from "main" then do the following steps. Open project's properties, select "Build Events/Pre-build Event", locate "swig -java -package main fftw.i" and change "main" as exaplained in "Compiling for Linux using gcc".
4. Build Project.
5. Copy generated *.java files, fftw.java and fftwlib.dll into your project.

Generated dll file located in fftw3_wrapper_java\Release(for x32) and fftw3_wrapper_java\x64\Release. Generated *.java files located in fftw3_wrapper_java\fftw3_wrapper_java.

NOTE: libfftw3-3.dll must be visible into your PATH variable.