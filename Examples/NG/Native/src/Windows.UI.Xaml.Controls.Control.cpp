/**
 * Windows Native Wrapper for Windows.UI.Xaml.Controls.Control
 *
 * Copyright (c) 2015 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License.
 * Please see the LICENSE included with this distribution for details.
 */

#include "Windows.UI.Xaml.Controls.Control.hpp"
#include "Windows.UI.Xaml.Controls.ControlTemplate.hpp"
#include "Windows.UI.Xaml.DependencyProperty.hpp"
#include "Windows.UI.Xaml.FrameworkElement.hpp"
#include "Windows.UI.Xaml.Media.Brush.hpp"
#include "Windows.UI.Xaml.Media.FontFamily.hpp"

namespace Titanium
{
	namespace Windows
	{
		namespace UI
		{
			namespace Xaml
			{
				namespace Controls
				{

		Control::Control(const JSContext& js_context) TITANIUM_NOEXCEPT
			: Windows::UI::Xaml::FrameworkElement(js_context)
		{
			TITANIUM_LOG_DEBUG("Control::ctor");
		}

		void Control::postCallAsConstructor(const JSContext& context, const std::vector<JSValue>& arguments)
		{
			TITANIUM_LOG_DEBUG("Control::postCallAsConstructor ", this);

		}

		::Windows::UI::Xaml::Controls::Control^ Control::unwrapWindows_UI_Xaml_Controls_Control() const
		{
			return dynamic_cast<::Windows::UI::Xaml::Controls::Control^>(wrapped__);
		}

		::Windows::UI::Xaml::Controls::Control^ Control::unwrap() const
		{
			return unwrapWindows_UI_Xaml_Controls_Control();
		}

		void Control::wrap(::Windows::UI::Xaml::Controls::Control^ object)
		{
			wrapped__ = object;
		}

		void Control::JSExportInitialize()
		{
			JSExport<Control>::SetClassVersion(1);
			JSExport<Control>::SetParent(JSExport<Windows::UI::Xaml::FrameworkElement>::Class());

			TITANIUM_ADD_PROPERTY(Control, FontStyle);
			TITANIUM_ADD_PROPERTY(Control, FontStretch);
			TITANIUM_ADD_PROPERTY(Control, FontSize);
			TITANIUM_ADD_PROPERTY(Control, FontFamily);
			TITANIUM_ADD_PROPERTY(Control, FontWeight);
			TITANIUM_ADD_PROPERTY(Control, CharacterSpacing);
			TITANIUM_ADD_PROPERTY(Control, BorderThickness);
			TITANIUM_ADD_PROPERTY(Control, BorderBrush);
			TITANIUM_ADD_PROPERTY(Control, Background);
			TITANIUM_ADD_PROPERTY(Control, VerticalContentAlignment);
			TITANIUM_ADD_PROPERTY(Control, Template);
			TITANIUM_ADD_PROPERTY(Control, TabNavigation);
			TITANIUM_ADD_PROPERTY(Control, TabIndex);
			TITANIUM_ADD_PROPERTY(Control, Padding);
			TITANIUM_ADD_PROPERTY(Control, IsTabStop);
			TITANIUM_ADD_PROPERTY(Control, IsEnabled);
			TITANIUM_ADD_PROPERTY(Control, HorizontalContentAlignment);
			TITANIUM_ADD_PROPERTY(Control, Foreground);
			TITANIUM_ADD_PROPERTY_READONLY(Control, FocusState);
			TITANIUM_ADD_PROPERTY(Control, DefaultStyleKey);
			TITANIUM_ADD_PROPERTY_READONLY(Control, BackgroundProperty);
			TITANIUM_ADD_PROPERTY_READONLY(Control, BorderBrushProperty);
			TITANIUM_ADD_PROPERTY_READONLY(Control, BorderThicknessProperty);
			TITANIUM_ADD_PROPERTY_READONLY(Control, CharacterSpacingProperty);
			TITANIUM_ADD_PROPERTY_READONLY(Control, DefaultStyleKeyProperty);
			TITANIUM_ADD_PROPERTY_READONLY(Control, FocusStateProperty);
			TITANIUM_ADD_PROPERTY_READONLY(Control, FontFamilyProperty);
			TITANIUM_ADD_PROPERTY_READONLY(Control, FontSizeProperty);
			TITANIUM_ADD_PROPERTY_READONLY(Control, FontStretchProperty);
			TITANIUM_ADD_PROPERTY_READONLY(Control, FontStyleProperty);
			TITANIUM_ADD_PROPERTY_READONLY(Control, FontWeightProperty);
			TITANIUM_ADD_PROPERTY_READONLY(Control, ForegroundProperty);
			TITANIUM_ADD_PROPERTY_READONLY(Control, HorizontalContentAlignmentProperty);
			TITANIUM_ADD_PROPERTY_READONLY(Control, IsEnabledProperty);
			TITANIUM_ADD_PROPERTY_READONLY(Control, IsTabStopProperty);
			TITANIUM_ADD_PROPERTY_READONLY(Control, PaddingProperty);
			TITANIUM_ADD_PROPERTY_READONLY(Control, TabIndexProperty);
			TITANIUM_ADD_PROPERTY_READONLY(Control, TabNavigationProperty);
			TITANIUM_ADD_PROPERTY_READONLY(Control, TemplateProperty);
			TITANIUM_ADD_PROPERTY_READONLY(Control, VerticalContentAlignmentProperty);
			TITANIUM_ADD_FUNCTION(Control, ApplyTemplate);
			TITANIUM_ADD_FUNCTION(Control, Focus);
		}

