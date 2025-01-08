// A variável input contém a entrada descrita no exercício
const fs = require("fs");
const input = fs.readFileSync(0, "utf8");

const input_arr = input.split("\n");

const N = parseInt(input_arr[0]);

const arr = input_arr[1].split(" ").map((N) => parseInt(N));

let count = 0;

for (let i = 0; i <= N - 3; i++) {
  if (arr[i] == 1 && arr[i + 1] == 0 && arr[i + 2] == 0) {
    count++;
  }
}

console.log(count);
