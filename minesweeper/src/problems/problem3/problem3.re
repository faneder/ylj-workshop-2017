let boxStyle = ReactDOMRe.Style.make width::"50px" height::"50px" border::"1px black solid" ();

module Problem3 = {
  include ReactRe.Component;
  type props = unit;
  let name = "Problem3";
  let render {handler} => {
    let handleClick _ evt =>
      /*Js.log "clicked";*/
      switch(ReactEventRe.Mouse._type evt) {
        | "click" => Js.log "clicked"
        | _ => ()
      };
    let handleHover _ evt =>
      /* change this function to log "hover began" when the event is a mouseover event  and "hover ended" when the event is a mouseleave event */
      switch(ReactEventRe.Mouse._type evt) {
        | "mouseenter" => Js.log "entered"
        | "mouseleave" => Js.log "leave"
        | _ => ()
      };
    <div
      style=boxStyle
      onClick=(handler handleClick)
      onMouseEnter=(handler handleHover)
      onMouseLeave=(handler handleHover)
    />
  };
};

include ReactRe.CreateComponent Problem3;

let createElement = wrapProps ();