		TITANIUM_PROPERTY_SETTER(Control, FontStyle)
		{
			auto value = static_cast<::Windows::UI::Text::FontStyle>(static_cast<int32_t>(argument)); // TODO Look up enum in metadata to know what type it's value is? 

			unwrap()->FontStyle = value;
			return true;
		}

		TITANIUM_PROPERTY_GETTER(Control, FontStyle)
		{
			auto value = unwrap()->FontStyle;
			auto context = get_context();

			auto result = context.CreateNumber(static_cast<int32_t>(static_cast<int>(value))); // FIXME What if the enum isn't an int based one?!

		}

		TITANIUM_PROPERTY_SETTER(Control, FontStretch)
		{
			auto value = static_cast<::Windows::UI::Text::FontStretch>(static_cast<int32_t>(argument)); // TODO Look up enum in metadata to know what type it's value is? 

			unwrap()->FontStretch = value;
			return true;
		}

		TITANIUM_PROPERTY_GETTER(Control, FontStretch)
		{
			auto value = unwrap()->FontStretch;
			auto context = get_context();

			auto result = context.CreateNumber(static_cast<int32_t>(static_cast<int>(value))); // FIXME What if the enum isn't an int based one?!

		}

		TITANIUM_PROPERTY_SETTER(Control, FontSize)
		{ 
			auto value = static_cast<float>(static_cast<double>(argument));

			unwrap()->FontSize = value;
			return true;
		}

		TITANIUM_PROPERTY_GETTER(Control, FontSize)
		{
			auto value = unwrap()->FontSize;
			auto context = get_context();


		}

		TITANIUM_PROPERTY_SETTER(Control, FontFamily)
		{
			auto object_value = static_cast<JSObject>(argument);
 
			// FIXME What if the type we want here is some parent class of the actual wrapper's class? I think we'll get nullptr here.
			// We need some way to know the underlying type the JSObject maps to, get that, then cast to the type we want...
			auto value = wrapper_value->unwrapWindows_UI_Xaml_Media_FontFamily();

			unwrap()->FontFamily = value;
			return true;
		}

		TITANIUM_PROPERTY_GETTER(Control, FontFamily)
		{
			auto value = unwrap()->FontFamily;
			auto context = get_context();

			auto result_wrapper = result.GetPrivate<Windows::UI::Xaml::Media::FontFamily>();
			result_wrapper->wrap(value);

		}

		TITANIUM_PROPERTY_SETTER(Control, FontWeight)
		{
			auto object_value = static_cast<JSObject>(argument);
			::Windows::UI::Text::FontWeight value;
			// Assign fields explicitly since we didn't use a constructor

			auto object_value_Weight_ = static_cast<uint32_t>(object_value_Weight);


			unwrap()->FontWeight = value;
			return true;
		}

		TITANIUM_PROPERTY_GETTER(Control, FontWeight)
		{
			auto value = unwrap()->FontWeight;
			auto context = get_context();

			auto result = context.CreateObject();


		}

