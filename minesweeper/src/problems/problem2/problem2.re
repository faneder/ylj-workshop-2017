let style =
  ReactDOMRe.Style.make
    /* place the appropriate styles here */
    display::"block"
    background::"red"
    width::"50px"
    height::"50px"
    ();

module Problem2 = {
  include ReactRe.Component;
  type props = unit;
  let name = "Problem2";
  let render _ => <div style />;
};

include ReactRe.CreateComponent Problem2;

let createElement = wrapProps ();
