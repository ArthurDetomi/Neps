// A variável input contém a entrada descrita no exercício
const fs = require("fs");
const input = fs.readFileSync(0, "utf8");

const result_fib = [];
result_fib[0] = 1;
result_fib[1] = 1;

for (let i = 2; i <= 30; i++) {
  result_fib[i] = result_fib[i - 1] + result_fib[i - 2];
}

const N = parseInt(input);

console.log(result_fib[N]);
