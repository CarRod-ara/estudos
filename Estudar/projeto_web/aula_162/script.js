//document.querySelector("h1").style.color = "red";

//console.log(el.style.backgroundColor)
//let el = document.querySelector("p")

let el = document.querySelector("p")
const estilos = window.getComputedStyle(el)
console.log(estilos.getPropertyValue('font-size'))