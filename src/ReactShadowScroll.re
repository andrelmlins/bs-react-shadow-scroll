[@bs.module "react-shadow-scroll/dist/index.js"]
external reactClass: ReasonReact.reactClass = "default";

let make =
    (
      ~scrollColor: option(string)=?,
      ~scrollColorHover: option(string)=?,
      ~scrollWidth: option(int)=?,
      ~scrollPadding: option(int)=?,
      ~isShadow: option(bool)=?,
      ~shadow: option(string)=?,
      ~styleSubcontainer: option(ReactDOMRe.Style.t)=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass,
    ~props={
      "scrollColor": Js.Nullable.fromOption(scrollColor),
      "scrollColorHover": Js.Nullable.fromOption(scrollColorHover),
      "scrollWidth": Js.Nullable.fromOption(scrollWidth),
      "scrollPadding": Js.Nullable.fromOption(scrollPadding),
      "isShadow": Js.Nullable.fromOption(isShadow),
      "shadow": Js.Nullable.fromOption(shadow),
      "styleSubcontainer": Js.Nullable.fromOption(styleSubcontainer),
    },
    children,
  );