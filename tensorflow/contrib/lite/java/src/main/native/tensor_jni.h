/* Copyright 2017 The TensorFlow Authors. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/

#ifndef TENSORFLOW_CONTRIB_LITE_JAVA_TENSOR_JNI_H_
#define TENSORFLOW_CONTRIB_LITE_JAVA_TENSOR_JNI_H_

#include <jni.h>
#include "tensorflow/contrib/lite/context.h"

#ifdef __cplusplus
extern "C" {
#endif  // __cplusplus

/*
 * Class:     org_tensorflow_lite_Tensor
 * Method:    buffer
 * Signature: (J)Ljava/nio/ByteBuffer;
 */
JNIEXPORT jobject JNICALL Java_org_tensorflow_lite_Tensor_buffer(JNIEnv* env,
                                                                 jclass clazz,
                                                                 jlong handle);

/*
 *  Class:     org_tensorflow_lite_Tensor
 *  Method:    writeDirectBuffer
 *  Signature: (JLjava/nio/ByteBuffer;)
 */
JNIEXPORT void JNICALL Java_org_tensorflow_lite_Tensor_writeDirectBuffer(
    JNIEnv* env, jclass clazz, jlong handle, jobject src);

/*
 *  Class:     org_tensorflow_lite_Tensor
 *  Method:    dtype
 *  Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_tensorflow_lite_Tensor_dtype(JNIEnv* env,
                                                             jclass clazz,
                                                             jlong handle);

/*
 *  Class:     org_tensorflow_lite_Tensor
 *  Method:    shape
 *  Signature: (J)[I
 */
JNIEXPORT jintArray JNICALL Java_org_tensorflow_lite_Tensor_shape(JNIEnv* env,
                                                                  jclass clazz,
                                                                  jlong handle);

/*
 *  Class:     org_tensorflow_lite_Tensor
 *  Method:    numBytes
 *  Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_tensorflow_lite_Tensor_numBytes(JNIEnv* env,
                                                                jclass clazz,
                                                                jlong handle);

/*
 *  Class:     org_tensorflow_lite_Tensor
 *  Method:    readMultiDimensionalArray
 *  Signature: (JLjava/lang/Object;)
 */
JNIEXPORT void JNICALL
Java_org_tensorflow_lite_Tensor_readMultiDimensionalArray(JNIEnv* env,
                                                          jclass clazz,
                                                          jlong handle,
                                                          jobject dst);

/*
 *  Class:     org_tensorflow_lite_Tensor
 *  Method:    writeMultidimensionalArray
 *  Signature: (JLjava/lang/Object;)
 */
JNIEXPORT void JNICALL
Java_org_tensorflow_lite_Tensor_writeMultiDimensionalArray(JNIEnv* env,
                                                           jclass clazz,
                                                           jlong handle,
                                                           jobject src);

#ifdef __cplusplus
}  // extern "C"
#endif  // __cplusplus
#endif  // TENSORFLOW_CONTRIB_LITE_JAVA_TENSOR_JNI_H_
