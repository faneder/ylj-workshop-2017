module Problem1 = {
  include ReactRe.Component;
  type props = unit;
  let name = "Problem1";
  let render _ =>
    <div>(ReactRe.stringToElement "ReasonML")</div>
};

include ReactRe.CreateComponent Problem1;

let createElement = wrapProps ();
