import React from 'react';

class Button extends React.Component{
    constructor (props){
        super(props);
        this.props = ({ name:"btn" })
        this.state = {clicked:false}
    }
    onClick(e){
        console.log("Button clicked");
    }
    render(){
        return <input type="button" value={this.props.children}/>;
    }
}

export default Button;