		TITANIUM_PROPERTY_SETTER(Control, CharacterSpacing)
		{ 
			auto value = static_cast<int32_t>(argument);

			unwrap()->CharacterSpacing = value;
			return true;
		}

		TITANIUM_PROPERTY_GETTER(Control, CharacterSpacing)
		{
			auto value = unwrap()->CharacterSpacing;
			auto context = get_context();


		}

		TITANIUM_PROPERTY_SETTER(Control, BorderThickness)
		{
			auto object_value = static_cast<JSObject>(argument);
			::Windows::UI::Xaml::Thickness value;
			// Assign fields explicitly since we didn't use a constructor

			auto object_value_Left_ = static_cast<float>(static_cast<double>(object_value_Left));


			auto object_value_Top_ = static_cast<float>(static_cast<double>(object_value_Top));


			auto object_value_Right_ = static_cast<float>(static_cast<double>(object_value_Right));


			auto object_value_Bottom_ = static_cast<float>(static_cast<double>(object_value_Bottom));


			unwrap()->BorderThickness = value;
			return true;
		}

		TITANIUM_PROPERTY_GETTER(Control, BorderThickness)
		{
			auto value = unwrap()->BorderThickness;
			auto context = get_context();

			auto result = context.CreateObject();








		}

		TITANIUM_PROPERTY_SETTER(Control, BorderBrush)
		{
			auto object_value = static_cast<JSObject>(argument);
 
			// FIXME What if the type we want here is some parent class of the actual wrapper's class? I think we'll get nullptr here.
			// We need some way to know the underlying type the JSObject maps to, get that, then cast to the type we want...
			auto value = wrapper_value->unwrapWindows_UI_Xaml_Media_Brush();

			unwrap()->BorderBrush = value;
			return true;
		}

		TITANIUM_PROPERTY_GETTER(Control, BorderBrush)
		{
			auto value = unwrap()->BorderBrush;
			auto context = get_context();

			auto result_wrapper = result.GetPrivate<Windows::UI::Xaml::Media::Brush>();
			result_wrapper->wrap(value);

		}

		TITANIUM_PROPERTY_SETTER(Control, Background)
		{
			auto object_value = static_cast<JSObject>(argument);
 
			// FIXME What if the type we want here is some parent class of the actual wrapper's class? I think we'll get nullptr here.
			// We need some way to know the underlying type the JSObject maps to, get that, then cast to the type we want...
			auto value = wrapper_value->unwrapWindows_UI_Xaml_Media_Brush();

			unwrap()->Background = value;
			return true;
		}

		TITANIUM_PROPERTY_GETTER(Control, Background)
		{
			auto value = unwrap()->Background;
			auto context = get_context();

			auto result_wrapper = result.GetPrivate<Windows::UI::Xaml::Media::Brush>();
			result_wrapper->wrap(value);

		}

		TITANIUM_PROPERTY_SETTER(Control, VerticalContentAlignment)
		{
			auto value = static_cast<::Windows::UI::Xaml::VerticalAlignment>(static_cast<int32_t>(argument)); // TODO Look up enum in metadata to know what type it's value is? 

			unwrap()->VerticalContentAlignment = value;
			return true;
		}

		TITANIUM_PROPERTY_GETTER(Control, VerticalContentAlignment)
		{
			auto value = unwrap()->VerticalContentAlignment;
			auto context = get_context();

			auto result = context.CreateNumber(static_cast<int32_t>(static_cast<int>(value))); // FIXME What if the enum isn't an int based one?!

		}

		TITANIUM_PROPERTY_SETTER(Control, Template)
		{
			auto object_value = static_cast<JSObject>(argument);
 
			// FIXME What if the type we want here is some parent class of the actual wrapper's class? I think we'll get nullptr here.
			// We need some way to know the underlying type the JSObject maps to, get that, then cast to the type we want...
			auto value = wrapper_value->unwrapWindows_UI_Xaml_Controls_ControlTemplate();

			unwrap()->Template = value;
			return true;
		}

		TITANIUM_PROPERTY_GETTER(Control, Template)
		{
			auto value = unwrap()->Template;
			auto context = get_context();

			auto result_wrapper = result.GetPrivate<Windows::UI::Xaml::Controls::ControlTemplate>();
			result_wrapper->wrap(value);

		}

