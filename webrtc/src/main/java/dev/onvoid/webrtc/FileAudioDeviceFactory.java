package dev.onvoid.webrtc;

import dev.onvoid.webrtc.internal.NativeLoader;
import dev.onvoid.webrtc.internal.NativeObject;

public class FileAudioDeviceFactory extends NativeObject {

	static {
		try {
			NativeLoader.loadLibrary("webrtc-java");
		} catch (Exception e) {
			throw new RuntimeException("Load library 'webrtc-java' failed", e);
		}
	}

	public static native void setFilesToUse(String inputAudioFile, String outputAudioFile);
}
