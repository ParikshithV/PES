import React from 'react';
import ClassButton from './components/classButton';
import FuncButton from './components/funcButton';

class App extends React.Component {
    render(){
    return (
      <div className="App">
        <ClassButton/>
        <FuncButton/>
      </div>
    );
  }
}

// ReactDOM.render(
//   <App/>,
//   document.getElementById('root')
// );

export default App;