		TITANIUM_PROPERTY_SETTER(Control, TabNavigation)
		{
			auto value = static_cast<::Windows::UI::Xaml::Input::KeyboardNavigationMode>(static_cast<int32_t>(argument)); // TODO Look up enum in metadata to know what type it's value is? 

			unwrap()->TabNavigation = value;
			return true;
		}

		TITANIUM_PROPERTY_GETTER(Control, TabNavigation)
		{
			auto value = unwrap()->TabNavigation;
			auto context = get_context();

			auto result = context.CreateNumber(static_cast<int32_t>(static_cast<int>(value))); // FIXME What if the enum isn't an int based one?!

		}

		TITANIUM_PROPERTY_SETTER(Control, TabIndex)
		{ 
			auto value = static_cast<int32_t>(argument);

			unwrap()->TabIndex = value;
			return true;
		}

		TITANIUM_PROPERTY_GETTER(Control, TabIndex)
		{
			auto value = unwrap()->TabIndex;
			auto context = get_context();


		}

		TITANIUM_PROPERTY_SETTER(Control, Padding)
		{
			auto object_value = static_cast<JSObject>(argument);
			::Windows::UI::Xaml::Thickness value;
			// Assign fields explicitly since we didn't use a constructor

			auto object_value_Left_ = static_cast<float>(static_cast<double>(object_value_Left));


			auto object_value_Top_ = static_cast<float>(static_cast<double>(object_value_Top));


			auto object_value_Right_ = static_cast<float>(static_cast<double>(object_value_Right));


			auto object_value_Bottom_ = static_cast<float>(static_cast<double>(object_value_Bottom));


			unwrap()->Padding = value;
			return true;
		}

		TITANIUM_PROPERTY_GETTER(Control, Padding)
		{
			auto value = unwrap()->Padding;
			auto context = get_context();

			auto result = context.CreateObject();








		}

		TITANIUM_PROPERTY_SETTER(Control, IsTabStop)
		{ 
			auto value = static_cast<bool>(argument);

			unwrap()->IsTabStop = value;
			return true;
		}

		TITANIUM_PROPERTY_GETTER(Control, IsTabStop)
		{
			auto value = unwrap()->IsTabStop;
			auto context = get_context();


		}

		TITANIUM_PROPERTY_SETTER(Control, IsEnabled)
		{ 
			auto value = static_cast<bool>(argument);

			unwrap()->IsEnabled = value;
			return true;
		}

		TITANIUM_PROPERTY_GETTER(Control, IsEnabled)
		{
			auto value = unwrap()->IsEnabled;
			auto context = get_context();


		}

		TITANIUM_PROPERTY_SETTER(Control, HorizontalContentAlignment)
		{
			auto value = static_cast<::Windows::UI::Xaml::HorizontalAlignment>(static_cast<int32_t>(argument)); // TODO Look up enum in metadata to know what type it's value is? 

			unwrap()->HorizontalContentAlignment = value;
			return true;
		}

		TITANIUM_PROPERTY_GETTER(Control, HorizontalContentAlignment)
		{
			auto value = unwrap()->HorizontalContentAlignment;
			auto context = get_context();

			auto result = context.CreateNumber(static_cast<int32_t>(static_cast<int>(value))); // FIXME What if the enum isn't an int based one?!

		}

		TITANIUM_PROPERTY_SETTER(Control, Foreground)
		{
			auto object_value = static_cast<JSObject>(argument);
 
			// FIXME What if the type we want here is some parent class of the actual wrapper's class? I think we'll get nullptr here.
			// We need some way to know the underlying type the JSObject maps to, get that, then cast to the type we want...
			auto value = wrapper_value->unwrapWindows_UI_Xaml_Media_Brush();

			unwrap()->Foreground = value;
			return true;
		}

		TITANIUM_PROPERTY_GETTER(Control, Foreground)
		{
			auto value = unwrap()->Foreground;
			auto context = get_context();

			auto result_wrapper = result.GetPrivate<Windows::UI::Xaml::Media::Brush>();
			result_wrapper->wrap(value);

		}

