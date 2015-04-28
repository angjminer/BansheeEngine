#include "BsScriptGUIFlexibleSpace.h"
#include "BsScriptMeta.h"
#include "BsMonoField.h"
#include "BsMonoClass.h"
#include "BsMonoManager.h"
#include "BsSpriteTexture.h"
#include "BsMonoUtil.h"
#include "BsGUILayout.h"
#include "BsGUISpace.h"
#include "BsScriptGUILayout.h"

namespace BansheeEngine
{
	ScriptGUIFlexibleSpace::ScriptGUIFlexibleSpace(MonoObject* instance, GUIFlexibleSpace* flexibleSpace)
		:TScriptGUIElementBase(instance, flexibleSpace), mFlexibleSpace(flexibleSpace), mIsDestroyed(false)
	{

	}

	void ScriptGUIFlexibleSpace::initRuntimeData()
	{
		metaData.scriptClass->addInternalCall("Internal_CreateInstance", &ScriptGUIFlexibleSpace::internal_createInstance);
	}

	void ScriptGUIFlexibleSpace::destroy()
	{
		if(!mIsDestroyed)
		{
			GUIFlexibleSpace::destroy(mFlexibleSpace);

			mIsDestroyed = true;
		}
	}

	void ScriptGUIFlexibleSpace::internal_createInstance(MonoObject* instance)
	{
		GUIFlexibleSpace* space = GUIFlexibleSpace::create();

		ScriptGUIFlexibleSpace* nativeInstance = new (bs_alloc<ScriptGUIFlexibleSpace>()) ScriptGUIFlexibleSpace(instance, space);
	}
}