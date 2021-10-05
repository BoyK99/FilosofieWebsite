@import url('https://fonts.googleapis.com/css2?family=Roboto+Slab:wght@200;600&display=swap');
html {
    scroll-behavior: smooth;
}

* {
    box-sizing: border-box;
}

body {
    margin: 0;
    padding: 0;
    color: rgb(0, 0, 0);
    font-family: 'Roboto Slab', serif;
    background-color: rgb(0, 176, 176);
    width: 100vw;
    overflow-x: hidden;
    scroll-behavior: smooth;
}

main {
    max-width: 800px;
    margin: 0 auto;
}

nav {
    display: flex;
    color: white;
    font-weight: bolder;
    font-size: 1.2em;
    width: 100vw;
    position: absolute;
    /*to prevent jumping after setting to fixed */
    z-index: 10;
}

nav a {
    color: white;
    display: block;
    text-decoration: none;
}

nav div {
    padding: 10px 0;
    flex-grow: 1;
    text-align: center;
    background-color: rgb(0, 176, 176)
    cursor: pointer;
    transition: background-color 0.4s ease-out;
}

nav div:hover, nav div.selected {
    background-color: white;
    color: rgb(55, 121, 220);
}

nav.sticky {
    position: sticky;
    position: -webkit-sticky;
    top: 0;
}

div, section {
    box-sizing: border-box;
}

figcaption {
    font-style: italic;
    opacity: 0.8;
    font-size: 0.8em;
    line-height: 1.2em;
}

h1 {
  margin-top: 0px;
  padding-top: 5vh;
  font-size: 2.8em;
  text-align: center;
  text-align: center;
}

h2 {
    font-size: 3.3em;
    margin: 0;
    color: white;
}

p {
    margin-bottom: 70px;
}

section.white a, section.white a:visited {
    color: rgb(55, 121, 220);
    font-weight: bold;
}

footer a, footer a:visited {
    color: white;
}

section {
    margin: 20px;
}

section.white {
    padding: 18px 54px;
    font-size: 1.3em;
    line-height: 1.8em;
    margin-bottom: 100px;
    padding-bottom: 80px;
    background-color: white;
    overflow: hidden;
    overflow-wrap: break-word;
}

section.blue {
    margin-top: 10px;
    /* needed for scrollintoview */
    padding-top: 60px;
    background-color: transparent;
}

img {
    width: 100%;
}

footer {
    text-align: center;
    color: white;
}

@media screen and (max-width: 550px) {
    nav.sticky {
        position: relative;
    }
    section h2 {
        font-size: 2em;
    }
    section.blue {
        margin-top: 100px;
    }
    nav {
        display: block;
        position: initial;
    }
}

header {
  height: 20vh;
/*   background-image: url(https://cdn.glitch.me/025cd307-3ec7-4646-9fa3-c10b257ac453%2Fgoogle_logo.png?v=1633455005275); */
  background-size: auto;
  background-repeat: no-repeat;
  background-position: center;
  background-color: rgb(255, 255, 255);
  font-size: 1.6em;
}

span.blue {
  color: rgb(66, 133, 244);
}

span.red {
  color: rgb(219, 68, 55);
}

span.yellow {
  color: rgb(244, 180, 0);
}

span.green {
  color: rgb(15, 157, 88);
}
