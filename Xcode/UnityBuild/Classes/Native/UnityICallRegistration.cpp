void RegisterAllStrippedInternalCalls()
{
	//Start Registrations for type : Unity.Collections.LowLevel.Unsafe.UnsafeUtility

		//System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::Free(System.Void*,Unity.Collections.Allocator)
		void Register_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_Free();
		Register_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_Free();

		//System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::MemCpy(System.Void*,System.Void*,System.Int64)
		void Register_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_MemCpy();
		Register_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_MemCpy();

		//System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::MemCpyReplicate(System.Void*,System.Void*,System.Int32,System.Int32)
		void Register_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_MemCpyReplicate();
		Register_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_MemCpyReplicate();

		//System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::MemCpyStride(System.Void*,System.Int32,System.Void*,System.Int32,System.Int32,System.Int32)
		void Register_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_MemCpyStride();
		Register_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_MemCpyStride();

		//System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::MemSet(System.Void*,System.Byte,System.Int64)
		void Register_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_MemSet();
		Register_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_MemSet();

		//System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::Malloc(System.Int64,System.Int32,Unity.Collections.Allocator)
		void Register_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_Malloc();
		Register_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_Malloc();

	//End Registrations for type : Unity.Collections.LowLevel.Unsafe.UnsafeUtility

	//Start Registrations for type : Unity.Jobs.JobHandle

		//System.Void Unity.Jobs.JobHandle::ScheduleBatchedJobs()
		void Register_Unity_Jobs_JobHandle_ScheduleBatchedJobs();
		Register_Unity_Jobs_JobHandle_ScheduleBatchedJobs();

		//System.Void Unity.Jobs.JobHandle::ScheduleBatchedJobsAndComplete(Unity.Jobs.JobHandle&)
		void Register_Unity_Jobs_JobHandle_ScheduleBatchedJobsAndComplete();
		Register_Unity_Jobs_JobHandle_ScheduleBatchedJobsAndComplete();

	//End Registrations for type : Unity.Jobs.JobHandle

	//Start Registrations for type : Unity.Jobs.LowLevel.Unsafe.JobsUtility

		//System.Boolean Unity.Jobs.LowLevel.Unsafe.JobsUtility::GetWorkStealingRange(Unity.Jobs.LowLevel.Unsafe.JobRanges&,System.Int32,System.Int32&,System.Int32&)
		void Register_Unity_Jobs_LowLevel_Unsafe_JobsUtility_GetWorkStealingRange();
		Register_Unity_Jobs_LowLevel_Unsafe_JobsUtility_GetWorkStealingRange();

		//System.IntPtr Unity.Jobs.LowLevel.Unsafe.JobsUtility::CreateJobReflectionData(System.Type,System.Type,Unity.Jobs.LowLevel.Unsafe.JobType,System.Object,System.Object,System.Object)
		void Register_Unity_Jobs_LowLevel_Unsafe_JobsUtility_CreateJobReflectionData();
		Register_Unity_Jobs_LowLevel_Unsafe_JobsUtility_CreateJobReflectionData();

		//System.Void Unity.Jobs.LowLevel.Unsafe.JobsUtility::ScheduleParallelFor_Injected(Unity.Jobs.LowLevel.Unsafe.JobsUtility/JobScheduleParameters&,System.Int32,System.Int32,Unity.Jobs.JobHandle&)
		void Register_Unity_Jobs_LowLevel_Unsafe_JobsUtility_ScheduleParallelFor_Injected();
		Register_Unity_Jobs_LowLevel_Unsafe_JobsUtility_ScheduleParallelFor_Injected();

		//System.Void Unity.Jobs.LowLevel.Unsafe.JobsUtility::Schedule_Injected(Unity.Jobs.LowLevel.Unsafe.JobsUtility/JobScheduleParameters&,Unity.Jobs.JobHandle&)
		void Register_Unity_Jobs_LowLevel_Unsafe_JobsUtility_Schedule_Injected();
		Register_Unity_Jobs_LowLevel_Unsafe_JobsUtility_Schedule_Injected();

	//End Registrations for type : Unity.Jobs.LowLevel.Unsafe.JobsUtility

	//Start Registrations for type : Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility

		//System.IntPtr Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::CreateMarker(System.String,System.UInt16,Unity.Profiling.LowLevel.MarkerFlags,System.Int32)
		void Register_Unity_Profiling_LowLevel_Unsafe_ProfilerUnsafeUtility_CreateMarker();
		Register_Unity_Profiling_LowLevel_Unsafe_ProfilerUnsafeUtility_CreateMarker();

		//System.Void Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::BeginSample(System.IntPtr)
		void Register_Unity_Profiling_LowLevel_Unsafe_ProfilerUnsafeUtility_BeginSample();
		Register_Unity_Profiling_LowLevel_Unsafe_ProfilerUnsafeUtility_BeginSample();

		//System.Void Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)
		void Register_Unity_Profiling_LowLevel_Unsafe_ProfilerUnsafeUtility_EndSample();
		Register_Unity_Profiling_LowLevel_Unsafe_ProfilerUnsafeUtility_EndSample();

	//End Registrations for type : Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility

	//Start Registrations for type : UnityEngine.AndroidJNI

		//System.Boolean UnityEngine.AndroidJNI::CallBooleanMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
		void Register_UnityEngine_AndroidJNI_CallBooleanMethod();
		Register_UnityEngine_AndroidJNI_CallBooleanMethod();

		//System.Boolean UnityEngine.AndroidJNI::CallStaticBooleanMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
		void Register_UnityEngine_AndroidJNI_CallStaticBooleanMethod();
		Register_UnityEngine_AndroidJNI_CallStaticBooleanMethod();

		//System.Boolean[] UnityEngine.AndroidJNI::FromBooleanArray(System.IntPtr)
		void Register_UnityEngine_AndroidJNI_FromBooleanArray();
		Register_UnityEngine_AndroidJNI_FromBooleanArray();

		//System.Byte[] UnityEngine.AndroidJNI::FromByteArray(System.IntPtr)
		void Register_UnityEngine_AndroidJNI_FromByteArray();
		Register_UnityEngine_AndroidJNI_FromByteArray();

		//System.Char UnityEngine.AndroidJNI::CallCharMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
		void Register_UnityEngine_AndroidJNI_CallCharMethod();
		Register_UnityEngine_AndroidJNI_CallCharMethod();

		//System.Char UnityEngine.AndroidJNI::CallStaticCharMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
		void Register_UnityEngine_AndroidJNI_CallStaticCharMethod();
		Register_UnityEngine_AndroidJNI_CallStaticCharMethod();

		//System.Char[] UnityEngine.AndroidJNI::FromCharArray(System.IntPtr)
		void Register_UnityEngine_AndroidJNI_FromCharArray();
		Register_UnityEngine_AndroidJNI_FromCharArray();

		//System.Double UnityEngine.AndroidJNI::CallDoubleMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
		void Register_UnityEngine_AndroidJNI_CallDoubleMethod();
		Register_UnityEngine_AndroidJNI_CallDoubleMethod();

		//System.Double UnityEngine.AndroidJNI::CallStaticDoubleMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
		void Register_UnityEngine_AndroidJNI_CallStaticDoubleMethod();
		Register_UnityEngine_AndroidJNI_CallStaticDoubleMethod();

		//System.Double[] UnityEngine.AndroidJNI::FromDoubleArray(System.IntPtr)
		void Register_UnityEngine_AndroidJNI_FromDoubleArray();
		Register_UnityEngine_AndroidJNI_FromDoubleArray();

		//System.Int16 UnityEngine.AndroidJNI::CallShortMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
		void Register_UnityEngine_AndroidJNI_CallShortMethod();
		Register_UnityEngine_AndroidJNI_CallShortMethod();

		//System.Int16 UnityEngine.AndroidJNI::CallStaticShortMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
		void Register_UnityEngine_AndroidJNI_CallStaticShortMethod();
		Register_UnityEngine_AndroidJNI_CallStaticShortMethod();

		//System.Int16[] UnityEngine.AndroidJNI::FromShortArray(System.IntPtr)
		void Register_UnityEngine_AndroidJNI_FromShortArray();
		Register_UnityEngine_AndroidJNI_FromShortArray();

		//System.Int32 UnityEngine.AndroidJNI::CallIntMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
		void Register_UnityEngine_AndroidJNI_CallIntMethod();
		Register_UnityEngine_AndroidJNI_CallIntMethod();

		//System.Int32 UnityEngine.AndroidJNI::CallStaticIntMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
		void Register_UnityEngine_AndroidJNI_CallStaticIntMethod();
		Register_UnityEngine_AndroidJNI_CallStaticIntMethod();

		//System.Int32 UnityEngine.AndroidJNI::GetArrayLength(System.IntPtr)
		void Register_UnityEngine_AndroidJNI_GetArrayLength();
		Register_UnityEngine_AndroidJNI_GetArrayLength();

		//System.Int32[] UnityEngine.AndroidJNI::FromIntArray(System.IntPtr)
		void Register_UnityEngine_AndroidJNI_FromIntArray();
		Register_UnityEngine_AndroidJNI_FromIntArray();

		//System.Int64 UnityEngine.AndroidJNI::CallLongMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
		void Register_UnityEngine_AndroidJNI_CallLongMethod();
		Register_UnityEngine_AndroidJNI_CallLongMethod();

		//System.Int64 UnityEngine.AndroidJNI::CallStaticLongMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
		void Register_UnityEngine_AndroidJNI_CallStaticLongMethod();
		Register_UnityEngine_AndroidJNI_CallStaticLongMethod();

		//System.Int64[] UnityEngine.AndroidJNI::FromLongArray(System.IntPtr)
		void Register_UnityEngine_AndroidJNI_FromLongArray();
		Register_UnityEngine_AndroidJNI_FromLongArray();

		//System.IntPtr UnityEngine.AndroidJNI::CallObjectMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
		void Register_UnityEngine_AndroidJNI_CallObjectMethod();
		Register_UnityEngine_AndroidJNI_CallObjectMethod();

		//System.IntPtr UnityEngine.AndroidJNI::CallStaticObjectMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
		void Register_UnityEngine_AndroidJNI_CallStaticObjectMethod();
		Register_UnityEngine_AndroidJNI_CallStaticObjectMethod();

		//System.IntPtr UnityEngine.AndroidJNI::ExceptionOccurred()
		void Register_UnityEngine_AndroidJNI_ExceptionOccurred();
		Register_UnityEngine_AndroidJNI_ExceptionOccurred();

		//System.IntPtr UnityEngine.AndroidJNI::FindClass(System.String)
		void Register_UnityEngine_AndroidJNI_FindClass();
		Register_UnityEngine_AndroidJNI_FindClass();

		//System.IntPtr UnityEngine.AndroidJNI::FromReflectedMethod(System.IntPtr)
		void Register_UnityEngine_AndroidJNI_FromReflectedMethod();
		Register_UnityEngine_AndroidJNI_FromReflectedMethod();

		//System.IntPtr UnityEngine.AndroidJNI::GetMethodID(System.IntPtr,System.String,System.String)
		void Register_UnityEngine_AndroidJNI_GetMethodID();
		Register_UnityEngine_AndroidJNI_GetMethodID();

		//System.IntPtr UnityEngine.AndroidJNI::GetObjectArrayElement(System.IntPtr,System.Int32)
		void Register_UnityEngine_AndroidJNI_GetObjectArrayElement();
		Register_UnityEngine_AndroidJNI_GetObjectArrayElement();

		//System.IntPtr UnityEngine.AndroidJNI::GetObjectClass(System.IntPtr)
		void Register_UnityEngine_AndroidJNI_GetObjectClass();
		Register_UnityEngine_AndroidJNI_GetObjectClass();

		//System.IntPtr UnityEngine.AndroidJNI::GetStaticMethodID(System.IntPtr,System.String,System.String)
		void Register_UnityEngine_AndroidJNI_GetStaticMethodID();
		Register_UnityEngine_AndroidJNI_GetStaticMethodID();

		//System.IntPtr UnityEngine.AndroidJNI::NewGlobalRef(System.IntPtr)
		void Register_UnityEngine_AndroidJNI_NewGlobalRef();
		Register_UnityEngine_AndroidJNI_NewGlobalRef();

		//System.IntPtr UnityEngine.AndroidJNI::NewLocalRef(System.IntPtr)
		void Register_UnityEngine_AndroidJNI_NewLocalRef();
		Register_UnityEngine_AndroidJNI_NewLocalRef();

		//System.IntPtr UnityEngine.AndroidJNI::NewObject(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
		void Register_UnityEngine_AndroidJNI_NewObject();
		Register_UnityEngine_AndroidJNI_NewObject();

		//System.IntPtr UnityEngine.AndroidJNI::NewObjectArray(System.Int32,System.IntPtr,System.IntPtr)
		void Register_UnityEngine_AndroidJNI_NewObjectArray();
		Register_UnityEngine_AndroidJNI_NewObjectArray();

		//System.IntPtr UnityEngine.AndroidJNI::NewStringFromStr(System.String)
		void Register_UnityEngine_AndroidJNI_NewStringFromStr();
		Register_UnityEngine_AndroidJNI_NewStringFromStr();

		//System.IntPtr UnityEngine.AndroidJNI::NewWeakGlobalRef(System.IntPtr)
		void Register_UnityEngine_AndroidJNI_NewWeakGlobalRef();
		Register_UnityEngine_AndroidJNI_NewWeakGlobalRef();

		//System.IntPtr UnityEngine.AndroidJNI::ToBooleanArray(System.Boolean[])
		void Register_UnityEngine_AndroidJNI_ToBooleanArray();
		Register_UnityEngine_AndroidJNI_ToBooleanArray();

		//System.IntPtr UnityEngine.AndroidJNI::ToByteArray(System.Byte[])
		void Register_UnityEngine_AndroidJNI_ToByteArray();
		Register_UnityEngine_AndroidJNI_ToByteArray();

		//System.IntPtr UnityEngine.AndroidJNI::ToCharArray(System.Char[])
		void Register_UnityEngine_AndroidJNI_ToCharArray();
		Register_UnityEngine_AndroidJNI_ToCharArray();

		//System.IntPtr UnityEngine.AndroidJNI::ToDoubleArray(System.Double[])
		void Register_UnityEngine_AndroidJNI_ToDoubleArray();
		Register_UnityEngine_AndroidJNI_ToDoubleArray();

		//System.IntPtr UnityEngine.AndroidJNI::ToFloatArray(System.Single[])
		void Register_UnityEngine_AndroidJNI_ToFloatArray();
		Register_UnityEngine_AndroidJNI_ToFloatArray();

		//System.IntPtr UnityEngine.AndroidJNI::ToIntArray(System.Int32[])
		void Register_UnityEngine_AndroidJNI_ToIntArray();
		Register_UnityEngine_AndroidJNI_ToIntArray();

		//System.IntPtr UnityEngine.AndroidJNI::ToLongArray(System.Int64[])
		void Register_UnityEngine_AndroidJNI_ToLongArray();
		Register_UnityEngine_AndroidJNI_ToLongArray();

		//System.IntPtr UnityEngine.AndroidJNI::ToObjectArray(System.IntPtr[],System.IntPtr)
		void Register_UnityEngine_AndroidJNI_ToObjectArray();
		Register_UnityEngine_AndroidJNI_ToObjectArray();

		//System.IntPtr UnityEngine.AndroidJNI::ToSByteArray(System.SByte[])
		void Register_UnityEngine_AndroidJNI_ToSByteArray();
		Register_UnityEngine_AndroidJNI_ToSByteArray();

		//System.IntPtr UnityEngine.AndroidJNI::ToShortArray(System.Int16[])
		void Register_UnityEngine_AndroidJNI_ToShortArray();
		Register_UnityEngine_AndroidJNI_ToShortArray();

		//System.SByte UnityEngine.AndroidJNI::CallSByteMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
		void Register_UnityEngine_AndroidJNI_CallSByteMethod();
		Register_UnityEngine_AndroidJNI_CallSByteMethod();

		//System.SByte UnityEngine.AndroidJNI::CallStaticSByteMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
		void Register_UnityEngine_AndroidJNI_CallStaticSByteMethod();
		Register_UnityEngine_AndroidJNI_CallStaticSByteMethod();

		//System.SByte[] UnityEngine.AndroidJNI::FromSByteArray(System.IntPtr)
		void Register_UnityEngine_AndroidJNI_FromSByteArray();
		Register_UnityEngine_AndroidJNI_FromSByteArray();

		//System.Single UnityEngine.AndroidJNI::CallFloatMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
		void Register_UnityEngine_AndroidJNI_CallFloatMethod();
		Register_UnityEngine_AndroidJNI_CallFloatMethod();

		//System.Single UnityEngine.AndroidJNI::CallStaticFloatMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
		void Register_UnityEngine_AndroidJNI_CallStaticFloatMethod();
		Register_UnityEngine_AndroidJNI_CallStaticFloatMethod();

		//System.Single[] UnityEngine.AndroidJNI::FromFloatArray(System.IntPtr)
		void Register_UnityEngine_AndroidJNI_FromFloatArray();
		Register_UnityEngine_AndroidJNI_FromFloatArray();

		//System.String UnityEngine.AndroidJNI::CallStaticStringMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
		void Register_UnityEngine_AndroidJNI_CallStaticStringMethod();
		Register_UnityEngine_AndroidJNI_CallStaticStringMethod();

		//System.String UnityEngine.AndroidJNI::CallStringMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
		void Register_UnityEngine_AndroidJNI_CallStringMethod();
		Register_UnityEngine_AndroidJNI_CallStringMethod();

		//System.String UnityEngine.AndroidJNI::GetStringChars(System.IntPtr)
		void Register_UnityEngine_AndroidJNI_GetStringChars();
		Register_UnityEngine_AndroidJNI_GetStringChars();

		//System.Void UnityEngine.AndroidJNI::CallStaticVoidMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
		void Register_UnityEngine_AndroidJNI_CallStaticVoidMethod();
		Register_UnityEngine_AndroidJNI_CallStaticVoidMethod();

		//System.Void UnityEngine.AndroidJNI::DeleteGlobalRef(System.IntPtr)
		void Register_UnityEngine_AndroidJNI_DeleteGlobalRef();
		Register_UnityEngine_AndroidJNI_DeleteGlobalRef();

		//System.Void UnityEngine.AndroidJNI::DeleteLocalRef(System.IntPtr)
		void Register_UnityEngine_AndroidJNI_DeleteLocalRef();
		Register_UnityEngine_AndroidJNI_DeleteLocalRef();

		//System.Void UnityEngine.AndroidJNI::DeleteWeakGlobalRef(System.IntPtr)
		void Register_UnityEngine_AndroidJNI_DeleteWeakGlobalRef();
		Register_UnityEngine_AndroidJNI_DeleteWeakGlobalRef();

		//System.Void UnityEngine.AndroidJNI::ExceptionClear()
		void Register_UnityEngine_AndroidJNI_ExceptionClear();
		Register_UnityEngine_AndroidJNI_ExceptionClear();

		//System.Void UnityEngine.AndroidJNI::SetObjectArrayElement(System.IntPtr,System.Int32,System.IntPtr)
		void Register_UnityEngine_AndroidJNI_SetObjectArrayElement();
		Register_UnityEngine_AndroidJNI_SetObjectArrayElement();

	//End Registrations for type : UnityEngine.AndroidJNI

	//Start Registrations for type : UnityEngine.AnimationCurve

		//System.Boolean UnityEngine.AnimationCurve::Internal_Equals(System.IntPtr)
		void Register_UnityEngine_AnimationCurve_Internal_Equals();
		Register_UnityEngine_AnimationCurve_Internal_Equals();

		//System.IntPtr UnityEngine.AnimationCurve::Internal_Create(UnityEngine.Keyframe[])
		void Register_UnityEngine_AnimationCurve_Internal_Create();
		Register_UnityEngine_AnimationCurve_Internal_Create();

		//System.Void UnityEngine.AnimationCurve::Internal_Destroy(System.IntPtr)
		void Register_UnityEngine_AnimationCurve_Internal_Destroy();
		Register_UnityEngine_AnimationCurve_Internal_Destroy();

	//End Registrations for type : UnityEngine.AnimationCurve

	//Start Registrations for type : UnityEngine.Application

		//System.String UnityEngine.Application::get_persistentDataPath()
		void Register_UnityEngine_Application_get_persistentDataPath();
		Register_UnityEngine_Application_get_persistentDataPath();

		//System.Void UnityEngine.Application::set_targetFrameRate(System.Int32)
		void Register_UnityEngine_Application_set_targetFrameRate();
		Register_UnityEngine_Application_set_targetFrameRate();

	//End Registrations for type : UnityEngine.Application

	//Start Registrations for type : UnityEngine.AudioSettings

		//System.Boolean UnityEngine.AudioSettings::StartAudioOutput()
		void Register_UnityEngine_AudioSettings_StartAudioOutput();
		Register_UnityEngine_AudioSettings_StartAudioOutput();

		//System.Boolean UnityEngine.AudioSettings::StopAudioOutput()
		void Register_UnityEngine_AudioSettings_StopAudioOutput();
		Register_UnityEngine_AudioSettings_StopAudioOutput();

	//End Registrations for type : UnityEngine.AudioSettings

	//Start Registrations for type : UnityEngine.Behaviour

		//System.Boolean UnityEngine.Behaviour::get_enabled()
		void Register_UnityEngine_Behaviour_get_enabled();
		Register_UnityEngine_Behaviour_get_enabled();

		//System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
		void Register_UnityEngine_Behaviour_set_enabled();
		Register_UnityEngine_Behaviour_set_enabled();

	//End Registrations for type : UnityEngine.Behaviour

	//Start Registrations for type : UnityEngine.Camera

		//System.Boolean UnityEngine.Camera::get_stereoEnabled()
		void Register_UnityEngine_Camera_get_stereoEnabled();
		Register_UnityEngine_Camera_get_stereoEnabled();

		//System.Int32 UnityEngine.Camera::GetAllCamerasCount()
		void Register_UnityEngine_Camera_GetAllCamerasCount();
		Register_UnityEngine_Camera_GetAllCamerasCount();

		//System.Int32 UnityEngine.Camera::GetAllCamerasImpl(UnityEngine.Camera[])
		void Register_UnityEngine_Camera_GetAllCamerasImpl();
		Register_UnityEngine_Camera_GetAllCamerasImpl();

		//System.Int32 UnityEngine.Camera::get_cullingMask()
		void Register_UnityEngine_Camera_get_cullingMask();
		Register_UnityEngine_Camera_get_cullingMask();

		//System.Int32 UnityEngine.Camera::get_eventMask()
		void Register_UnityEngine_Camera_get_eventMask();
		Register_UnityEngine_Camera_get_eventMask();

		//System.Int32 UnityEngine.Camera::get_targetDisplay()
		void Register_UnityEngine_Camera_get_targetDisplay();
		Register_UnityEngine_Camera_get_targetDisplay();

		//System.Single UnityEngine.Camera::get_farClipPlane()
		void Register_UnityEngine_Camera_get_farClipPlane();
		Register_UnityEngine_Camera_get_farClipPlane();

		//System.Single UnityEngine.Camera::get_nearClipPlane()
		void Register_UnityEngine_Camera_get_nearClipPlane();
		Register_UnityEngine_Camera_get_nearClipPlane();

		//System.Void UnityEngine.Camera::AddCommandBufferImpl(UnityEngine.Rendering.CameraEvent,UnityEngine.Rendering.CommandBuffer)
		void Register_UnityEngine_Camera_AddCommandBufferImpl();
		Register_UnityEngine_Camera_AddCommandBufferImpl();

		//System.Void UnityEngine.Camera::RemoveCommandBufferImpl(UnityEngine.Rendering.CameraEvent,UnityEngine.Rendering.CommandBuffer)
		void Register_UnityEngine_Camera_RemoveCommandBufferImpl();
		Register_UnityEngine_Camera_RemoveCommandBufferImpl();

		//System.Void UnityEngine.Camera::ResetProjectionMatrix()
		void Register_UnityEngine_Camera_ResetProjectionMatrix();
		Register_UnityEngine_Camera_ResetProjectionMatrix();

		//System.Void UnityEngine.Camera::ScreenPointToRay_Injected(UnityEngine.Vector2&,UnityEngine.Camera/MonoOrStereoscopicEye,UnityEngine.Ray&)
		void Register_UnityEngine_Camera_ScreenPointToRay_Injected();
		Register_UnityEngine_Camera_ScreenPointToRay_Injected();

		//System.Void UnityEngine.Camera::get_pixelRect_Injected(UnityEngine.Rect&)
		void Register_UnityEngine_Camera_get_pixelRect_Injected();
		Register_UnityEngine_Camera_get_pixelRect_Injected();

		//System.Void UnityEngine.Camera::set_clearFlags(UnityEngine.CameraClearFlags)
		void Register_UnityEngine_Camera_set_clearFlags();
		Register_UnityEngine_Camera_set_clearFlags();

		//System.Void UnityEngine.Camera::set_projectionMatrix_Injected(UnityEngine.Matrix4x4&)
		void Register_UnityEngine_Camera_set_projectionMatrix_Injected();
		Register_UnityEngine_Camera_set_projectionMatrix_Injected();

		//UnityEngine.Camera UnityEngine.Camera::get_main()
		void Register_UnityEngine_Camera_get_main();
		Register_UnityEngine_Camera_get_main();

		//UnityEngine.CameraClearFlags UnityEngine.Camera::get_clearFlags()
		void Register_UnityEngine_Camera_get_clearFlags();
		Register_UnityEngine_Camera_get_clearFlags();

		//UnityEngine.RenderTexture UnityEngine.Camera::get_targetTexture()
		void Register_UnityEngine_Camera_get_targetTexture();
		Register_UnityEngine_Camera_get_targetTexture();

	//End Registrations for type : UnityEngine.Camera

	//Start Registrations for type : UnityEngine.CameraRaycastHelper

		//UnityEngine.GameObject UnityEngine.CameraRaycastHelper::RaycastTry2D_Injected(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)
		void Register_UnityEngine_CameraRaycastHelper_RaycastTry2D_Injected();
		Register_UnityEngine_CameraRaycastHelper_RaycastTry2D_Injected();

		//UnityEngine.GameObject UnityEngine.CameraRaycastHelper::RaycastTry_Injected(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)
		void Register_UnityEngine_CameraRaycastHelper_RaycastTry_Injected();
		Register_UnityEngine_CameraRaycastHelper_RaycastTry_Injected();

	//End Registrations for type : UnityEngine.CameraRaycastHelper

	//Start Registrations for type : UnityEngine.Collider

		//System.Void UnityEngine.Collider::set_enabled(System.Boolean)
		void Register_UnityEngine_Collider_set_enabled();
		Register_UnityEngine_Collider_set_enabled();

	//End Registrations for type : UnityEngine.Collider

	//Start Registrations for type : UnityEngine.Component

		//System.Void UnityEngine.Component::GetComponentFastPath(System.Type,System.IntPtr)
		void Register_UnityEngine_Component_GetComponentFastPath();
		Register_UnityEngine_Component_GetComponentFastPath();

		//UnityEngine.GameObject UnityEngine.Component::get_gameObject()
		void Register_UnityEngine_Component_get_gameObject();
		Register_UnityEngine_Component_get_gameObject();

		//UnityEngine.Transform UnityEngine.Component::get_transform()
		void Register_UnityEngine_Component_get_transform();
		Register_UnityEngine_Component_get_transform();

	//End Registrations for type : UnityEngine.Component

	//Start Registrations for type : UnityEngine.ComputeShader

		//System.Int32 UnityEngine.ComputeShader::FindKernel(System.String)
		void Register_UnityEngine_ComputeShader_FindKernel();
		Register_UnityEngine_ComputeShader_FindKernel();

	//End Registrations for type : UnityEngine.ComputeShader

	//Start Registrations for type : UnityEngine.ContactFilter2D

		//System.Void UnityEngine.ContactFilter2D::CheckConsistency_Injected(UnityEngine.ContactFilter2D&)
		void Register_UnityEngine_ContactFilter2D_CheckConsistency_Injected();
		Register_UnityEngine_ContactFilter2D_CheckConsistency_Injected();

	//End Registrations for type : UnityEngine.ContactFilter2D

	//Start Registrations for type : UnityEngine.Coroutine

		//System.Void UnityEngine.Coroutine::ReleaseCoroutine(System.IntPtr)
		void Register_UnityEngine_Coroutine_ReleaseCoroutine();
		Register_UnityEngine_Coroutine_ReleaseCoroutine();

	//End Registrations for type : UnityEngine.Coroutine

	//Start Registrations for type : UnityEngine.Cubemap

		//System.Boolean UnityEngine.Cubemap::Internal_CreateImpl(UnityEngine.Cubemap,System.Int32,System.Int32,UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.TextureCreationFlags,System.IntPtr)
		void Register_UnityEngine_Cubemap_Internal_CreateImpl();
		Register_UnityEngine_Cubemap_Internal_CreateImpl();

		//System.Boolean UnityEngine.Cubemap::get_isReadable()
		void Register_UnityEngine_Cubemap_get_isReadable();
		Register_UnityEngine_Cubemap_get_isReadable();

		//System.Void UnityEngine.Cubemap::UpdateExternalTexture(System.IntPtr)
		void Register_UnityEngine_Cubemap_UpdateExternalTexture();
		Register_UnityEngine_Cubemap_UpdateExternalTexture();

	//End Registrations for type : UnityEngine.Cubemap

	//Start Registrations for type : UnityEngine.CubemapArray

		//System.Boolean UnityEngine.CubemapArray::Internal_CreateImpl(UnityEngine.CubemapArray,System.Int32,System.Int32,System.Int32,UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.TextureCreationFlags)
		void Register_UnityEngine_CubemapArray_Internal_CreateImpl();
		Register_UnityEngine_CubemapArray_Internal_CreateImpl();

		//System.Boolean UnityEngine.CubemapArray::get_isReadable()
		void Register_UnityEngine_CubemapArray_get_isReadable();
		Register_UnityEngine_CubemapArray_get_isReadable();

	//End Registrations for type : UnityEngine.CubemapArray

	//Start Registrations for type : UnityEngine.DebugLogHandler

		//System.Void UnityEngine.DebugLogHandler::Internal_Log(UnityEngine.LogType,UnityEngine.LogOption,System.String,UnityEngine.Object)
		void Register_UnityEngine_DebugLogHandler_Internal_Log();
		Register_UnityEngine_DebugLogHandler_Internal_Log();

		//System.Void UnityEngine.DebugLogHandler::Internal_LogException(System.Exception,UnityEngine.Object)
		void Register_UnityEngine_DebugLogHandler_Internal_LogException();
		Register_UnityEngine_DebugLogHandler_Internal_LogException();

	//End Registrations for type : UnityEngine.DebugLogHandler

	//Start Registrations for type : UnityEngine.Display

		//System.Int32 UnityEngine.Display::RelativeMouseAtImpl(System.Int32,System.Int32,System.Int32&,System.Int32&)
		void Register_UnityEngine_Display_RelativeMouseAtImpl();
		Register_UnityEngine_Display_RelativeMouseAtImpl();

		//System.Void UnityEngine.Display::GetSystemExtImpl(System.IntPtr,System.Int32&,System.Int32&)
		void Register_UnityEngine_Display_GetSystemExtImpl();
		Register_UnityEngine_Display_GetSystemExtImpl();

	//End Registrations for type : UnityEngine.Display

	//Start Registrations for type : UnityEngine.Event

		//System.Char UnityEngine.Event::get_character()
		void Register_UnityEngine_Event_get_character();
		Register_UnityEngine_Event_get_character();

		//System.IntPtr UnityEngine.Event::Internal_Create(System.Int32)
		void Register_UnityEngine_Event_Internal_Create();
		Register_UnityEngine_Event_Internal_Create();

		//System.String UnityEngine.Event::get_commandName()
		void Register_UnityEngine_Event_get_commandName();
		Register_UnityEngine_Event_get_commandName();

		//System.Void UnityEngine.Event::Internal_Destroy(System.IntPtr)
		void Register_UnityEngine_Event_Internal_Destroy();
		Register_UnityEngine_Event_Internal_Destroy();

		//System.Void UnityEngine.Event::Internal_SetNativeEvent(System.IntPtr)
		void Register_UnityEngine_Event_Internal_SetNativeEvent();
		Register_UnityEngine_Event_Internal_SetNativeEvent();

		//System.Void UnityEngine.Event::get_mousePosition_Injected(UnityEngine.Vector2&)
		void Register_UnityEngine_Event_get_mousePosition_Injected();
		Register_UnityEngine_Event_get_mousePosition_Injected();

		//System.Void UnityEngine.Event::set_displayIndex(System.Int32)
		void Register_UnityEngine_Event_set_displayIndex();
		Register_UnityEngine_Event_set_displayIndex();

		//UnityEngine.EventModifiers UnityEngine.Event::get_modifiers()
		void Register_UnityEngine_Event_get_modifiers();
		Register_UnityEngine_Event_get_modifiers();

		//UnityEngine.EventType UnityEngine.Event::get_type()
		void Register_UnityEngine_Event_get_type();
		Register_UnityEngine_Event_get_type();

		//UnityEngine.KeyCode UnityEngine.Event::get_keyCode()
		void Register_UnityEngine_Event_get_keyCode();
		Register_UnityEngine_Event_get_keyCode();

	//End Registrations for type : UnityEngine.Event

	//Start Registrations for type : UnityEngine.Experimental.Rendering.BuiltinRuntimeReflectionSystem

		//System.Boolean UnityEngine.Experimental.Rendering.BuiltinRuntimeReflectionSystem::BuiltinUpdate()
		void Register_UnityEngine_Experimental_Rendering_BuiltinRuntimeReflectionSystem_BuiltinUpdate();
		Register_UnityEngine_Experimental_Rendering_BuiltinRuntimeReflectionSystem_BuiltinUpdate();

	//End Registrations for type : UnityEngine.Experimental.Rendering.BuiltinRuntimeReflectionSystem

	//Start Registrations for type : UnityEngine.Experimental.Rendering.GraphicsFormatUtility

		//System.Boolean UnityEngine.Experimental.Rendering.GraphicsFormatUtility::IsCompressedTextureFormat(UnityEngine.TextureFormat)
		void Register_UnityEngine_Experimental_Rendering_GraphicsFormatUtility_IsCompressedTextureFormat();
		Register_UnityEngine_Experimental_Rendering_GraphicsFormatUtility_IsCompressedTextureFormat();

		//System.Boolean UnityEngine.Experimental.Rendering.GraphicsFormatUtility::IsSRGBFormat(UnityEngine.Experimental.Rendering.GraphicsFormat)
		void Register_UnityEngine_Experimental_Rendering_GraphicsFormatUtility_IsSRGBFormat();
		Register_UnityEngine_Experimental_Rendering_GraphicsFormatUtility_IsSRGBFormat();

		//UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetGraphicsFormat_Native_RenderTextureFormat(UnityEngine.RenderTextureFormat,System.Boolean)
		void Register_UnityEngine_Experimental_Rendering_GraphicsFormatUtility_GetGraphicsFormat_Native_RenderTextureFormat();
		Register_UnityEngine_Experimental_Rendering_GraphicsFormatUtility_GetGraphicsFormat_Native_RenderTextureFormat();

		//UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetGraphicsFormat_Native_TextureFormat(UnityEngine.TextureFormat,System.Boolean)
		void Register_UnityEngine_Experimental_Rendering_GraphicsFormatUtility_GetGraphicsFormat_Native_TextureFormat();
		Register_UnityEngine_Experimental_Rendering_GraphicsFormatUtility_GetGraphicsFormat_Native_TextureFormat();

	//End Registrations for type : UnityEngine.Experimental.Rendering.GraphicsFormatUtility

	//Start Registrations for type : UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemSettings

		//System.Void UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemSettings::ScriptingDirtyReflectionSystemInstance()
		void Register_UnityEngine_Experimental_Rendering_ScriptableRuntimeReflectionSystemSettings_ScriptingDirtyReflectionSystemInstance();
		Register_UnityEngine_Experimental_Rendering_ScriptableRuntimeReflectionSystemSettings_ScriptingDirtyReflectionSystemInstance();

	//End Registrations for type : UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemSettings

	//Start Registrations for type : UnityEngine.GameObject

		//System.Array UnityEngine.GameObject::GetComponentsInternal(System.Type,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Object)
		void Register_UnityEngine_GameObject_GetComponentsInternal();
		Register_UnityEngine_GameObject_GetComponentsInternal();

		//System.Void UnityEngine.GameObject::GetComponentFastPath(System.Type,System.IntPtr)
		void Register_UnityEngine_GameObject_GetComponentFastPath();
		Register_UnityEngine_GameObject_GetComponentFastPath();

		//System.Void UnityEngine.GameObject::Internal_CreateGameObject(UnityEngine.GameObject,System.String)
		void Register_UnityEngine_GameObject_Internal_CreateGameObject();
		Register_UnityEngine_GameObject_Internal_CreateGameObject();

		//System.Void UnityEngine.GameObject::SendMessage(System.String,System.Object,UnityEngine.SendMessageOptions)
		void Register_UnityEngine_GameObject_SendMessage();
		Register_UnityEngine_GameObject_SendMessage();

		//System.Void UnityEngine.GameObject::SetActive(System.Boolean)
		void Register_UnityEngine_GameObject_SetActive();
		Register_UnityEngine_GameObject_SetActive();

		//System.Void UnityEngine.GameObject::set_layer(System.Int32)
		void Register_UnityEngine_GameObject_set_layer();
		Register_UnityEngine_GameObject_set_layer();

		//UnityEngine.Component UnityEngine.GameObject::Internal_AddComponentWithType(System.Type)
		void Register_UnityEngine_GameObject_Internal_AddComponentWithType();
		Register_UnityEngine_GameObject_Internal_AddComponentWithType();

		//UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
		void Register_UnityEngine_GameObject_Find();
		Register_UnityEngine_GameObject_Find();

		//UnityEngine.Transform UnityEngine.GameObject::get_transform()
		void Register_UnityEngine_GameObject_get_transform();
		Register_UnityEngine_GameObject_get_transform();

	//End Registrations for type : UnityEngine.GameObject

	//Start Registrations for type : UnityEngine.Gizmos

		//System.Void UnityEngine.Gizmos::DrawCube_Injected(UnityEngine.Vector3&,UnityEngine.Vector3&)
		void Register_UnityEngine_Gizmos_DrawCube_Injected();
		Register_UnityEngine_Gizmos_DrawCube_Injected();

		//System.Void UnityEngine.Gizmos::set_color_Injected(UnityEngine.Color&)
		void Register_UnityEngine_Gizmos_set_color_Injected();
		Register_UnityEngine_Gizmos_set_color_Injected();

		//System.Void UnityEngine.Gizmos::set_matrix_Injected(UnityEngine.Matrix4x4&)
		void Register_UnityEngine_Gizmos_set_matrix_Injected();
		Register_UnityEngine_Gizmos_set_matrix_Injected();

	//End Registrations for type : UnityEngine.Gizmos

	//Start Registrations for type : UnityEngine.Gradient

		//System.Boolean UnityEngine.Gradient::Internal_Equals(System.IntPtr)
		void Register_UnityEngine_Gradient_Internal_Equals();
		Register_UnityEngine_Gradient_Internal_Equals();

		//System.IntPtr UnityEngine.Gradient::Init()
		void Register_UnityEngine_Gradient_Init();
		Register_UnityEngine_Gradient_Init();

		//System.Void UnityEngine.Gradient::Cleanup()
		void Register_UnityEngine_Gradient_Cleanup();
		Register_UnityEngine_Gradient_Cleanup();

	//End Registrations for type : UnityEngine.Gradient

	//Start Registrations for type : UnityEngine.GUI

		//System.Void UnityEngine.GUI::set_changed(System.Boolean)
		void Register_UnityEngine_GUI_set_changed();
		Register_UnityEngine_GUI_set_changed();

	//End Registrations for type : UnityEngine.GUI

	//Start Registrations for type : UnityEngine.GUILayoutUtility

		//System.Void UnityEngine.GUILayoutUtility::Internal_GetWindowRect_Injected(System.Int32,UnityEngine.Rect&)
		void Register_UnityEngine_GUILayoutUtility_Internal_GetWindowRect_Injected();
		Register_UnityEngine_GUILayoutUtility_Internal_GetWindowRect_Injected();

		//System.Void UnityEngine.GUILayoutUtility::Internal_MoveWindow_Injected(System.Int32,UnityEngine.Rect&)
		void Register_UnityEngine_GUILayoutUtility_Internal_MoveWindow_Injected();
		Register_UnityEngine_GUILayoutUtility_Internal_MoveWindow_Injected();

	//End Registrations for type : UnityEngine.GUILayoutUtility

	//Start Registrations for type : UnityEngine.GUIStyle

		//System.Boolean UnityEngine.GUIStyle::get_stretchHeight()
		void Register_UnityEngine_GUIStyle_get_stretchHeight();
		Register_UnityEngine_GUIStyle_get_stretchHeight();

		//System.Boolean UnityEngine.GUIStyle::get_stretchWidth()
		void Register_UnityEngine_GUIStyle_get_stretchWidth();
		Register_UnityEngine_GUIStyle_get_stretchWidth();

		//System.IntPtr UnityEngine.GUIStyle::GetRectOffsetPtr(System.Int32)
		void Register_UnityEngine_GUIStyle_GetRectOffsetPtr();
		Register_UnityEngine_GUIStyle_GetRectOffsetPtr();

		//System.IntPtr UnityEngine.GUIStyle::GetStyleStatePtr(System.Int32)
		void Register_UnityEngine_GUIStyle_GetStyleStatePtr();
		Register_UnityEngine_GUIStyle_GetStyleStatePtr();

		//System.IntPtr UnityEngine.GUIStyle::Internal_Create(UnityEngine.GUIStyle)
		void Register_UnityEngine_GUIStyle_Internal_Create();
		Register_UnityEngine_GUIStyle_Internal_Create();

		//System.Single UnityEngine.GUIStyle::get_fixedHeight()
		void Register_UnityEngine_GUIStyle_get_fixedHeight();
		Register_UnityEngine_GUIStyle_get_fixedHeight();

		//System.Single UnityEngine.GUIStyle::get_fixedWidth()
		void Register_UnityEngine_GUIStyle_get_fixedWidth();
		Register_UnityEngine_GUIStyle_get_fixedWidth();

		//System.String UnityEngine.GUIStyle::get_rawName()
		void Register_UnityEngine_GUIStyle_get_rawName();
		Register_UnityEngine_GUIStyle_get_rawName();

		//System.Void UnityEngine.GUIStyle::Internal_Destroy(System.IntPtr)
		void Register_UnityEngine_GUIStyle_Internal_Destroy();
		Register_UnityEngine_GUIStyle_Internal_Destroy();

		//System.Void UnityEngine.GUIStyle::SetDefaultFont(UnityEngine.Font)
		void Register_UnityEngine_GUIStyle_SetDefaultFont();
		Register_UnityEngine_GUIStyle_SetDefaultFont();

		//System.Void UnityEngine.GUIStyle::set_rawName(System.String)
		void Register_UnityEngine_GUIStyle_set_rawName();
		Register_UnityEngine_GUIStyle_set_rawName();

		//System.Void UnityEngine.GUIStyle::set_stretchHeight(System.Boolean)
		void Register_UnityEngine_GUIStyle_set_stretchHeight();
		Register_UnityEngine_GUIStyle_set_stretchHeight();

	//End Registrations for type : UnityEngine.GUIStyle

	//Start Registrations for type : UnityEngine.GUIStyleState

		//System.IntPtr UnityEngine.GUIStyleState::Init()
		void Register_UnityEngine_GUIStyleState_Init();
		Register_UnityEngine_GUIStyleState_Init();

		//System.Void UnityEngine.GUIStyleState::Cleanup()
		void Register_UnityEngine_GUIStyleState_Cleanup();
		Register_UnityEngine_GUIStyleState_Cleanup();

		//System.Void UnityEngine.GUIStyleState::set_textColor_Injected(UnityEngine.Color&)
		void Register_UnityEngine_GUIStyleState_set_textColor_Injected();
		Register_UnityEngine_GUIStyleState_set_textColor_Injected();

	//End Registrations for type : UnityEngine.GUIStyleState

	//Start Registrations for type : UnityEngine.GUIUtility

		//System.Int32 UnityEngine.GUIUtility::get_guiDepth()
		void Register_UnityEngine_GUIUtility_get_guiDepth();
		Register_UnityEngine_GUIUtility_get_guiDepth();

		//System.Object UnityEngine.GUIUtility::Internal_GetDefaultSkin(System.Int32)
		void Register_UnityEngine_GUIUtility_Internal_GetDefaultSkin();
		Register_UnityEngine_GUIUtility_Internal_GetDefaultSkin();

		//System.Single UnityEngine.GUIUtility::get_pixelsPerPoint()
		void Register_UnityEngine_GUIUtility_get_pixelsPerPoint();
		Register_UnityEngine_GUIUtility_get_pixelsPerPoint();

		//System.Void UnityEngine.GUIUtility::Internal_ExitGUI()
		void Register_UnityEngine_GUIUtility_Internal_ExitGUI();
		Register_UnityEngine_GUIUtility_Internal_ExitGUI();

	//End Registrations for type : UnityEngine.GUIUtility

	//Start Registrations for type : UnityEngine.Input

		//System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
		void Register_UnityEngine_Input_GetMouseButton();
		Register_UnityEngine_Input_GetMouseButton();

		//System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
		void Register_UnityEngine_Input_GetMouseButtonDown();
		Register_UnityEngine_Input_GetMouseButtonDown();

		//System.Int32 UnityEngine.Input::get_touchCount()
		void Register_UnityEngine_Input_get_touchCount();
		Register_UnityEngine_Input_get_touchCount();

		//System.Void UnityEngine.Input::get_mousePosition_Injected(UnityEngine.Vector3&)
		void Register_UnityEngine_Input_get_mousePosition_Injected();
		Register_UnityEngine_Input_get_mousePosition_Injected();

	//End Registrations for type : UnityEngine.Input

	//Start Registrations for type : UnityEngine.IntegratedSubsystem

		//System.Void UnityEngine.IntegratedSubsystem::SetHandle(UnityEngine.IntegratedSubsystem)
		void Register_UnityEngine_IntegratedSubsystem_SetHandle();
		Register_UnityEngine_IntegratedSubsystem_SetHandle();

		//System.Void UnityEngine.IntegratedSubsystem::Start()
		void Register_UnityEngine_IntegratedSubsystem_Start();
		Register_UnityEngine_IntegratedSubsystem_Start();

		//System.Void UnityEngine.IntegratedSubsystem::Stop()
		void Register_UnityEngine_IntegratedSubsystem_Stop();
		Register_UnityEngine_IntegratedSubsystem_Stop();

	//End Registrations for type : UnityEngine.IntegratedSubsystem

	//Start Registrations for type : UnityEngine.Internal_SubsystemDescriptors

		//System.IntPtr UnityEngine.Internal_SubsystemDescriptors::Create(System.IntPtr)
		void Register_UnityEngine_Internal_SubsystemDescriptors_Create();
		Register_UnityEngine_Internal_SubsystemDescriptors_Create();

		//System.String UnityEngine.Internal_SubsystemDescriptors::GetId(System.IntPtr)
		void Register_UnityEngine_Internal_SubsystemDescriptors_GetId();
		Register_UnityEngine_Internal_SubsystemDescriptors_GetId();

	//End Registrations for type : UnityEngine.Internal_SubsystemDescriptors

	//Start Registrations for type : UnityEngine.iOS.Device

		//System.String UnityEngine.iOS.Device::get_systemVersion()
		void Register_UnityEngine_iOS_Device_get_systemVersion();
		Register_UnityEngine_iOS_Device_get_systemVersion();

	//End Registrations for type : UnityEngine.iOS.Device

	//Start Registrations for type : UnityEngine.Light

		//System.Single UnityEngine.Light::get_bounceIntensity()
		void Register_UnityEngine_Light_get_bounceIntensity();
		Register_UnityEngine_Light_get_bounceIntensity();

		//System.Single UnityEngine.Light::get_cookieSize()
		void Register_UnityEngine_Light_get_cookieSize();
		Register_UnityEngine_Light_get_cookieSize();

		//System.Single UnityEngine.Light::get_intensity()
		void Register_UnityEngine_Light_get_intensity();
		Register_UnityEngine_Light_get_intensity();

		//System.Single UnityEngine.Light::get_range()
		void Register_UnityEngine_Light_get_range();
		Register_UnityEngine_Light_get_range();

		//System.Single UnityEngine.Light::get_spotAngle()
		void Register_UnityEngine_Light_get_spotAngle();
		Register_UnityEngine_Light_get_spotAngle();

		//System.Void UnityEngine.Light::get_bakingOutput_Injected(UnityEngine.LightBakingOutput&)
		void Register_UnityEngine_Light_get_bakingOutput_Injected();
		Register_UnityEngine_Light_get_bakingOutput_Injected();

		//System.Void UnityEngine.Light::get_color_Injected(UnityEngine.Color&)
		void Register_UnityEngine_Light_get_color_Injected();
		Register_UnityEngine_Light_get_color_Injected();

		//UnityEngine.LightShadows UnityEngine.Light::get_shadows()
		void Register_UnityEngine_Light_get_shadows();
		Register_UnityEngine_Light_get_shadows();

		//UnityEngine.LightType UnityEngine.Light::get_type()
		void Register_UnityEngine_Light_get_type();
		Register_UnityEngine_Light_get_type();

		//UnityEngine.Texture UnityEngine.Light::get_cookie()
		void Register_UnityEngine_Light_get_cookie();
		Register_UnityEngine_Light_get_cookie();

	//End Registrations for type : UnityEngine.Light

	//Start Registrations for type : UnityEngine.LineRenderer

		//System.Single UnityEngine.LineRenderer::get_widthMultiplier()
		void Register_UnityEngine_LineRenderer_get_widthMultiplier();
		Register_UnityEngine_LineRenderer_get_widthMultiplier();

		//System.Void UnityEngine.LineRenderer::SetPosition_Injected(System.Int32,UnityEngine.Vector3&)
		void Register_UnityEngine_LineRenderer_SetPosition_Injected();
		Register_UnityEngine_LineRenderer_SetPosition_Injected();

		//System.Void UnityEngine.LineRenderer::set_positionCount(System.Int32)
		void Register_UnityEngine_LineRenderer_set_positionCount();
		Register_UnityEngine_LineRenderer_set_positionCount();

		//System.Void UnityEngine.LineRenderer::set_widthMultiplier(System.Single)
		void Register_UnityEngine_LineRenderer_set_widthMultiplier();
		Register_UnityEngine_LineRenderer_set_widthMultiplier();

	//End Registrations for type : UnityEngine.LineRenderer

	//Start Registrations for type : UnityEngine.Material

		//System.Boolean UnityEngine.Material::HasProperty(System.Int32)
		void Register_UnityEngine_Material_HasProperty();
		Register_UnityEngine_Material_HasProperty();

		//System.Boolean UnityEngine.Material::IsKeywordEnabled(System.String)
		void Register_UnityEngine_Material_IsKeywordEnabled();
		Register_UnityEngine_Material_IsKeywordEnabled();

		//System.Int32 UnityEngine.Material::GetFirstPropertyNameIdByAttribute(UnityEngine.Rendering.ShaderPropertyFlags)
		void Register_UnityEngine_Material_GetFirstPropertyNameIdByAttribute();
		Register_UnityEngine_Material_GetFirstPropertyNameIdByAttribute();

		//System.Void UnityEngine.Material::CreateWithMaterial(UnityEngine.Material,UnityEngine.Material)
		void Register_UnityEngine_Material_CreateWithMaterial();
		Register_UnityEngine_Material_CreateWithMaterial();

		//System.Void UnityEngine.Material::CreateWithShader(UnityEngine.Material,UnityEngine.Shader)
		void Register_UnityEngine_Material_CreateWithShader();
		Register_UnityEngine_Material_CreateWithShader();

		//System.Void UnityEngine.Material::CreateWithString(UnityEngine.Material)
		void Register_UnityEngine_Material_CreateWithString();
		Register_UnityEngine_Material_CreateWithString();

		//System.Void UnityEngine.Material::DisableKeyword(System.String)
		void Register_UnityEngine_Material_DisableKeyword();
		Register_UnityEngine_Material_DisableKeyword();

		//System.Void UnityEngine.Material::EnableKeyword(System.String)
		void Register_UnityEngine_Material_EnableKeyword();
		Register_UnityEngine_Material_EnableKeyword();

		//System.Void UnityEngine.Material::GetColorImpl_Injected(System.Int32,UnityEngine.Color&)
		void Register_UnityEngine_Material_GetColorImpl_Injected();
		Register_UnityEngine_Material_GetColorImpl_Injected();

		//System.Void UnityEngine.Material::SetColorImpl_Injected(System.Int32,UnityEngine.Color&)
		void Register_UnityEngine_Material_SetColorImpl_Injected();
		Register_UnityEngine_Material_SetColorImpl_Injected();

		//System.Void UnityEngine.Material::SetMatrixImpl_Injected(System.Int32,UnityEngine.Matrix4x4&)
		void Register_UnityEngine_Material_SetMatrixImpl_Injected();
		Register_UnityEngine_Material_SetMatrixImpl_Injected();

		//System.Void UnityEngine.Material::SetTextureImpl(System.Int32,UnityEngine.Texture)
		void Register_UnityEngine_Material_SetTextureImpl();
		Register_UnityEngine_Material_SetTextureImpl();

		//UnityEngine.Texture UnityEngine.Material::GetTextureImpl(System.Int32)
		void Register_UnityEngine_Material_GetTextureImpl();
		Register_UnityEngine_Material_GetTextureImpl();

	//End Registrations for type : UnityEngine.Material

	//Start Registrations for type : UnityEngine.Mathf

		//System.Single UnityEngine.Mathf::GammaToLinearSpace(System.Single)
		void Register_UnityEngine_Mathf_GammaToLinearSpace();
		Register_UnityEngine_Mathf_GammaToLinearSpace();

	//End Registrations for type : UnityEngine.Mathf

	//Start Registrations for type : UnityEngine.Mesh

		//System.Boolean UnityEngine.Mesh::get_canAccess()
		void Register_UnityEngine_Mesh_get_canAccess();
		Register_UnityEngine_Mesh_get_canAccess();

		//System.Int32 UnityEngine.Mesh::get_subMeshCount()
		void Register_UnityEngine_Mesh_get_subMeshCount();
		Register_UnityEngine_Mesh_get_subMeshCount();

		//System.Void UnityEngine.Mesh::ClearImpl(System.Boolean)
		void Register_UnityEngine_Mesh_ClearImpl();
		Register_UnityEngine_Mesh_ClearImpl();

		//System.Void UnityEngine.Mesh::Internal_Create(UnityEngine.Mesh)
		void Register_UnityEngine_Mesh_Internal_Create();
		Register_UnityEngine_Mesh_Internal_Create();

		//System.Void UnityEngine.Mesh::PrintErrorCantAccessChannel(UnityEngine.Rendering.VertexAttribute)
		void Register_UnityEngine_Mesh_PrintErrorCantAccessChannel();
		Register_UnityEngine_Mesh_PrintErrorCantAccessChannel();

		//System.Void UnityEngine.Mesh::RecalculateBoundsImpl(UnityEngine.Rendering.MeshUpdateFlags)
		void Register_UnityEngine_Mesh_RecalculateBoundsImpl();
		Register_UnityEngine_Mesh_RecalculateBoundsImpl();

		//System.Void UnityEngine.Mesh::RecalculateNormalsImpl(UnityEngine.Rendering.MeshUpdateFlags)
		void Register_UnityEngine_Mesh_RecalculateNormalsImpl();
		Register_UnityEngine_Mesh_RecalculateNormalsImpl();

		//System.Void UnityEngine.Mesh::SetArrayForChannelImpl(UnityEngine.Rendering.VertexAttribute,UnityEngine.Rendering.VertexAttributeFormat,System.Int32,System.Array,System.Int32,System.Int32,System.Int32,UnityEngine.Rendering.MeshUpdateFlags)
		void Register_UnityEngine_Mesh_SetArrayForChannelImpl();
		Register_UnityEngine_Mesh_SetArrayForChannelImpl();

		//System.Void UnityEngine.Mesh::SetIndicesImpl(System.Int32,UnityEngine.MeshTopology,UnityEngine.Rendering.IndexFormat,System.Array,System.Int32,System.Int32,System.Boolean,System.Int32)
		void Register_UnityEngine_Mesh_SetIndicesImpl();
		Register_UnityEngine_Mesh_SetIndicesImpl();

	//End Registrations for type : UnityEngine.Mesh

	//Start Registrations for type : UnityEngine.MeshCollider

		//System.Void UnityEngine.MeshCollider::set_sharedMesh(UnityEngine.Mesh)
		void Register_UnityEngine_MeshCollider_set_sharedMesh();
		Register_UnityEngine_MeshCollider_set_sharedMesh();

	//End Registrations for type : UnityEngine.MeshCollider

	//Start Registrations for type : UnityEngine.MeshFilter

		//System.Void UnityEngine.MeshFilter::set_sharedMesh(UnityEngine.Mesh)
		void Register_UnityEngine_MeshFilter_set_sharedMesh();
		Register_UnityEngine_MeshFilter_set_sharedMesh();

		//UnityEngine.Mesh UnityEngine.MeshFilter::get_mesh()
		void Register_UnityEngine_MeshFilter_get_mesh();
		Register_UnityEngine_MeshFilter_get_mesh();

		//UnityEngine.Mesh UnityEngine.MeshFilter::get_sharedMesh()
		void Register_UnityEngine_MeshFilter_get_sharedMesh();
		Register_UnityEngine_MeshFilter_get_sharedMesh();

	//End Registrations for type : UnityEngine.MeshFilter

	//Start Registrations for type : UnityEngine.MonoBehaviour

		//System.Boolean UnityEngine.MonoBehaviour::Internal_IsInvokingAll(UnityEngine.MonoBehaviour)
		void Register_UnityEngine_MonoBehaviour_Internal_IsInvokingAll();
		Register_UnityEngine_MonoBehaviour_Internal_IsInvokingAll();

		//System.Boolean UnityEngine.MonoBehaviour::IsInvoking(UnityEngine.MonoBehaviour,System.String)
		void Register_UnityEngine_MonoBehaviour_IsInvoking();
		Register_UnityEngine_MonoBehaviour_IsInvoking();

		//System.Boolean UnityEngine.MonoBehaviour::IsObjectMonoBehaviour(UnityEngine.Object)
		void Register_UnityEngine_MonoBehaviour_IsObjectMonoBehaviour();
		Register_UnityEngine_MonoBehaviour_IsObjectMonoBehaviour();

		//System.Boolean UnityEngine.MonoBehaviour::get_useGUILayout()
		void Register_UnityEngine_MonoBehaviour_get_useGUILayout();
		Register_UnityEngine_MonoBehaviour_get_useGUILayout();

		//System.String UnityEngine.MonoBehaviour::GetScriptClassName()
		void Register_UnityEngine_MonoBehaviour_GetScriptClassName();
		Register_UnityEngine_MonoBehaviour_GetScriptClassName();

		//System.Void UnityEngine.MonoBehaviour::CancelInvoke(UnityEngine.MonoBehaviour,System.String)
		void Register_UnityEngine_MonoBehaviour_CancelInvoke();
		Register_UnityEngine_MonoBehaviour_CancelInvoke();

		//System.Void UnityEngine.MonoBehaviour::Internal_CancelInvokeAll(UnityEngine.MonoBehaviour)
		void Register_UnityEngine_MonoBehaviour_Internal_CancelInvokeAll();
		Register_UnityEngine_MonoBehaviour_Internal_CancelInvokeAll();

		//System.Void UnityEngine.MonoBehaviour::InvokeDelayed(UnityEngine.MonoBehaviour,System.String,System.Single,System.Single)
		void Register_UnityEngine_MonoBehaviour_InvokeDelayed();
		Register_UnityEngine_MonoBehaviour_InvokeDelayed();

		//System.Void UnityEngine.MonoBehaviour::StopAllCoroutines()
		void Register_UnityEngine_MonoBehaviour_StopAllCoroutines();
		Register_UnityEngine_MonoBehaviour_StopAllCoroutines();

		//System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.String)
		void Register_UnityEngine_MonoBehaviour_StopCoroutine();
		Register_UnityEngine_MonoBehaviour_StopCoroutine();

		//System.Void UnityEngine.MonoBehaviour::StopCoroutineFromEnumeratorManaged(System.Collections.IEnumerator)
		void Register_UnityEngine_MonoBehaviour_StopCoroutineFromEnumeratorManaged();
		Register_UnityEngine_MonoBehaviour_StopCoroutineFromEnumeratorManaged();

		//System.Void UnityEngine.MonoBehaviour::StopCoroutineManaged(UnityEngine.Coroutine)
		void Register_UnityEngine_MonoBehaviour_StopCoroutineManaged();
		Register_UnityEngine_MonoBehaviour_StopCoroutineManaged();

		//System.Void UnityEngine.MonoBehaviour::set_useGUILayout(System.Boolean)
		void Register_UnityEngine_MonoBehaviour_set_useGUILayout();
		Register_UnityEngine_MonoBehaviour_set_useGUILayout();

		//UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutineManaged(System.String,System.Object)
		void Register_UnityEngine_MonoBehaviour_StartCoroutineManaged();
		Register_UnityEngine_MonoBehaviour_StartCoroutineManaged();

		//UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)
		void Register_UnityEngine_MonoBehaviour_StartCoroutineManaged2();
		Register_UnityEngine_MonoBehaviour_StartCoroutineManaged2();

	//End Registrations for type : UnityEngine.MonoBehaviour

	//Start Registrations for type : UnityEngine.NoAllocHelpers

		//System.Array UnityEngine.NoAllocHelpers::ExtractArrayFromList(System.Object)
		void Register_UnityEngine_NoAllocHelpers_ExtractArrayFromList();
		Register_UnityEngine_NoAllocHelpers_ExtractArrayFromList();

	//End Registrations for type : UnityEngine.NoAllocHelpers

	//Start Registrations for type : UnityEngine.Object

		//System.Int32 UnityEngine.Object::GetOffsetOfInstanceIDInCPlusPlusObject()
		void Register_UnityEngine_Object_GetOffsetOfInstanceIDInCPlusPlusObject();
		Register_UnityEngine_Object_GetOffsetOfInstanceIDInCPlusPlusObject();

		//System.String UnityEngine.Object::GetName(UnityEngine.Object)
		void Register_UnityEngine_Object_GetName();
		Register_UnityEngine_Object_GetName();

		//System.String UnityEngine.Object::ToString(UnityEngine.Object)
		void Register_UnityEngine_Object_ToString();
		Register_UnityEngine_Object_ToString();

		//System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
		void Register_UnityEngine_Object_Destroy();
		Register_UnityEngine_Object_Destroy();

		//System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
		void Register_UnityEngine_Object_DontDestroyOnLoad();
		Register_UnityEngine_Object_DontDestroyOnLoad();

		//System.Void UnityEngine.Object::SetName(UnityEngine.Object,System.String)
		void Register_UnityEngine_Object_SetName();
		Register_UnityEngine_Object_SetName();

		//System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
		void Register_UnityEngine_Object_set_hideFlags();
		Register_UnityEngine_Object_set_hideFlags();

		//UnityEngine.Object UnityEngine.Object::Internal_CloneSingle(UnityEngine.Object)
		void Register_UnityEngine_Object_Internal_CloneSingle();
		Register_UnityEngine_Object_Internal_CloneSingle();

		//UnityEngine.Object UnityEngine.Object::Internal_CloneSingleWithParent(UnityEngine.Object,UnityEngine.Transform,System.Boolean)
		void Register_UnityEngine_Object_Internal_CloneSingleWithParent();
		Register_UnityEngine_Object_Internal_CloneSingleWithParent();

		//UnityEngine.Object UnityEngine.Object::Internal_InstantiateSingleWithParent_Injected(UnityEngine.Object,UnityEngine.Transform,UnityEngine.Vector3&,UnityEngine.Quaternion&)
		void Register_UnityEngine_Object_Internal_InstantiateSingleWithParent_Injected();
		Register_UnityEngine_Object_Internal_InstantiateSingleWithParent_Injected();

		//UnityEngine.Object UnityEngine.Object::Internal_InstantiateSingle_Injected(UnityEngine.Object,UnityEngine.Vector3&,UnityEngine.Quaternion&)
		void Register_UnityEngine_Object_Internal_InstantiateSingle_Injected();
		Register_UnityEngine_Object_Internal_InstantiateSingle_Injected();

		//UnityEngine.Object[] UnityEngine.Object::FindObjectsOfType(System.Type,System.Boolean)
		void Register_UnityEngine_Object_FindObjectsOfType();
		Register_UnityEngine_Object_FindObjectsOfType();

	//End Registrations for type : UnityEngine.Object

	//Start Registrations for type : UnityEngine.ParticleSystem

		//System.Void UnityEngine.ParticleSystem::EmitOld_Internal(UnityEngine.ParticleSystem/Particle&)
		void Register_UnityEngine_ParticleSystem_EmitOld_Internal();
		Register_UnityEngine_ParticleSystem_EmitOld_Internal();

		//System.Void UnityEngine.ParticleSystem::Emit_Injected(UnityEngine.ParticleSystem/EmitParams&,System.Int32)
		void Register_UnityEngine_ParticleSystem_Emit_Injected();
		Register_UnityEngine_ParticleSystem_Emit_Injected();

		//System.Void UnityEngine.ParticleSystem::Emit_Internal(System.Int32)
		void Register_UnityEngine_ParticleSystem_Emit_Internal();
		Register_UnityEngine_ParticleSystem_Emit_Internal();

		//System.Void UnityEngine.ParticleSystem::SetParticles(UnityEngine.ParticleSystem/Particle[],System.Int32,System.Int32)
		void Register_UnityEngine_ParticleSystem_SetParticles();
		Register_UnityEngine_ParticleSystem_SetParticles();

	//End Registrations for type : UnityEngine.ParticleSystem

	//Start Registrations for type : UnityEngine.ParticleSystem/MainModule

		//System.Void UnityEngine.ParticleSystem/MainModule::get_startColor_Injected(UnityEngine.ParticleSystem/MainModule&,UnityEngine.ParticleSystem/MinMaxGradient&)
		void Register_UnityEngine_ParticleSystem_MainModule_get_startColor_Injected();
		Register_UnityEngine_ParticleSystem_MainModule_get_startColor_Injected();

		//System.Void UnityEngine.ParticleSystem/MainModule::get_startSize_Injected(UnityEngine.ParticleSystem/MainModule&,UnityEngine.ParticleSystem/MinMaxCurve&)
		void Register_UnityEngine_ParticleSystem_MainModule_get_startSize_Injected();
		Register_UnityEngine_ParticleSystem_MainModule_get_startSize_Injected();

	//End Registrations for type : UnityEngine.ParticleSystem/MainModule

	//Start Registrations for type : UnityEngine.ParticleSystemRenderer

		//System.Int32 UnityEngine.ParticleSystemRenderer::GetMeshes(UnityEngine.Mesh[])
		void Register_UnityEngine_ParticleSystemRenderer_GetMeshes();
		Register_UnityEngine_ParticleSystemRenderer_GetMeshes();

	//End Registrations for type : UnityEngine.ParticleSystemRenderer

	//Start Registrations for type : UnityEngine.Physics

		//System.Void UnityEngine.Physics::get_defaultPhysicsScene_Injected(UnityEngine.PhysicsScene&)
		void Register_UnityEngine_Physics_get_defaultPhysicsScene_Injected();
		Register_UnityEngine_Physics_get_defaultPhysicsScene_Injected();

		//UnityEngine.RaycastHit[] UnityEngine.Physics::Internal_RaycastAll_Injected(UnityEngine.PhysicsScene&,UnityEngine.Ray&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
		void Register_UnityEngine_Physics_Internal_RaycastAll_Injected();
		Register_UnityEngine_Physics_Internal_RaycastAll_Injected();

	//End Registrations for type : UnityEngine.Physics

	//Start Registrations for type : UnityEngine.Physics2D

		//System.Boolean UnityEngine.Physics2D::get_queriesHitTriggers()
		void Register_UnityEngine_Physics2D_get_queriesHitTriggers();
		Register_UnityEngine_Physics2D_get_queriesHitTriggers();

		//UnityEngine.RaycastHit2D[] UnityEngine.Physics2D::GetRayIntersectionAll_Internal_Injected(UnityEngine.PhysicsScene2D&,UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Int32)
		void Register_UnityEngine_Physics2D_GetRayIntersectionAll_Internal_Injected();
		Register_UnityEngine_Physics2D_GetRayIntersectionAll_Internal_Injected();

	//End Registrations for type : UnityEngine.Physics2D

	//Start Registrations for type : UnityEngine.PhysicsScene

		//System.Boolean UnityEngine.PhysicsScene::Internal_RaycastTest_Injected(UnityEngine.PhysicsScene&,UnityEngine.Ray&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
		void Register_UnityEngine_PhysicsScene_Internal_RaycastTest_Injected();
		Register_UnityEngine_PhysicsScene_Internal_RaycastTest_Injected();

		//System.Boolean UnityEngine.PhysicsScene::Internal_Raycast_Injected(UnityEngine.PhysicsScene&,UnityEngine.Ray&,System.Single,UnityEngine.RaycastHit&,System.Int32,UnityEngine.QueryTriggerInteraction)
		void Register_UnityEngine_PhysicsScene_Internal_Raycast_Injected();
		Register_UnityEngine_PhysicsScene_Internal_Raycast_Injected();

		//System.Int32 UnityEngine.PhysicsScene::Internal_RaycastNonAlloc_Injected(UnityEngine.PhysicsScene&,UnityEngine.Ray&,UnityEngine.RaycastHit[],System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
		void Register_UnityEngine_PhysicsScene_Internal_RaycastNonAlloc_Injected();
		Register_UnityEngine_PhysicsScene_Internal_RaycastNonAlloc_Injected();

	//End Registrations for type : UnityEngine.PhysicsScene

	//Start Registrations for type : UnityEngine.PhysicsScene2D

		//System.Int32 UnityEngine.PhysicsScene2D::GetRayIntersectionArray_Internal_Injected(UnityEngine.PhysicsScene2D&,UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Int32,UnityEngine.RaycastHit2D[])
		void Register_UnityEngine_PhysicsScene2D_GetRayIntersectionArray_Internal_Injected();
		Register_UnityEngine_PhysicsScene2D_GetRayIntersectionArray_Internal_Injected();

		//System.Int32 UnityEngine.PhysicsScene2D::RaycastArray_Internal_Injected(UnityEngine.PhysicsScene2D&,UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,UnityEngine.ContactFilter2D&,UnityEngine.RaycastHit2D[])
		void Register_UnityEngine_PhysicsScene2D_RaycastArray_Internal_Injected();
		Register_UnityEngine_PhysicsScene2D_RaycastArray_Internal_Injected();

		//System.Int32 UnityEngine.PhysicsScene2D::RaycastList_Internal_Injected(UnityEngine.PhysicsScene2D&,UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,UnityEngine.ContactFilter2D&,System.Collections.Generic.List`1<UnityEngine.RaycastHit2D>)
		void Register_UnityEngine_PhysicsScene2D_RaycastList_Internal_Injected();
		Register_UnityEngine_PhysicsScene2D_RaycastList_Internal_Injected();

		//System.Void UnityEngine.PhysicsScene2D::Raycast_Internal_Injected(UnityEngine.PhysicsScene2D&,UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,UnityEngine.ContactFilter2D&,UnityEngine.RaycastHit2D&)
		void Register_UnityEngine_PhysicsScene2D_Raycast_Internal_Injected();
		Register_UnityEngine_PhysicsScene2D_Raycast_Internal_Injected();

	//End Registrations for type : UnityEngine.PhysicsScene2D

	//Start Registrations for type : UnityEngine.Playables.PlayableHandle

		//System.Boolean UnityEngine.Playables.PlayableHandle::IsValid_Injected(UnityEngine.Playables.PlayableHandle&)
		void Register_UnityEngine_Playables_PlayableHandle_IsValid_Injected();
		Register_UnityEngine_Playables_PlayableHandle_IsValid_Injected();

		//System.Type UnityEngine.Playables.PlayableHandle::GetPlayableType_Injected(UnityEngine.Playables.PlayableHandle&)
		void Register_UnityEngine_Playables_PlayableHandle_GetPlayableType_Injected();
		Register_UnityEngine_Playables_PlayableHandle_GetPlayableType_Injected();

	//End Registrations for type : UnityEngine.Playables.PlayableHandle

	//Start Registrations for type : UnityEngine.PlayerConnectionInternal

		//System.Boolean UnityEngine.PlayerConnectionInternal::IsConnected()
		void Register_UnityEngine_PlayerConnectionInternal_IsConnected();
		Register_UnityEngine_PlayerConnectionInternal_IsConnected();

		//System.Boolean UnityEngine.PlayerConnectionInternal::TrySendMessage(System.String,System.Byte[],System.Int32)
		void Register_UnityEngine_PlayerConnectionInternal_TrySendMessage();
		Register_UnityEngine_PlayerConnectionInternal_TrySendMessage();

		//System.Void UnityEngine.PlayerConnectionInternal::DisconnectAll()
		void Register_UnityEngine_PlayerConnectionInternal_DisconnectAll();
		Register_UnityEngine_PlayerConnectionInternal_DisconnectAll();

		//System.Void UnityEngine.PlayerConnectionInternal::Initialize()
		void Register_UnityEngine_PlayerConnectionInternal_Initialize();
		Register_UnityEngine_PlayerConnectionInternal_Initialize();

		//System.Void UnityEngine.PlayerConnectionInternal::PollInternal()
		void Register_UnityEngine_PlayerConnectionInternal_PollInternal();
		Register_UnityEngine_PlayerConnectionInternal_PollInternal();

		//System.Void UnityEngine.PlayerConnectionInternal::RegisterInternal(System.String)
		void Register_UnityEngine_PlayerConnectionInternal_RegisterInternal();
		Register_UnityEngine_PlayerConnectionInternal_RegisterInternal();

		//System.Void UnityEngine.PlayerConnectionInternal::SendMessage(System.String,System.Byte[],System.Int32)
		void Register_UnityEngine_PlayerConnectionInternal_SendMessage();
		Register_UnityEngine_PlayerConnectionInternal_SendMessage();

		//System.Void UnityEngine.PlayerConnectionInternal::UnregisterInternal(System.String)
		void Register_UnityEngine_PlayerConnectionInternal_UnregisterInternal();
		Register_UnityEngine_PlayerConnectionInternal_UnregisterInternal();

	//End Registrations for type : UnityEngine.PlayerConnectionInternal

	//Start Registrations for type : UnityEngine.QualitySettings

		//System.Void UnityEngine.QualitySettings::set_vSyncCount(System.Int32)
		void Register_UnityEngine_QualitySettings_set_vSyncCount();
		Register_UnityEngine_QualitySettings_set_vSyncCount();

		//UnityEngine.ColorSpace UnityEngine.QualitySettings::get_activeColorSpace()
		void Register_UnityEngine_QualitySettings_get_activeColorSpace();
		Register_UnityEngine_QualitySettings_get_activeColorSpace();

	//End Registrations for type : UnityEngine.QualitySettings

	//Start Registrations for type : UnityEngine.Quaternion

		//System.Void UnityEngine.Quaternion::Internal_FromEulerRad_Injected(UnityEngine.Vector3&,UnityEngine.Quaternion&)
		void Register_UnityEngine_Quaternion_Internal_FromEulerRad_Injected();
		Register_UnityEngine_Quaternion_Internal_FromEulerRad_Injected();

		//System.Void UnityEngine.Quaternion::Inverse_Injected(UnityEngine.Quaternion&,UnityEngine.Quaternion&)
		void Register_UnityEngine_Quaternion_Inverse_Injected();
		Register_UnityEngine_Quaternion_Inverse_Injected();

	//End Registrations for type : UnityEngine.Quaternion

	//Start Registrations for type : UnityEngine.RectOffset

		//System.Int32 UnityEngine.RectOffset::get_bottom()
		void Register_UnityEngine_RectOffset_get_bottom();
		Register_UnityEngine_RectOffset_get_bottom();

		//System.Int32 UnityEngine.RectOffset::get_horizontal()
		void Register_UnityEngine_RectOffset_get_horizontal();
		Register_UnityEngine_RectOffset_get_horizontal();

		//System.Int32 UnityEngine.RectOffset::get_left()
		void Register_UnityEngine_RectOffset_get_left();
		Register_UnityEngine_RectOffset_get_left();

		//System.Int32 UnityEngine.RectOffset::get_right()
		void Register_UnityEngine_RectOffset_get_right();
		Register_UnityEngine_RectOffset_get_right();

		//System.Int32 UnityEngine.RectOffset::get_top()
		void Register_UnityEngine_RectOffset_get_top();
		Register_UnityEngine_RectOffset_get_top();

		//System.Int32 UnityEngine.RectOffset::get_vertical()
		void Register_UnityEngine_RectOffset_get_vertical();
		Register_UnityEngine_RectOffset_get_vertical();

		//System.IntPtr UnityEngine.RectOffset::InternalCreate()
		void Register_UnityEngine_RectOffset_InternalCreate();
		Register_UnityEngine_RectOffset_InternalCreate();

		//System.Void UnityEngine.RectOffset::InternalDestroy(System.IntPtr)
		void Register_UnityEngine_RectOffset_InternalDestroy();
		Register_UnityEngine_RectOffset_InternalDestroy();

	//End Registrations for type : UnityEngine.RectOffset

	//Start Registrations for type : UnityEngine.ReflectionProbe

		//System.Void UnityEngine.ReflectionProbe::get_size_Injected(UnityEngine.Vector3&)
		void Register_UnityEngine_ReflectionProbe_get_size_Injected();
		Register_UnityEngine_ReflectionProbe_get_size_Injected();

		//System.Void UnityEngine.ReflectionProbe::set_boxProjection(System.Boolean)
		void Register_UnityEngine_ReflectionProbe_set_boxProjection();
		Register_UnityEngine_ReflectionProbe_set_boxProjection();

		//System.Void UnityEngine.ReflectionProbe::set_center_Injected(UnityEngine.Vector3&)
		void Register_UnityEngine_ReflectionProbe_set_center_Injected();
		Register_UnityEngine_ReflectionProbe_set_center_Injected();

		//System.Void UnityEngine.ReflectionProbe::set_customBakedTexture(UnityEngine.Texture)
		void Register_UnityEngine_ReflectionProbe_set_customBakedTexture();
		Register_UnityEngine_ReflectionProbe_set_customBakedTexture();

		//System.Void UnityEngine.ReflectionProbe::set_mode(UnityEngine.Rendering.ReflectionProbeMode)
		void Register_UnityEngine_ReflectionProbe_set_mode();
		Register_UnityEngine_ReflectionProbe_set_mode();

		//System.Void UnityEngine.ReflectionProbe::set_size_Injected(UnityEngine.Vector3&)
		void Register_UnityEngine_ReflectionProbe_set_size_Injected();
		Register_UnityEngine_ReflectionProbe_set_size_Injected();

		//UnityEngine.Texture UnityEngine.ReflectionProbe::get_customBakedTexture()
		void Register_UnityEngine_ReflectionProbe_get_customBakedTexture();
		Register_UnityEngine_ReflectionProbe_get_customBakedTexture();

	//End Registrations for type : UnityEngine.ReflectionProbe

	//Start Registrations for type : UnityEngine.Renderer

		//System.Boolean UnityEngine.Renderer::get_enabled()
		void Register_UnityEngine_Renderer_get_enabled();
		Register_UnityEngine_Renderer_get_enabled();

		//System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
		void Register_UnityEngine_Renderer_set_enabled();
		Register_UnityEngine_Renderer_set_enabled();

	//End Registrations for type : UnityEngine.Renderer

	//Start Registrations for type : UnityEngine.Rendering.CommandBuffer

		//System.Boolean UnityEngine.Rendering.CommandBuffer::ValidateAgainstExecutionFlags(UnityEngine.Rendering.CommandBufferExecutionFlags,UnityEngine.Rendering.CommandBufferExecutionFlags)
		void Register_UnityEngine_Rendering_CommandBuffer_ValidateAgainstExecutionFlags();
		Register_UnityEngine_Rendering_CommandBuffer_ValidateAgainstExecutionFlags();

		//System.IntPtr UnityEngine.Rendering.CommandBuffer::InitBuffer()
		void Register_UnityEngine_Rendering_CommandBuffer_InitBuffer();
		Register_UnityEngine_Rendering_CommandBuffer_InitBuffer();

		//System.Void UnityEngine.Rendering.CommandBuffer::Blit_Texture_Injected(UnityEngine.Texture,UnityEngine.Rendering.RenderTargetIdentifier&,UnityEngine.Material,System.Int32,UnityEngine.Vector2&,UnityEngine.Vector2&,System.Int32,System.Int32)
		void Register_UnityEngine_Rendering_CommandBuffer_Blit_Texture_Injected();
		Register_UnityEngine_Rendering_CommandBuffer_Blit_Texture_Injected();

		//System.Void UnityEngine.Rendering.CommandBuffer::Clear()
		void Register_UnityEngine_Rendering_CommandBuffer_Clear();
		Register_UnityEngine_Rendering_CommandBuffer_Clear();

		//System.Void UnityEngine.Rendering.CommandBuffer::ClearRenderTarget_Injected(System.Boolean,System.Boolean,UnityEngine.Color&,System.Single)
		void Register_UnityEngine_Rendering_CommandBuffer_ClearRenderTarget_Injected();
		Register_UnityEngine_Rendering_CommandBuffer_ClearRenderTarget_Injected();

		//System.Void UnityEngine.Rendering.CommandBuffer::IssuePluginEventInternal(System.IntPtr,System.Int32)
		void Register_UnityEngine_Rendering_CommandBuffer_IssuePluginEventInternal();
		Register_UnityEngine_Rendering_CommandBuffer_IssuePluginEventInternal();

		//System.Void UnityEngine.Rendering.CommandBuffer::ReleaseBuffer()
		void Register_UnityEngine_Rendering_CommandBuffer_ReleaseBuffer();
		Register_UnityEngine_Rendering_CommandBuffer_ReleaseBuffer();

		//System.Void UnityEngine.Rendering.CommandBuffer::SetInvertCulling(System.Boolean)
		void Register_UnityEngine_Rendering_CommandBuffer_SetInvertCulling();
		Register_UnityEngine_Rendering_CommandBuffer_SetInvertCulling();

		//System.Void UnityEngine.Rendering.CommandBuffer::set_name(System.String)
		void Register_UnityEngine_Rendering_CommandBuffer_set_name();
		Register_UnityEngine_Rendering_CommandBuffer_set_name();

	//End Registrations for type : UnityEngine.Rendering.CommandBuffer

	//Start Registrations for type : UnityEngine.Rendering.GraphicsSettings

		//System.Boolean UnityEngine.Rendering.GraphicsSettings::get_lightsUseLinearIntensity()
		void Register_UnityEngine_Rendering_GraphicsSettings_get_lightsUseLinearIntensity();
		Register_UnityEngine_Rendering_GraphicsSettings_get_lightsUseLinearIntensity();

		//UnityEngine.ScriptableObject UnityEngine.Rendering.GraphicsSettings::get_INTERNAL_defaultRenderPipeline()
		void Register_UnityEngine_Rendering_GraphicsSettings_get_INTERNAL_defaultRenderPipeline();
		Register_UnityEngine_Rendering_GraphicsSettings_get_INTERNAL_defaultRenderPipeline();

	//End Registrations for type : UnityEngine.Rendering.GraphicsSettings

	//Start Registrations for type : UnityEngine.Rendering.ScriptableRenderContext

		//System.Int32 UnityEngine.Rendering.ScriptableRenderContext::GetNumberOfCameras_Internal_Injected(UnityEngine.Rendering.ScriptableRenderContext&)
		void Register_UnityEngine_Rendering_ScriptableRenderContext_GetNumberOfCameras_Internal_Injected();
		Register_UnityEngine_Rendering_ScriptableRenderContext_GetNumberOfCameras_Internal_Injected();

		//UnityEngine.Camera UnityEngine.Rendering.ScriptableRenderContext::GetCamera_Internal_Injected(UnityEngine.Rendering.ScriptableRenderContext&,System.Int32)
		void Register_UnityEngine_Rendering_ScriptableRenderContext_GetCamera_Internal_Injected();
		Register_UnityEngine_Rendering_ScriptableRenderContext_GetCamera_Internal_Injected();

	//End Registrations for type : UnityEngine.Rendering.ScriptableRenderContext

	//Start Registrations for type : UnityEngine.RenderTexture

		//System.Int32 UnityEngine.RenderTexture::get_height()
		void Register_UnityEngine_RenderTexture_get_height();
		Register_UnityEngine_RenderTexture_get_height();

		//System.Int32 UnityEngine.RenderTexture::get_width()
		void Register_UnityEngine_RenderTexture_get_width();
		Register_UnityEngine_RenderTexture_get_width();

		//System.Void UnityEngine.RenderTexture::GetDescriptor_Injected(UnityEngine.RenderTextureDescriptor&)
		void Register_UnityEngine_RenderTexture_GetDescriptor_Injected();
		Register_UnityEngine_RenderTexture_GetDescriptor_Injected();

		//System.Void UnityEngine.RenderTexture::Internal_Create(UnityEngine.RenderTexture)
		void Register_UnityEngine_RenderTexture_Internal_Create();
		Register_UnityEngine_RenderTexture_Internal_Create();

		//System.Void UnityEngine.RenderTexture::SetRenderTextureDescriptor_Injected(UnityEngine.RenderTextureDescriptor&)
		void Register_UnityEngine_RenderTexture_SetRenderTextureDescriptor_Injected();
		Register_UnityEngine_RenderTexture_SetRenderTextureDescriptor_Injected();

		//System.Void UnityEngine.RenderTexture::SetSRGBReadWrite(System.Boolean)
		void Register_UnityEngine_RenderTexture_SetSRGBReadWrite();
		Register_UnityEngine_RenderTexture_SetSRGBReadWrite();

		//System.Void UnityEngine.RenderTexture::set_depth(System.Int32)
		void Register_UnityEngine_RenderTexture_set_depth();
		Register_UnityEngine_RenderTexture_set_depth();

		//System.Void UnityEngine.RenderTexture::set_graphicsFormat(UnityEngine.Experimental.Rendering.GraphicsFormat)
		void Register_UnityEngine_RenderTexture_set_graphicsFormat();
		Register_UnityEngine_RenderTexture_set_graphicsFormat();

		//System.Void UnityEngine.RenderTexture::set_height(System.Int32)
		void Register_UnityEngine_RenderTexture_set_height();
		Register_UnityEngine_RenderTexture_set_height();

		//System.Void UnityEngine.RenderTexture::set_width(System.Int32)
		void Register_UnityEngine_RenderTexture_set_width();
		Register_UnityEngine_RenderTexture_set_width();

	//End Registrations for type : UnityEngine.RenderTexture

	//Start Registrations for type : UnityEngine.Resources

		//UnityEngine.Object UnityEngine.Resources::Load(System.String,System.Type)
		void Register_UnityEngine_Resources_Load();
		Register_UnityEngine_Resources_Load();

	//End Registrations for type : UnityEngine.Resources

	//Start Registrations for type : UnityEngine.Screen

		//System.Int32 UnityEngine.Screen::get_height()
		void Register_UnityEngine_Screen_get_height();
		Register_UnityEngine_Screen_get_height();

		//System.Int32 UnityEngine.Screen::get_width()
		void Register_UnityEngine_Screen_get_width();
		Register_UnityEngine_Screen_get_width();

		//UnityEngine.ScreenOrientation UnityEngine.Screen::GetScreenOrientation()
		void Register_UnityEngine_Screen_GetScreenOrientation();
		Register_UnityEngine_Screen_GetScreenOrientation();

	//End Registrations for type : UnityEngine.Screen

	//Start Registrations for type : UnityEngine.ScriptableObject

		//System.Void UnityEngine.ScriptableObject::CreateScriptableObject(UnityEngine.ScriptableObject)
		void Register_UnityEngine_ScriptableObject_CreateScriptableObject();
		Register_UnityEngine_ScriptableObject_CreateScriptableObject();

		//UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateScriptableObjectInstanceFromType(System.Type,System.Boolean)
		void Register_UnityEngine_ScriptableObject_CreateScriptableObjectInstanceFromType();
		Register_UnityEngine_ScriptableObject_CreateScriptableObjectInstanceFromType();

	//End Registrations for type : UnityEngine.ScriptableObject

	//Start Registrations for type : UnityEngine.Shader

		//System.Int32 UnityEngine.Shader::PropertyToID(System.String)
		void Register_UnityEngine_Shader_PropertyToID();
		Register_UnityEngine_Shader_PropertyToID();

		//UnityEngine.Shader UnityEngine.Shader::Find(System.String)
		void Register_UnityEngine_Shader_Find();
		Register_UnityEngine_Shader_Find();

	//End Registrations for type : UnityEngine.Shader

	//Start Registrations for type : UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform

		//System.Boolean UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::GetAuthenticated()
		void Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_GetAuthenticated();
		Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_GetAuthenticated();

		//System.Boolean UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::GetIsUnderage()
		void Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_GetIsUnderage();
		Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_GetIsUnderage();

		//System.String UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_UserGameID()
		void Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_Internal_UserGameID();
		Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_Internal_UserGameID();

		//System.String UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_UserID()
		void Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_Internal_UserID();
		Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_Internal_UserID();

		//System.String UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_UserName()
		void Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_Internal_UserName();
		Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_Internal_UserName();

		//System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Authenticate()
		void Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_Authenticate();
		Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_Authenticate();

		//System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::InternalLoadAchievementDescriptions(System.Object)
		void Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_InternalLoadAchievementDescriptions();
		Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_InternalLoadAchievementDescriptions();

		//System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::InternalLoadAchievements(System.Object)
		void Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_InternalLoadAchievements();
		Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_InternalLoadAchievements();

		//System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::InternalLoadScores(System.String,System.Object)
		void Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_InternalLoadScores();
		Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_InternalLoadScores();

		//System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::InternalReportProgress(System.String,System.Double,System.Object)
		void Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_InternalReportProgress();
		Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_InternalReportProgress();

		//System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::InternalReportScore(System.Int64,System.String,System.Object)
		void Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_InternalReportScore();
		Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_InternalReportScore();

		//System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadUsers(System.String[],System.Object)
		void Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_Internal_LoadUsers();
		Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_Internal_LoadUsers();

		//System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowAchievementsUI()
		void Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_Internal_ShowAchievementsUI();
		Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_Internal_ShowAchievementsUI();

		//System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowLeaderboardUI()
		void Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_Internal_ShowLeaderboardUI();
		Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_Internal_ShowLeaderboardUI();

		//System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::LoadFriends(System.Object)
		void Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_LoadFriends();
		Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_LoadFriends();

		//System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ResetAllAchievements()
		void Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_ResetAllAchievements();
		Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_ResetAllAchievements();

		//System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ShowDefaultAchievementBanner(System.Boolean)
		void Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_ShowDefaultAchievementBanner();
		Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_ShowDefaultAchievementBanner();

		//System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ShowSpecificLeaderboardUI(System.String,System.Int32)
		void Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_ShowSpecificLeaderboardUI();
		Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_ShowSpecificLeaderboardUI();

		//UnityEngine.Texture2D UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::GetUserImage()
		void Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_GetUserImage();
		Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_GetUserImage();

	//End Registrations for type : UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform

	//Start Registrations for type : UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard

		//System.Boolean UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::GcLeaderboard_Loading(System.IntPtr)
		void Register_UnityEngine_SocialPlatforms_GameCenter_GcLeaderboard_GcLeaderboard_Loading();
		Register_UnityEngine_SocialPlatforms_GameCenter_GcLeaderboard_GcLeaderboard_Loading();

		//System.IntPtr UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::GcLeaderboard_LoadScores(System.Object,System.String,System.Int32,System.Int32,System.String[],System.Int32,System.Int32,System.Object)
		void Register_UnityEngine_SocialPlatforms_GameCenter_GcLeaderboard_GcLeaderboard_LoadScores();
		Register_UnityEngine_SocialPlatforms_GameCenter_GcLeaderboard_GcLeaderboard_LoadScores();

		//System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::GcLeaderboard_Dispose(System.IntPtr)
		void Register_UnityEngine_SocialPlatforms_GameCenter_GcLeaderboard_GcLeaderboard_Dispose();
		Register_UnityEngine_SocialPlatforms_GameCenter_GcLeaderboard_GcLeaderboard_Dispose();

	//End Registrations for type : UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard

	//Start Registrations for type : UnityEngine.SubsystemManager

		//System.Void UnityEngine.SubsystemManager::DestroyInstance_Internal(System.IntPtr)
		void Register_UnityEngine_SubsystemManager_DestroyInstance_Internal();
		Register_UnityEngine_SubsystemManager_DestroyInstance_Internal();

		//System.Void UnityEngine.SubsystemManager::ReportSingleSubsystemAnalytics(System.String)
		void Register_UnityEngine_SubsystemManager_ReportSingleSubsystemAnalytics();
		Register_UnityEngine_SubsystemManager_ReportSingleSubsystemAnalytics();

		//System.Void UnityEngine.SubsystemManager::StaticConstructScriptingClassMap()
		void Register_UnityEngine_SubsystemManager_StaticConstructScriptingClassMap();
		Register_UnityEngine_SubsystemManager_StaticConstructScriptingClassMap();

	//End Registrations for type : UnityEngine.SubsystemManager

	//Start Registrations for type : UnityEngine.SystemInfo

		//System.Boolean UnityEngine.SystemInfo::IsFormatSupported(UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.FormatUsage)
		void Register_UnityEngine_SystemInfo_IsFormatSupported();
		Register_UnityEngine_SystemInfo_IsFormatSupported();

		//System.Boolean UnityEngine.SystemInfo::SupportsTextureFormatNative(UnityEngine.TextureFormat)
		void Register_UnityEngine_SystemInfo_SupportsTextureFormatNative();
		Register_UnityEngine_SystemInfo_SupportsTextureFormatNative();

		//UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.SystemInfo::GetCompatibleFormat(UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.FormatUsage)
		void Register_UnityEngine_SystemInfo_GetCompatibleFormat();
		Register_UnityEngine_SystemInfo_GetCompatibleFormat();

		//UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.SystemInfo::GetGraphicsFormat(UnityEngine.Experimental.Rendering.DefaultFormat)
		void Register_UnityEngine_SystemInfo_GetGraphicsFormat();
		Register_UnityEngine_SystemInfo_GetGraphicsFormat();

		//UnityEngine.Rendering.GraphicsDeviceType UnityEngine.SystemInfo::GetGraphicsDeviceType()
		void Register_UnityEngine_SystemInfo_GetGraphicsDeviceType();
		Register_UnityEngine_SystemInfo_GetGraphicsDeviceType();

	//End Registrations for type : UnityEngine.SystemInfo

	//Start Registrations for type : UnityEngine.Terrain

		//System.Boolean UnityEngine.Terrain::get_allowAutoConnect()
		void Register_UnityEngine_Terrain_get_allowAutoConnect();
		Register_UnityEngine_Terrain_get_allowAutoConnect();

		//System.Int32 UnityEngine.Terrain::get_groupingID()
		void Register_UnityEngine_Terrain_get_groupingID();
		Register_UnityEngine_Terrain_get_groupingID();

		//System.Void UnityEngine.Terrain::SetNeighbors(UnityEngine.Terrain,UnityEngine.Terrain,UnityEngine.Terrain,UnityEngine.Terrain)
		void Register_UnityEngine_Terrain_SetNeighbors();
		Register_UnityEngine_Terrain_SetNeighbors();

		//UnityEngine.TerrainData UnityEngine.Terrain::get_terrainData()
		void Register_UnityEngine_Terrain_get_terrainData();
		Register_UnityEngine_Terrain_get_terrainData();

		//UnityEngine.Terrain[] UnityEngine.Terrain::get_activeTerrains()
		void Register_UnityEngine_Terrain_get_activeTerrains();
		Register_UnityEngine_Terrain_get_activeTerrains();

	//End Registrations for type : UnityEngine.Terrain

	//Start Registrations for type : UnityEngine.TerrainData

		//System.Int32 UnityEngine.TerrainData::GetBoundaryValue(UnityEngine.TerrainData/BoundaryValueType)
		void Register_UnityEngine_TerrainData_GetBoundaryValue();
		Register_UnityEngine_TerrainData_GetBoundaryValue();

		//System.Single UnityEngine.TerrainData::GetAlphamapResolutionInternal()
		void Register_UnityEngine_TerrainData_GetAlphamapResolutionInternal();
		Register_UnityEngine_TerrainData_GetAlphamapResolutionInternal();

		//System.Void UnityEngine.TerrainData::Internal_Create(UnityEngine.TerrainData)
		void Register_UnityEngine_TerrainData_Internal_Create();
		Register_UnityEngine_TerrainData_Internal_Create();

		//System.Void UnityEngine.TerrainData::get_size_Injected(UnityEngine.Vector3&)
		void Register_UnityEngine_TerrainData_get_size_Injected();
		Register_UnityEngine_TerrainData_get_size_Injected();

		//UnityEngine.Terrain[] UnityEngine.TerrainData::get_users()
		void Register_UnityEngine_TerrainData_get_users();
		Register_UnityEngine_TerrainData_get_users();

	//End Registrations for type : UnityEngine.TerrainData

	//Start Registrations for type : UnityEngine.TextAsset

		//System.Byte[] UnityEngine.TextAsset::get_bytes()
		void Register_UnityEngine_TextAsset_get_bytes();
		Register_UnityEngine_TextAsset_get_bytes();

	//End Registrations for type : UnityEngine.TextAsset

	//Start Registrations for type : UnityEngine.TextMesh

		//System.Void UnityEngine.TextMesh::set_text(System.String)
		void Register_UnityEngine_TextMesh_set_text();
		Register_UnityEngine_TextMesh_set_text();

	//End Registrations for type : UnityEngine.TextMesh

	//Start Registrations for type : UnityEngine.Texture

		//System.Boolean UnityEngine.Texture::get_isReadable()
		void Register_UnityEngine_Texture_get_isReadable();
		Register_UnityEngine_Texture_get_isReadable();

		//System.Int32 UnityEngine.Texture::GetDataHeight()
		void Register_UnityEngine_Texture_GetDataHeight();
		Register_UnityEngine_Texture_GetDataHeight();

		//System.Int32 UnityEngine.Texture::GetDataWidth()
		void Register_UnityEngine_Texture_GetDataWidth();
		Register_UnityEngine_Texture_GetDataWidth();

		//System.Void UnityEngine.Texture::set_filterMode(UnityEngine.FilterMode)
		void Register_UnityEngine_Texture_set_filterMode();
		Register_UnityEngine_Texture_set_filterMode();

		//System.Void UnityEngine.Texture::set_wrapMode(UnityEngine.TextureWrapMode)
		void Register_UnityEngine_Texture_set_wrapMode();
		Register_UnityEngine_Texture_set_wrapMode();

	//End Registrations for type : UnityEngine.Texture

	//Start Registrations for type : UnityEngine.Texture2D

		//System.Boolean UnityEngine.Texture2D::Internal_CreateImpl(UnityEngine.Texture2D,System.Int32,System.Int32,System.Int32,UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.TextureCreationFlags,System.IntPtr)
		void Register_UnityEngine_Texture2D_Internal_CreateImpl();
		Register_UnityEngine_Texture2D_Internal_CreateImpl();

		//System.Boolean UnityEngine.Texture2D::get_isReadable()
		void Register_UnityEngine_Texture2D_get_isReadable();
		Register_UnityEngine_Texture2D_get_isReadable();

		//System.Int64 UnityEngine.Texture2D::GetRawImageDataSize()
		void Register_UnityEngine_Texture2D_GetRawImageDataSize();
		Register_UnityEngine_Texture2D_GetRawImageDataSize();

		//System.IntPtr UnityEngine.Texture2D::GetWritableImageData(System.Int32)
		void Register_UnityEngine_Texture2D_GetWritableImageData();
		Register_UnityEngine_Texture2D_GetWritableImageData();

		//System.Void UnityEngine.Texture2D::UpdateExternalTexture(System.IntPtr)
		void Register_UnityEngine_Texture2D_UpdateExternalTexture();
		Register_UnityEngine_Texture2D_UpdateExternalTexture();

		//UnityEngine.TextureFormat UnityEngine.Texture2D::get_format()
		void Register_UnityEngine_Texture2D_get_format();
		Register_UnityEngine_Texture2D_get_format();

	//End Registrations for type : UnityEngine.Texture2D

	//Start Registrations for type : UnityEngine.Texture2DArray

		//System.Boolean UnityEngine.Texture2DArray::Internal_CreateImpl(UnityEngine.Texture2DArray,System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.TextureCreationFlags)
		void Register_UnityEngine_Texture2DArray_Internal_CreateImpl();
		Register_UnityEngine_Texture2DArray_Internal_CreateImpl();

		//System.Boolean UnityEngine.Texture2DArray::get_isReadable()
		void Register_UnityEngine_Texture2DArray_get_isReadable();
		Register_UnityEngine_Texture2DArray_get_isReadable();

		//System.Int32 UnityEngine.Texture2DArray::get_allSlices()
		void Register_UnityEngine_Texture2DArray_get_allSlices();
		Register_UnityEngine_Texture2DArray_get_allSlices();

	//End Registrations for type : UnityEngine.Texture2DArray

	//Start Registrations for type : UnityEngine.Texture3D

		//System.Boolean UnityEngine.Texture3D::Internal_CreateImpl(UnityEngine.Texture3D,System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.TextureCreationFlags)
		void Register_UnityEngine_Texture3D_Internal_CreateImpl();
		Register_UnityEngine_Texture3D_Internal_CreateImpl();

		//System.Boolean UnityEngine.Texture3D::get_isReadable()
		void Register_UnityEngine_Texture3D_get_isReadable();
		Register_UnityEngine_Texture3D_get_isReadable();

	//End Registrations for type : UnityEngine.Texture3D

	//Start Registrations for type : UnityEngine.Tilemaps.Tilemap

		//System.Void UnityEngine.Tilemaps.Tilemap::RefreshTile_Injected(UnityEngine.Vector3Int&)
		void Register_UnityEngine_Tilemaps_Tilemap_RefreshTile_Injected();
		Register_UnityEngine_Tilemaps_Tilemap_RefreshTile_Injected();

	//End Registrations for type : UnityEngine.Tilemaps.Tilemap

	//Start Registrations for type : UnityEngine.Tilemaps.TilemapRenderer

		//System.Void UnityEngine.Tilemaps.TilemapRenderer::OnSpriteAtlasRegistered(UnityEngine.U2D.SpriteAtlas)
		void Register_UnityEngine_Tilemaps_TilemapRenderer_OnSpriteAtlasRegistered();
		Register_UnityEngine_Tilemaps_TilemapRenderer_OnSpriteAtlasRegistered();

	//End Registrations for type : UnityEngine.Tilemaps.TilemapRenderer

	//Start Registrations for type : UnityEngine.Time

		//System.Single UnityEngine.Time::get_deltaTime()
		void Register_UnityEngine_Time_get_deltaTime();
		Register_UnityEngine_Time_get_deltaTime();

	//End Registrations for type : UnityEngine.Time

	//Start Registrations for type : UnityEngine.Transform

		//System.Boolean UnityEngine.Transform::get_hasChanged()
		void Register_UnityEngine_Transform_get_hasChanged();
		Register_UnityEngine_Transform_get_hasChanged();

		//System.Int32 UnityEngine.Transform::get_childCount()
		void Register_UnityEngine_Transform_get_childCount();
		Register_UnityEngine_Transform_get_childCount();

		//System.Void UnityEngine.Transform::InverseTransformDirection_Injected(UnityEngine.Vector3&,UnityEngine.Vector3&)
		void Register_UnityEngine_Transform_InverseTransformDirection_Injected();
		Register_UnityEngine_Transform_InverseTransformDirection_Injected();

		//System.Void UnityEngine.Transform::InverseTransformPoint_Injected(UnityEngine.Vector3&,UnityEngine.Vector3&)
		void Register_UnityEngine_Transform_InverseTransformPoint_Injected();
		Register_UnityEngine_Transform_InverseTransformPoint_Injected();

		//System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
		void Register_UnityEngine_Transform_SetParent();
		Register_UnityEngine_Transform_SetParent();

		//System.Void UnityEngine.Transform::TransformDirection_Injected(UnityEngine.Vector3&,UnityEngine.Vector3&)
		void Register_UnityEngine_Transform_TransformDirection_Injected();
		Register_UnityEngine_Transform_TransformDirection_Injected();

		//System.Void UnityEngine.Transform::TransformPoint_Injected(UnityEngine.Vector3&,UnityEngine.Vector3&)
		void Register_UnityEngine_Transform_TransformPoint_Injected();
		Register_UnityEngine_Transform_TransformPoint_Injected();

		//System.Void UnityEngine.Transform::get_localPosition_Injected(UnityEngine.Vector3&)
		void Register_UnityEngine_Transform_get_localPosition_Injected();
		Register_UnityEngine_Transform_get_localPosition_Injected();

		//System.Void UnityEngine.Transform::get_localRotation_Injected(UnityEngine.Quaternion&)
		void Register_UnityEngine_Transform_get_localRotation_Injected();
		Register_UnityEngine_Transform_get_localRotation_Injected();

		//System.Void UnityEngine.Transform::get_localScale_Injected(UnityEngine.Vector3&)
		void Register_UnityEngine_Transform_get_localScale_Injected();
		Register_UnityEngine_Transform_get_localScale_Injected();

		//System.Void UnityEngine.Transform::get_localToWorldMatrix_Injected(UnityEngine.Matrix4x4&)
		void Register_UnityEngine_Transform_get_localToWorldMatrix_Injected();
		Register_UnityEngine_Transform_get_localToWorldMatrix_Injected();

		//System.Void UnityEngine.Transform::get_lossyScale_Injected(UnityEngine.Vector3&)
		void Register_UnityEngine_Transform_get_lossyScale_Injected();
		Register_UnityEngine_Transform_get_lossyScale_Injected();

		//System.Void UnityEngine.Transform::get_position_Injected(UnityEngine.Vector3&)
		void Register_UnityEngine_Transform_get_position_Injected();
		Register_UnityEngine_Transform_get_position_Injected();

		//System.Void UnityEngine.Transform::get_rotation_Injected(UnityEngine.Quaternion&)
		void Register_UnityEngine_Transform_get_rotation_Injected();
		Register_UnityEngine_Transform_get_rotation_Injected();

		//System.Void UnityEngine.Transform::set_hasChanged(System.Boolean)
		void Register_UnityEngine_Transform_set_hasChanged();
		Register_UnityEngine_Transform_set_hasChanged();

		//System.Void UnityEngine.Transform::set_localPosition_Injected(UnityEngine.Vector3&)
		void Register_UnityEngine_Transform_set_localPosition_Injected();
		Register_UnityEngine_Transform_set_localPosition_Injected();

		//System.Void UnityEngine.Transform::set_localRotation_Injected(UnityEngine.Quaternion&)
		void Register_UnityEngine_Transform_set_localRotation_Injected();
		Register_UnityEngine_Transform_set_localRotation_Injected();

		//System.Void UnityEngine.Transform::set_localScale_Injected(UnityEngine.Vector3&)
		void Register_UnityEngine_Transform_set_localScale_Injected();
		Register_UnityEngine_Transform_set_localScale_Injected();

		//System.Void UnityEngine.Transform::set_position_Injected(UnityEngine.Vector3&)
		void Register_UnityEngine_Transform_set_position_Injected();
		Register_UnityEngine_Transform_set_position_Injected();

		//System.Void UnityEngine.Transform::set_rotation_Injected(UnityEngine.Quaternion&)
		void Register_UnityEngine_Transform_set_rotation_Injected();
		Register_UnityEngine_Transform_set_rotation_Injected();

		//UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
		void Register_UnityEngine_Transform_GetChild();
		Register_UnityEngine_Transform_GetChild();

		//UnityEngine.Transform UnityEngine.Transform::GetParent()
		void Register_UnityEngine_Transform_GetParent();
		Register_UnityEngine_Transform_GetParent();

	//End Registrations for type : UnityEngine.Transform

	//Start Registrations for type : UnityEngine.U2D.SpriteAtlasManager

		//System.Void UnityEngine.U2D.SpriteAtlasManager::Register(UnityEngine.U2D.SpriteAtlas)
		void Register_UnityEngine_U2D_SpriteAtlasManager_Register();
		Register_UnityEngine_U2D_SpriteAtlasManager_Register();

	//End Registrations for type : UnityEngine.U2D.SpriteAtlasManager

	//Start Registrations for type : UnityEngine.UnhandledExceptionHandler

		//System.Void UnityEngine.UnhandledExceptionHandler::iOSNativeUnhandledExceptionHandler(System.String,System.String,System.String)
		void Register_UnityEngine_UnhandledExceptionHandler_iOSNativeUnhandledExceptionHandler();
		Register_UnityEngine_UnhandledExceptionHandler_iOSNativeUnhandledExceptionHandler();

	//End Registrations for type : UnityEngine.UnhandledExceptionHandler

	//Start Registrations for type : UnityEngine.UnityLogWriter

		//System.Void UnityEngine.UnityLogWriter::WriteStringToUnityLogImpl(System.String)
		void Register_UnityEngine_UnityLogWriter_WriteStringToUnityLogImpl();
		Register_UnityEngine_UnityLogWriter_WriteStringToUnityLogImpl();

	//End Registrations for type : UnityEngine.UnityLogWriter

	//Start Registrations for type : UnityEngine.VFX.VFXSpawnerState

		//System.Void UnityEngine.VFX.VFXSpawnerState::Internal_Destroy(System.IntPtr)
		void Register_UnityEngine_VFX_VFXSpawnerState_Internal_Destroy();
		Register_UnityEngine_VFX_VFXSpawnerState_Internal_Destroy();

	//End Registrations for type : UnityEngine.VFX.VFXSpawnerState

	//Start Registrations for type : UnityEngine.XR.InputTracking

		//System.Void UnityEngine.XR.InputTracking::GetNodeStates_Internal(System.Collections.Generic.List`1<UnityEngine.XR.XRNodeState>)
		void Register_UnityEngine_XR_InputTracking_GetNodeStates_Internal();
		Register_UnityEngine_XR_InputTracking_GetNodeStates_Internal();

	//End Registrations for type : UnityEngine.XR.InputTracking

	//Start Registrations for type : UnityEngine.XR.Tango.TangoInputTracking

		//System.Boolean UnityEngine.XR.Tango.TangoInputTracking::Internal_TryGetPoseAtTime(UnityEngine.XR.Tango.PoseData&)
		void Register_UnityEngine_XR_Tango_TangoInputTracking_Internal_TryGetPoseAtTime();
		Register_UnityEngine_XR_Tango_TangoInputTracking_Internal_TryGetPoseAtTime();

	//End Registrations for type : UnityEngine.XR.Tango.TangoInputTracking

	//Start Registrations for type : UnityEngine.XR.XRMeshSubsystem

		//System.Boolean UnityEngine.XR.XRMeshSubsystem::GetMeshInfosAsList(System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>)
		void Register_UnityEngine_XR_XRMeshSubsystem_GetMeshInfosAsList();
		Register_UnityEngine_XR_XRMeshSubsystem_GetMeshInfosAsList();

		//System.Boolean UnityEngine.XR.XRMeshSubsystem::SetBoundingVolume_Injected(UnityEngine.Vector3&,UnityEngine.Vector3&)
		void Register_UnityEngine_XR_XRMeshSubsystem_SetBoundingVolume_Injected();
		Register_UnityEngine_XR_XRMeshSubsystem_SetBoundingVolume_Injected();

		//System.Void UnityEngine.XR.XRMeshSubsystem::GenerateMeshAsync_Injected(UnityEngine.XR.MeshId&,UnityEngine.Mesh,UnityEngine.MeshCollider,UnityEngine.XR.MeshVertexAttributes,System.Action`1<UnityEngine.XR.MeshGenerationResult>)
		void Register_UnityEngine_XR_XRMeshSubsystem_GenerateMeshAsync_Injected();
		Register_UnityEngine_XR_XRMeshSubsystem_GenerateMeshAsync_Injected();

		//System.Void UnityEngine.XR.XRMeshSubsystem::set_meshDensity(System.Single)
		void Register_UnityEngine_XR_XRMeshSubsystem_set_meshDensity();
		Register_UnityEngine_XR_XRMeshSubsystem_set_meshDensity();

	//End Registrations for type : UnityEngine.XR.XRMeshSubsystem

	//Start Registrations for type : UnityEngineInternal.Input.NativeInputSystem

		//System.Void UnityEngineInternal.Input.NativeInputSystem::set_hasDeviceDiscoveredCallback(System.Boolean)
		void Register_UnityEngineInternal_Input_NativeInputSystem_set_hasDeviceDiscoveredCallback();
		Register_UnityEngineInternal_Input_NativeInputSystem_set_hasDeviceDiscoveredCallback();

	//End Registrations for type : UnityEngineInternal.Input.NativeInputSystem

}
