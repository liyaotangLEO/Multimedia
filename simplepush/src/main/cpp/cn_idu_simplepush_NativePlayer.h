/* DO NOT EDIT THIS FILE - it is machine generated */
#include "jni.h"
/* Header for class cn_idu_simplepush_NativePlayer */

#ifndef _Included_cn_idu_simplepush_NativePlayer
#define _Included_cn_idu_simplepush_NativePlayer
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     cn_idu_simplepush_NativePlayer
 * Method:    startPush
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL
Java_cn_idu_simplepush_NativePlayer_startPush
        (JNIEnv
         *, jobject, jstring);

/*
 * Class:     cn_idu_simplepush_NativePlayer
 * Method:    stopPush
 * Signature: ()V
 */
JNIEXPORT void JNICALL
Java_cn_idu_simplepush_NativePlayer_stopPush
        (JNIEnv
         *, jobject);

/*
 * Class:     cn_idu_simplepush_NativePlayer
 * Method:    release
 * Signature: ()V
 */
JNIEXPORT void JNICALL
Java_cn_idu_simplepush_NativePlayer_release
        (JNIEnv
         *, jobject);

/*
 * Class:     cn_idu_simplepush_NativePlayer
 * Method:    setVideoOptions
 * Signature: (IIII)V
 */
JNIEXPORT void JNICALL
Java_cn_idu_simplepush_NativePlayer_setVideoOptions
        (JNIEnv
         *, jobject, jint, jint, jint, jint);

/*
 * Class:     cn_idu_simplepush_NativePlayer
 * Method:    setAudioOptions
 * Signature: (II)V
 */
JNIEXPORT void JNICALL
Java_cn_idu_simplepush_NativePlayer_setAudioOptions
        (JNIEnv
         *, jobject, jint, jint);

/*
 * Class:     cn_idu_simplepush_NativePlayer
 * Method:    sendVideoPacket
 * Signature: ([B)V
 */
JNIEXPORT void JNICALL
Java_cn_idu_simplepush_NativePlayer_sendVideoPacket
        (JNIEnv
         *, jobject, jbyteArray);

/*
 * Class:     cn_idu_simplepush_NativePlayer
 * Method:    sendAudioPacket
 * Signature: ([BI)V
 */
JNIEXPORT void JNICALL
Java_cn_idu_simplepush_NativePlayer_sendAudioPacket
        (JNIEnv
         *, jobject, jbyteArray, jint);

#ifdef __cplusplus
}
#endif
#endif