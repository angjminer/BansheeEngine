#include "BsGUIScrollBarHorz.h"
#include "BsGUIElementStyle.h"
#include "BsGUISkin.h"
#include "BsGUIWidget.h"
#include "BsGUIDimensions.h"
#include "BsGUILayout.h"
#include "BsGUISkin.h"
#include "BsGUIButton.h"
#include "BsGUISliderHandle.h"
#include "BsGUISpace.h"
#include "BsException.h"

namespace BansheeEngine
{
	GUIScrollBarHorz::GUIScrollBarHorz(const String& styleName, const GUIDimensions& dimensions)
		:GUIScrollBar(true, styleName, dimensions)
	{

	}

	GUIScrollBarHorz::~GUIScrollBarHorz()
	{

	}

	GUIScrollBarHorz* GUIScrollBarHorz::create(const String& styleName)
	{
		return new (bs_alloc<GUIScrollBarHorz, PoolAlloc>()) GUIScrollBarHorz(getStyleName<GUIScrollBarHorz>(styleName), GUIDimensions::create());
	}

	GUIScrollBarHorz* GUIScrollBarHorz::create(const GUIOptions& options, const String& styleName)
	{
		return new (bs_alloc<GUIScrollBarHorz, PoolAlloc>()) GUIScrollBarHorz(getStyleName<GUIScrollBarHorz>(styleName), GUIDimensions::create(options));
	}

	const String& GUIScrollBarHorz::getGUITypeName()
	{
		static String typeName = "ScrollBarHorz";
		return typeName;
	}
}