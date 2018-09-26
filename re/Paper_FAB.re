[@bs.module "react-native-paper"]
external reactClass: ReasonReact.reactClass = "FAB";

let make =
    (
      ~small: bool=false,
      ~dark: bool=false,
      ~color: option(string)=?,
      ~theme: option(Paper_ThemeProvider.appTheme)=?,
      ~icon: ReasonReact.reactElement,
      ~style: option(BsReactNative.Style.t)=?,
      ~onPress: option(BsReactNative.RNEvent.NativeEvent.t => unit)=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass,
    ~props=
      Js.Null_undefined.{
        "small": small,
        "dark": dark,
        "color": fromOption(color),
        "icon": icon,
        "onPress": fromOption(onPress),
        "style": fromOption(style),
        "theme": fromOption(theme),
      },
    children,
  );
