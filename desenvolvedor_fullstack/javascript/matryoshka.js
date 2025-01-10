const fs = require("fs");
const input = fs.readFileSync(0, "utf8");

const inputValues = input.split("\n");

const N = parseInt(inputValues[0]);

const orderLefted = inputValues[1].split(" ").map((n) => parseInt(n));

const ordenedArray = orderLefted.slice().sort((a, b) => a - b);

const responseArray = [];

let count = 0;
for (let i = 0; i < N; i++) {
  if (orderLefted[i] !== ordenedArray[i]) {
    count++;

    responseArray.push(ordenedArray[i]);
  }
}

console.log(count);

let aux = 0;
for (const value of responseArray) {
  process.stdout.write(`${value} `);

  aux++;
}
console.log();
