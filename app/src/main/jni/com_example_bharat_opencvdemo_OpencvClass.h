/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
#include "opencv2/opencv.hpp"
#include <opencv/cv.h>
#include <opencv2/imgproc/imgproc.hpp>
/* Header for class com_example_bharat_opencvdemo_OpencvClass */
using namespace cv;

#ifndef _Included_com_example_bharat_opencvdemo_OpencvClass
#define _Included_com_example_bharat_opencvdemo_OpencvClass
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_example_bharat_opencvdemo_OpencvClass
 * Method:    faceDetection
 * Signature: (J)V
 */

 void detect(Mat& frame);

JNIEXPORT void JNICALL Java_com_example_bharat_opencvdemo_OpencvClass_faceDetection
  (JNIEnv *, jclass, jlong);

#ifdef __cplusplus
}
#endif
#endif
