import React, { useState } from "react";

function FuncButton(props) {
    const [type, setType] = useState("Click");

    return (
        <div>
        <button onClick={() => setType("functionComponent")}>{type}</button>
        <p>{type}</p>
        </div>
    );
}
  
export default FuncButton;