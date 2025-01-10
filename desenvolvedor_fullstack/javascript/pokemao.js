const fs = require("fs");
const input = fs.readFileSync(0, "utf8");

const inputValues = input.split("\n").map((n) => parseInt(n));

let N = inputValues[0];

let pokemaos = inputValues.slice(1).sort();

let count = 0;
for (const coust of pokemaos) {
  N -= coust;

  if (N >= 0) {
    count++;
  }
}

console.log(count);
