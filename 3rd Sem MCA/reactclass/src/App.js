import React from 'react';
import './App.css';
import reverse from './reverse';

class App extends React.Component {
  state = {
    items: ["a", "b", "c"]
  };
  onReverseClick = reverse.bind(this);
  render() {
    const{state: {items}, onReverseClick} = this;
    return (
      <selection>
        <button onClick={onReverseClick}>Reverse</button>
        <ul>
          {items.map((v,i)=>(<li key={i}>{v}</li>))}
        </ul>
      </selection>
    );
  }
}
export default App;
