// A variável input contém a entrada descrita no exercício
const fs = require("fs");
const input = fs.readFileSync(0, "utf8");

// Seu código vai aqui
let X = parseInt(input.split());

const divisores = [];

for (let i = 1; i <= X; i++) {
  if (X % i == 0) {
    divisores.push(i);
  }
}

for (let i = 0; i < divisores.length; i++) {
  process.stdout.write(divisores[i] + "");

  if (i != divisores.length - 1) {
    process.stdout.write(" ");
  }
}
console.log();
