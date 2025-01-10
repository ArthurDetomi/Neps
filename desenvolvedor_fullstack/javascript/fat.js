// A variável input contém a entrada descrita no exercício
const fs = require("fs");
const input = fs.readFileSync(0, "utf8");

const fat = (N, result = 1) => {
  if (N == 1 || N == 0) {
    return result;
  }

  return fat(N - 1, result * N);
};

// Seu código vai aqui
const N = parseInt(input);

console.log(fat(N));