		TITANIUM_PROPERTY_GETTER(Control, FocusState)
		{
			auto value = unwrap()->FocusState;
			auto context = get_context();

			auto result = context.CreateNumber(static_cast<int32_t>(static_cast<int>(value))); // FIXME What if the enum isn't an int based one?!

		}

		TITANIUM_PROPERTY_SETTER(Control, DefaultStyleKey)
		{
			auto object_value = static_cast<JSObject>(argument);
 
			// FIXME What if the type we want here is some parent class of the actual wrapper's class? I think we'll get nullptr here.
			// We need some way to know the underlying type the JSObject maps to, get that, then cast to the type we want...
			auto value = wrapper_value->unwrapPlatform_Object();

			unwrap()->DefaultStyleKey = value;
			return true;
		}

		TITANIUM_PROPERTY_GETTER(Control, DefaultStyleKey)
		{
			auto value = unwrap()->DefaultStyleKey;
			auto context = get_context();

			auto result_wrapper = result.GetPrivate<Platform::Object>();
			result_wrapper->wrap(value);

		}

		TITANIUM_PROPERTY_GETTER(Control, BackgroundProperty)
		{
			auto value = unwrap()->BackgroundProperty;
			auto context = get_context();

			auto result_wrapper = result.GetPrivate<Windows::UI::Xaml::DependencyProperty>();
			result_wrapper->wrap(value);

		}

		TITANIUM_PROPERTY_GETTER(Control, BorderBrushProperty)
		{
			auto value = unwrap()->BorderBrushProperty;
			auto context = get_context();

			auto result_wrapper = result.GetPrivate<Windows::UI::Xaml::DependencyProperty>();
			result_wrapper->wrap(value);

		}

		TITANIUM_PROPERTY_GETTER(Control, BorderThicknessProperty)
		{
			auto value = unwrap()->BorderThicknessProperty;
			auto context = get_context();

			auto result_wrapper = result.GetPrivate<Windows::UI::Xaml::DependencyProperty>();
			result_wrapper->wrap(value);

		}

		TITANIUM_PROPERTY_GETTER(Control, CharacterSpacingProperty)
		{
			auto value = unwrap()->CharacterSpacingProperty;
			auto context = get_context();

			auto result_wrapper = result.GetPrivate<Windows::UI::Xaml::DependencyProperty>();
			result_wrapper->wrap(value);

		}

		TITANIUM_PROPERTY_GETTER(Control, DefaultStyleKeyProperty)
		{
			auto value = unwrap()->DefaultStyleKeyProperty;
			auto context = get_context();

			auto result_wrapper = result.GetPrivate<Windows::UI::Xaml::DependencyProperty>();
			result_wrapper->wrap(value);

		}

		TITANIUM_PROPERTY_GETTER(Control, FocusStateProperty)
		{
			auto value = unwrap()->FocusStateProperty;
			auto context = get_context();

			auto result_wrapper = result.GetPrivate<Windows::UI::Xaml::DependencyProperty>();
			result_wrapper->wrap(value);

		}

		TITANIUM_PROPERTY_GETTER(Control, FontFamilyProperty)
		{
			auto value = unwrap()->FontFamilyProperty;
			auto context = get_context();

			auto result_wrapper = result.GetPrivate<Windows::UI::Xaml::DependencyProperty>();
			result_wrapper->wrap(value);

		}

		TITANIUM_PROPERTY_GETTER(Control, FontSizeProperty)
		{
			auto value = unwrap()->FontSizeProperty;
			auto context = get_context();

			auto result_wrapper = result.GetPrivate<Windows::UI::Xaml::DependencyProperty>();
			result_wrapper->wrap(value);

		}

		TITANIUM_PROPERTY_GETTER(Control, FontStretchProperty)
		{
			auto value = unwrap()->FontStretchProperty;
			auto context = get_context();

			auto result_wrapper = result.GetPrivate<Windows::UI::Xaml::DependencyProperty>();
			result_wrapper->wrap(value);

		}

		TITANIUM_PROPERTY_GETTER(Control, FontStyleProperty)
		{
			auto value = unwrap()->FontStyleProperty;
			auto context = get_context();

			auto result_wrapper = result.GetPrivate<Windows::UI::Xaml::DependencyProperty>();
			result_wrapper->wrap(value);

		}

