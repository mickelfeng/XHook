/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_mhb_xhook_util_NativeEntry */

#ifndef _Included_com_mhb_xhook_util_NativeEntry
#define _Included_com_mhb_xhook_util_NativeEntry
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_mhb_xhook_util_NativeEntry
 * Method:    initSystemNativeHook
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_mhb_xhook_util_NativeEntry_initSystemNativeHook
  (JNIEnv *, jclass);

/*
 * Class:     com_mhb_xhook_util_NativeEntry
 * Method:    initCustomNativeHook
 * Signature: (Ljava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_mhb_xhook_util_NativeEntry_initCustomNativeHook
  (JNIEnv *, jclass, jstring);

/*
 * Class:     com_mhb_xhook_util_NativeEntry
 * Method:    logFilePathFromFd
 * Signature: (IIII)Z
 */
JNIEXPORT jboolean JNICALL Java_com_mhb_xhook_util_NativeEntry_logFilePathFromFd
  (JNIEnv *, jclass, jint, jint, jint, jint);

#ifdef __cplusplus
}
#endif
#endif