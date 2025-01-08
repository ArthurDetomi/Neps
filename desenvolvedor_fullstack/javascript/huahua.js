// A variável input contém a entrada descrita no exercício
const fs = require("fs");
const input = fs.readFileSync(0, "utf8");

const N = input.length;

let string1 = "",
  string2 = "";

for (let i = 0, j = N - 1; i < N; i++, j--) {
  if (["a", "e", "i", "o", "u"].includes(input[i])) {
    string1 += input[i];
  }

  if (["a", "e", "i", "o", "u"].includes(input[j])) {
    string2 += input[j];
  }
}

console.log(string1 == string2 ? "S" : "N");
