var str = prompt();

var bomb = str.match(/bomb/gi) ? "Duck!!!" : "There is no bomb, relax.";

console.log(bomb);