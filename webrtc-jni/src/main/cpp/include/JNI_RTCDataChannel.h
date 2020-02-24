/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class dev_onvoid_webrtc_RTCDataChannel */

#ifndef _Included_dev_onvoid_webrtc_RTCDataChannel
#define _Included_dev_onvoid_webrtc_RTCDataChannel
#ifdef __cplusplus
extern "C" {
#endif
	/*
	 * Class:     dev_onvoid_webrtc_RTCDataChannel
	 * Method:    registerObserver
	 * Signature: (Ldev/onvoid/webrtc/RTCDataChannelObserver;)V
	 */
	JNIEXPORT void JNICALL Java_dev_onvoid_webrtc_RTCDataChannel_registerObserver
	(JNIEnv *, jobject, jobject);

	/*
	 * Class:     dev_onvoid_webrtc_RTCDataChannel
	 * Method:    unregisterObserver
	 * Signature: ()V
	 */
	JNIEXPORT void JNICALL Java_dev_onvoid_webrtc_RTCDataChannel_unregisterObserver
	(JNIEnv *, jobject);

	/*
	 * Class:     dev_onvoid_webrtc_RTCDataChannel
	 * Method:    getLabel
	 * Signature: ()Ljava/lang/String;
	 */
	JNIEXPORT jstring JNICALL Java_dev_onvoid_webrtc_RTCDataChannel_getLabel
	(JNIEnv *, jobject);

	/*
	 * Class:     dev_onvoid_webrtc_RTCDataChannel
	 * Method:    isReliable
	 * Signature: ()Z
	 */
	JNIEXPORT jboolean JNICALL Java_dev_onvoid_webrtc_RTCDataChannel_isReliable
	(JNIEnv *, jobject);

	/*
	 * Class:     dev_onvoid_webrtc_RTCDataChannel
	 * Method:    isOrdered
	 * Signature: ()Z
	 */
	JNIEXPORT jboolean JNICALL Java_dev_onvoid_webrtc_RTCDataChannel_isOrdered
	(JNIEnv *, jobject);

	/*
	 * Class:     dev_onvoid_webrtc_RTCDataChannel
	 * Method:    getMaxPacketLifeTime
	 * Signature: ()I
	 */
	JNIEXPORT jint JNICALL Java_dev_onvoid_webrtc_RTCDataChannel_getMaxPacketLifeTime
	(JNIEnv *, jobject);

	/*
	 * Class:     dev_onvoid_webrtc_RTCDataChannel
	 * Method:    getMaxRetransmits
	 * Signature: ()I
	 */
	JNIEXPORT jint JNICALL Java_dev_onvoid_webrtc_RTCDataChannel_getMaxRetransmits
	(JNIEnv *, jobject);

	/*
	 * Class:     dev_onvoid_webrtc_RTCDataChannel
	 * Method:    getProtocol
	 * Signature: ()Ljava/lang/String;
	 */
	JNIEXPORT jstring JNICALL Java_dev_onvoid_webrtc_RTCDataChannel_getProtocol
	(JNIEnv *, jobject);

	/*
	 * Class:     dev_onvoid_webrtc_RTCDataChannel
	 * Method:    isNegotiated
	 * Signature: ()Z
	 */
	JNIEXPORT jboolean JNICALL Java_dev_onvoid_webrtc_RTCDataChannel_isNegotiated
	(JNIEnv *, jobject);

	/*
	 * Class:     dev_onvoid_webrtc_RTCDataChannel
	 * Method:    getId
	 * Signature: ()I
	 */
	JNIEXPORT jint JNICALL Java_dev_onvoid_webrtc_RTCDataChannel_getId
	(JNIEnv *, jobject);

	/*
	 * Class:     dev_onvoid_webrtc_RTCDataChannel
	 * Method:    getState
	 * Signature: ()Ldev/onvoid/webrtc/RTCDataChannelState;
	 */
	JNIEXPORT jobject JNICALL Java_dev_onvoid_webrtc_RTCDataChannel_getState
	(JNIEnv *, jobject);

	/*
	 * Class:     dev_onvoid_webrtc_RTCDataChannel
	 * Method:    getBufferedAmount
	 * Signature: ()J
	 */
	JNIEXPORT jlong JNICALL Java_dev_onvoid_webrtc_RTCDataChannel_getBufferedAmount
	(JNIEnv *, jobject);

	/*
	 * Class:     dev_onvoid_webrtc_RTCDataChannel
	 * Method:    close
	 * Signature: ()V
	 */
	JNIEXPORT void JNICALL Java_dev_onvoid_webrtc_RTCDataChannel_close
	(JNIEnv *, jobject);

	/*
	 * Class:     dev_onvoid_webrtc_RTCDataChannel
	 * Method:    dispose
	 * Signature: ()V
	 */
	JNIEXPORT void JNICALL Java_dev_onvoid_webrtc_RTCDataChannel_dispose
	(JNIEnv *, jobject);

	/*
	 * Class:     dev_onvoid_webrtc_RTCDataChannel
	 * Method:    sendDirectBuffer
	 * Signature: (Ljava/nio/ByteBuffer;Z)V
	 */
	JNIEXPORT void JNICALL Java_dev_onvoid_webrtc_RTCDataChannel_sendDirectBuffer
	(JNIEnv *, jobject, jobject, jboolean);

	/*
	 * Class:     dev_onvoid_webrtc_RTCDataChannel
	 * Method:    sendByteArrayBuffer
	 * Signature: ([BZ)V
	 */
	JNIEXPORT void JNICALL Java_dev_onvoid_webrtc_RTCDataChannel_sendByteArrayBuffer
	(JNIEnv *, jobject, jbyteArray, jboolean);

#ifdef __cplusplus
}
#endif
#endif