		TITANIUM_PROPERTY_GETTER(Control, FontWeightProperty)
		{
			auto value = unwrap()->FontWeightProperty;
			auto context = get_context();

			auto result_wrapper = result.GetPrivate<Windows::UI::Xaml::DependencyProperty>();
			result_wrapper->wrap(value);

		}

		TITANIUM_PROPERTY_GETTER(Control, ForegroundProperty)
		{
			auto value = unwrap()->ForegroundProperty;
			auto context = get_context();

			auto result_wrapper = result.GetPrivate<Windows::UI::Xaml::DependencyProperty>();
			result_wrapper->wrap(value);

		}

		TITANIUM_PROPERTY_GETTER(Control, HorizontalContentAlignmentProperty)
		{
			auto value = unwrap()->HorizontalContentAlignmentProperty;
			auto context = get_context();

			auto result_wrapper = result.GetPrivate<Windows::UI::Xaml::DependencyProperty>();
			result_wrapper->wrap(value);

		}

		TITANIUM_PROPERTY_GETTER(Control, IsEnabledProperty)
		{
			auto value = unwrap()->IsEnabledProperty;
			auto context = get_context();

			auto result_wrapper = result.GetPrivate<Windows::UI::Xaml::DependencyProperty>();
			result_wrapper->wrap(value);

		}

		TITANIUM_PROPERTY_GETTER(Control, IsTabStopProperty)
		{
			auto value = unwrap()->IsTabStopProperty;
			auto context = get_context();

			auto result_wrapper = result.GetPrivate<Windows::UI::Xaml::DependencyProperty>();
			result_wrapper->wrap(value);

		}

		TITANIUM_PROPERTY_GETTER(Control, PaddingProperty)
		{
			auto value = unwrap()->PaddingProperty;
			auto context = get_context();

			auto result_wrapper = result.GetPrivate<Windows::UI::Xaml::DependencyProperty>();
			result_wrapper->wrap(value);

		}

		TITANIUM_PROPERTY_GETTER(Control, TabIndexProperty)
		{
			auto value = unwrap()->TabIndexProperty;
			auto context = get_context();

			auto result_wrapper = result.GetPrivate<Windows::UI::Xaml::DependencyProperty>();
			result_wrapper->wrap(value);

		}

		TITANIUM_PROPERTY_GETTER(Control, TabNavigationProperty)
		{
			auto value = unwrap()->TabNavigationProperty;
			auto context = get_context();

			auto result_wrapper = result.GetPrivate<Windows::UI::Xaml::DependencyProperty>();
			result_wrapper->wrap(value);

		}

		TITANIUM_PROPERTY_GETTER(Control, TemplateProperty)
		{
			auto value = unwrap()->TemplateProperty;
			auto context = get_context();

			auto result_wrapper = result.GetPrivate<Windows::UI::Xaml::DependencyProperty>();
			result_wrapper->wrap(value);

		}

		TITANIUM_PROPERTY_GETTER(Control, VerticalContentAlignmentProperty)
		{
			auto value = unwrap()->VerticalContentAlignmentProperty;
			auto context = get_context();

			auto result_wrapper = result.GetPrivate<Windows::UI::Xaml::DependencyProperty>();
			result_wrapper->wrap(value);

		}

		TITANIUM_FUNCTION(Control, ApplyTemplate)
		{
			auto context = get_context();
			if (arguments.size() == 0) {
				auto method_result = unwrap()->ApplyTemplate();

			}

			// Catch-all if no arg count matches!
			TITANIUM_LOG_DEBUG("No method signature matched Control::ApplyTemplate with # of args: ", arguments.size());
			return context.CreateUndefined(); 
		}

		TITANIUM_FUNCTION(Control, Focus)
		{
			auto context = get_context();
			if (arguments.size() == 1) {
				auto _0 = arguments.at(0);
			auto value = static_cast<::Windows::UI::Xaml::FocusState>(static_cast<int32_t>(_0)); // TODO Look up enum in metadata to know what type it's value is? 

				auto method_result = unwrap()->Focus(value);

			}

			// Catch-all if no arg count matches!
			TITANIUM_LOG_DEBUG("No method signature matched Control::Focus with # of args: ", arguments.size());
			return context.CreateUndefined(); 
		}

				} // namespace Controls
			} // namespace Xaml
		} // namespace UI
	} // namespace Windows
} // namespace Titanium