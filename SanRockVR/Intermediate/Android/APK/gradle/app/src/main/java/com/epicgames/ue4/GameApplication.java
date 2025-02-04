package com.epicgames.ue4;

import android.app.Application;
import android.arch.lifecycle.Lifecycle;
import android.arch.lifecycle.LifecycleObserver;
import android.arch.lifecycle.OnLifecycleEvent;
import android.arch.lifecycle.ProcessLifecycleOwner;

import com.epicgames.ue4.network.NetworkChangedManager;


public class GameApplication extends Application implements LifecycleObserver {
	private static final Logger Log = new Logger("UE4-" + GameApplication.class.getSimpleName());

	private static boolean isForeground = false;

	@Override
	public void onCreate() {
		super.onCreate();


		ProcessLifecycleOwner.get().getLifecycle().addObserver(this);

		NetworkChangedManager.getInstance().initNetworkCallback(this);
	}

	@OnLifecycleEvent(Lifecycle.Event.ON_START)
	void onEnterForeground() {
		Log.verbose("App in foreground");
		isForeground = true;
	}

	@OnLifecycleEvent(Lifecycle.Event.ON_STOP)
	void onEnterBackground() {
		Log.verbose("App in background");
		isForeground = false;
	}

	@SuppressWarnings("unused")
	public static boolean isAppInForeground() {
		return isForeground;
	}

	public static boolean isAppInBackground() {
		return !isForeground;
	}
}
