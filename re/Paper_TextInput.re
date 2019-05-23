[@bs.module "react-native-paper"]
external reactClass: ReasonReact.reactClass = "TextInput";

[@bs.deriving jsConverter]
type capitalize = [ | `none | `sentences | `words | `characters];

[@bs.deriving jsConverter]
type modes = [ | [@bs.as "flat"] `flat | [@bs.as "outlined"] `outlined];

let make =
    (
      ~mode: modes=`flat,
      ~allowFontScaling: bool=false,
      ~autoCorrect: bool=false,
      ~autoFocus: bool=false,
      ~autoCapitalize: option(capitalize)=?,
      ~autoGrow: bool=false,
      ~blurOnSubmit: bool=false,
      ~caretHidden: bool=false,
      ~contextMenuHidden: bool=false,
      ~dataDetectorTypes: option(string)=?,
      ~enablesReturnKeyAutomatically: bool=false,
      ~error: bool=false,
      ~keyboardAppearance: option(string)=?,
      ~defaultValue: option(string)=?,
      ~disabled: bool=false,
      ~disableFullscreenUI: bool=false,
      ~editable: bool=true,
      ~keyboardType: option(string)=?,
      ~inlineImageLeft: option(string)=?,
      ~inlineImagePadding: option(string)=?,
      ~maxHeight: option(float)=?,
      ~maxLength: option(int)=?,
      ~label: option(string)=?,
      ~placeholder: option(string)=?,
      ~placeholderTextColor: option(string)=?,
      ~returnKeyType: option(string)=?,
      ~returnKeyLabel: option(string)=?,
      ~spellCheck: bool=false,
      ~textBreakStrategy: option(string)=?,
      ~underlineColorAndroid: option(string)=?,
      ~clearButtonMode: option(string)=?,
      ~clearTextOnFocus: option(string)=?,
      ~secureTextEntry: bool=false,
      ~selectTextOnFocus: bool=false,
      ~selection: option(Js.t({..}))=?,
      ~selectionColor: option(string)=?,
      ~underlineColor: option(string)=?,
      ~multiline: bool=false,
      ~numberOfLines: option(int)=?,
      ~value: option(string)=?,
      ~theme: option(Paper_ThemeProvider.appTheme)=?,
      ~style: option(BsReactNative.Style.t)=?,
      ~onChange: option(unit => unit)=?,
      ~onChangeText: option(string => unit)=?,
      ~onContentSizeChange: option(unit => unit)=?,
      ~onKeyPress: option(unit => unit)=?,
      ~onEndEditing: option(unit => unit)=?,
      ~onLayout: option(unit => unit)=?,
      ~onScroll: option(unit => unit)=?,
      ~onSelectionChange: option(unit => unit)=?,
      ~onSubmitEditing: option(unit => unit)=?,
      ~onFocus: option(unit => unit)=?,
      ~onBlur: option(unit => unit)=?,
      ~testID: option(string)=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass,
    ~props=
      Js.Nullable.{
        "mode": modesToJs(mode),
        "allowFontScaling": allowFontScaling,
        "autoCorrect": autoCorrect,
        "autoFocus": autoFocus,
        "autoCapitalize":
          (
            switch (autoCapitalize) {
            | Some(autoCapitalize) => Some(capitalizeToJs(autoCapitalize))
            | None => None
            }
          )
          |> fromOption,
        "autoGrow": autoGrow,
        "blurOnSubmit": blurOnSubmit,
        "caretHidden": caretHidden,
        "contextMenuHidden": contextMenuHidden,
        "dataDetectorTypes": fromOption(dataDetectorTypes),
        "enablesReturnKeyAutomatically": enablesReturnKeyAutomatically,
        "keyboardAppearance": fromOption(keyboardAppearance),
        "defaultValue": fromOption(defaultValue),
        "disabled": disabled,
        "disableFullscreenUI": disableFullscreenUI,
        "editable": editable,
        "error": error,
        "keyboardType": fromOption(keyboardType),
        "inlineImageLeft": fromOption(inlineImageLeft),
        "inlineImagePadding": fromOption(inlineImagePadding),
        "maxHeight": fromOption(maxHeight),
        "maxLength": fromOption(maxLength),
        "label": fromOption(label),
        "placeholder": fromOption(placeholder),
        "placeholderTextColor": fromOption(placeholderTextColor),
        "returnKeyType": fromOption(returnKeyType),
        "returnKeyLabel": fromOption(returnKeyLabel),
        "spellCheck": spellCheck,
        "textBreakStrategy": fromOption(textBreakStrategy),
        "underlineColorAndroid": fromOption(underlineColorAndroid),
        "clearButtonMode": fromOption(clearButtonMode),
        "clearTextOnFocus": fromOption(clearTextOnFocus),
        "secureTextEntry": secureTextEntry,
        "selectTextOnFocus": selectTextOnFocus,
        "selection": fromOption(selection),
        "selectionColor": fromOption(selectionColor),
        "underlineColor": fromOption(underlineColor),
        "multiline": multiline,
        "numberOfLines": fromOption(numberOfLines),
        "value": fromOption(value),
        "theme": fromOption(theme),
        "style": fromOption(style),
        "onChange": fromOption(onChange),
        "onChangeText": fromOption(onChangeText),
        "onContentSizeChange": fromOption(onContentSizeChange),
        "onKeyPress": fromOption(onKeyPress),
        "onEndEditing": fromOption(onEndEditing),
        "onLayout": fromOption(onLayout),
        "onScroll": fromOption(onScroll),
        "onSelectionChange": fromOption(onSelectionChange),
        "onSubmitEditing": fromOption(onSubmitEditing),
        "onFocus": fromOption(onFocus),
        "onBlur": fromOption(onBlur),
        "testID": fromOption(testID),
      },
    children,
  );
