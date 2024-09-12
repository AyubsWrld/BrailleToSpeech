import React from 'react';
import { BrowserRouter as Router, Route, Link, Routes } from 'react-router-dom';
import Home from './components/Home';
import About from './components/About';
import Donation from './components/Donation';
import './App.css';

function App() {
	  return (
		      <Router>
		        <div className="App">
		          <nav className="navbar">
		            <ul>
		              <li><Link to="/">Home</Link></li>
		              <li><Link to="/about">About Us</Link></li>
		              <li><Link to="/donation">Donation</Link></li>
		            </ul>
		          </nav>

		          <Routes>
		            <Route path="/" element={<Home />} />
		            <Route path="/about" element={<About />} />
		            <Route path="/donation" element={<Donation />} />
		          </Routes>
		        </div>
		      </Router>
		    );
}

export default App;
