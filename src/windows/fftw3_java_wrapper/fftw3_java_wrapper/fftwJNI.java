/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.8
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package main;

public class fftwJNI {
  public final static native long new_doubleArray(int jarg1);
  public final static native void delete_doubleArray(long jarg1);
  public final static native double doubleArray_getitem(long jarg1, int jarg2);
  public final static native void doubleArray_setitem(long jarg1, int jarg2, double jarg3);
  public final static native void calculate(long jarg1, int jarg2, long jarg3);
}