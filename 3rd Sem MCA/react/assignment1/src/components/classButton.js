import React from 'react'

class ClassButton extends React.Component {
    constructor(props) {
      super(props);
      this.state = {
        type: 'Click'
      }
      this.handleClick = this.handleClick.bind(this);
    }
  
    handleClick() {
      this.setState({ type : 'classComponent' })
    }
  
    render() {
      return (
        <div>
        <button onClick={this.handleClick}>
          {this.state.type}
        </button>
        <p>{this.state.type}</p>
        </div>
      );
    }
}
  
export default ClassButton;