/**
 * TitaniumKit CameraOptionsType
 *
 * Copyright (c) 2015 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License.
 * Please see the LICENSE included with this distribution for details.
 */

#include "Titanium/Media/CameraOptionsType.hpp"
#include "Titanium/UI/View.hpp"
#include "Titanium/UI/2DMatrix.hpp"

namespace Titanium
{
	namespace Media
	{
		using namespace HAL;
		
		CameraOptionsType js_to_CameraOptionsType(const JSObject& object)
		{
			std::vector<MediaType> mediaTypes;
			
			const auto js_types_property = object.GetProperty("mediaTypes");
			if (js_types_property.IsObject()) {
				const auto js_types = static_cast<JSObject>(js_types_property);
				if (js_types.IsArray()) {
					auto types = static_cast<std::vector<JSValue>>(static_cast<JSArray>(js_types));
					for (const auto v : types) {
						mediaTypes.push_back(static_cast<MediaType>(static_cast<std::uint32_t>(v)));
					}
				}
			}

			const auto js_overlay = object.GetProperty("overlay");
			ENSURE_MODULE_OBJECT(js_overlay, overlay, Titanium::UI::View)
			
			const auto js_popoverView = object.GetProperty("overlay");
			ENSURE_MODULE_OBJECT(js_popoverView, popoverView, Titanium::UI::View)
			
			const auto js_transform = object.GetProperty("transform");
			ENSURE_MODULE_OBJECT(js_transform, transform, Titanium::UI::TwoDMatrix)
			
			CameraOptionsType config {
				JSOBJECT_GETPROPERTY(object, allowEditing, bool, false),
				JSOBJECT_GETPROPERTY(object, animated, bool, true),
				JSOBJECT_GETPROPERTY(object, arrowDirection, std::uint32_t, 0),
				JSOBJECT_GETPROPERTY(object, autohide, bool, false),
				JSOBJECT_GETPROPERTY(object, autorotate, bool, true),
				object.GetProperty("cancel"),
				object.GetProperty("error"),
				JSOBJECT_GETPROPERTY(object, isPopOver, bool, false),
				mediaTypes,
				overlay,
				popoverView,
				JSOBJECT_GETPROPERTY(object, saveToPhotoGallery, bool, false),
				JSOBJECT_GETPROPERTY(object, showControls, bool, true),
				object.GetProperty("success"),
				transform,
				std::chrono::milliseconds::min(),
				Quality::High
			};
			
			return config;
		};

		JSObject CameraOptionsType_to_js(const JSContext& js_context, const CameraOptionsType& config)
		{
			std::vector<JSValue> mediaTypes;
			for (const auto mediaType : config.mediaTypes) {
				mediaTypes.push_back(js_context.CreateNumber(static_cast<std::uint32_t>(mediaType)));
			}
			
			JSValue overlay = js_context.CreateNull();
			if (config.overlay != nullptr) {
				overlay = config.overlay->get_object();
			}
			
			JSValue popoverView = js_context.CreateNull();
			if (config.popoverView != nullptr) {
				popoverView = config.popoverView->get_object();
			}
			
			JSValue transform = js_context.CreateNull();
			if (config.transform != nullptr) {
				transform = config.transform->get_object();
			}
			
			auto object = js_context.CreateObject();
			object.SetProperty("allowEditing", js_context.CreateBoolean(config.allowEditing));
			object.SetProperty("animated", js_context.CreateBoolean(config.animated));
			object.SetProperty("arrowDirection", js_context.CreateNumber(config.arrowDirection));
			object.SetProperty("autohide", js_context.CreateBoolean(config.autohide));
			object.SetProperty("autorotate", js_context.CreateBoolean(config.autorotate));
			object.SetProperty("cancel",  config.cancel);
			object.SetProperty("error",   config.error);
			object.SetProperty("isPopOver", js_context.CreateBoolean(config.isPopOver));
			object.SetProperty("mediaTypes", js_context.CreateArray(mediaTypes));
			object.SetProperty("overlay", overlay);
			object.SetProperty("popoverView", popoverView);
			object.SetProperty("saveToPhotoGallery", js_context.CreateBoolean(config.saveToPhotoGallery));
			object.SetProperty("showControls", js_context.CreateBoolean(config.showControls));
			object.SetProperty("success", config.success);
			object.SetProperty("videoMaximumDuration", js_context.CreateNumber(static_cast<double>(config.videoMaximumDuration.count())));
			object.SetProperty("videoQuality", js_context.CreateNumber(static_cast<std::uint32_t>(config.videoQuality)));
			return object;
		}
	} // namespace Media
} // namespace Titanium
