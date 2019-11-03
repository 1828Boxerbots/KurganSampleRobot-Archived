/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class edu_wpi_first_hal_can_CANJNI */

#ifndef _Included_edu_wpi_first_hal_can_CANJNI
#define _Included_edu_wpi_first_hal_can_CANJNI
#ifdef __cplusplus
extern "C" {
#endif
#undef edu_wpi_first_hal_can_CANJNI_CAN_SEND_PERIOD_NO_REPEAT
#define edu_wpi_first_hal_can_CANJNI_CAN_SEND_PERIOD_NO_REPEAT 0L
#undef edu_wpi_first_hal_can_CANJNI_CAN_SEND_PERIOD_STOP_REPEATING
#define edu_wpi_first_hal_can_CANJNI_CAN_SEND_PERIOD_STOP_REPEATING -1L
#undef edu_wpi_first_hal_can_CANJNI_CAN_IS_FRAME_REMOTE
#define edu_wpi_first_hal_can_CANJNI_CAN_IS_FRAME_REMOTE -2147483648L
#undef edu_wpi_first_hal_can_CANJNI_CAN_IS_FRAME_11BIT
#define edu_wpi_first_hal_can_CANJNI_CAN_IS_FRAME_11BIT 1073741824L
/*
 * Class:     edu_wpi_first_hal_can_CANJNI
 * Method:    FRCNetCommCANSessionMuxSendMessage
 * Signature: (I[BI)V
 */
JNIEXPORT void JNICALL Java_edu_wpi_first_hal_can_CANJNI_FRCNetCommCANSessionMuxSendMessage
  (JNIEnv *, jclass, jint, jbyteArray, jint);

/*
 * Class:     edu_wpi_first_hal_can_CANJNI
 * Method:    FRCNetCommCANSessionMuxReceiveMessage
 * Signature: (Ljava/nio/IntBuffer;ILjava/nio/ByteBuffer;)[B
 */
JNIEXPORT jbyteArray JNICALL Java_edu_wpi_first_hal_can_CANJNI_FRCNetCommCANSessionMuxReceiveMessage
  (JNIEnv *, jclass, jobject, jint, jobject);

/*
 * Class:     edu_wpi_first_hal_can_CANJNI
 * Method:    GetCANStatus
 * Signature: (Ledu/wpi/first/hal/can/CANStatus;)V
 */
JNIEXPORT void JNICALL Java_edu_wpi_first_hal_can_CANJNI_GetCANStatus
  (JNIEnv *, jclass, jobject);

#ifdef __cplusplus
}
#endif
#endif