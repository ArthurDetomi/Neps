// Criando o array de números
let numbers = [26, 12, 2003, 4, 5, 19, 234, 1765, 2873];

// Criando array de nomes
let names = [
  "Antônio",
  "Liélia",
  "John",
  "Pedro",
  "Amanda",
  "Anthony",
  "Thiago",
  "Lara",
];

// Criando array de objetos carros
let cars = [
  {
    brand: "BMW",
    year: 2017,
  },
  {
    brand: "Ferrari",
    year: 2019,
  },
  {
    brand: "Volkswagen",
    year: 2015,
  },
];

// Ordenando os números em ordem decrescente
numbers.sort((a, b) => b - a);
console.log(numbers); // Imprimindo o resultado
// Impressão: [2873, 2003, 1765, 234, 26, 19, 12, 5, 4]

// Ordenando os nomes em ordem crescente
names.sort((a, b) => {
  if (a > b) return 1;
  if (a < b) return -1;
  return 0;
});
console.log(names); // Imprimindo o resultado
// Impressão: ['Amanda', 'Anthony', 'Antônio', 'John', 'Lara', 'Liélia', 'Pedro', 'Thiago']

// Ordenando os nomes em ordem decrescente
names.sort((a, b) => {
  if (a > b) return -1;
  if (a < b) return 1;
  return 0;
});
console.log(names); // Imprimindo o resultado
// Impressão: ['Thiago', 'Pedro', 'Liélia', 'Lara', 'John', 'Antônio', 'Anthony', 'Amanda']

// Ordenando os carros em ordem decrescente em relação ao ano
cars.sort((a, b) => b.year - a.year);
console.log(cars); // Imprimindo o resultado
/* 
[
  { brand: 'Ferrari', year: 2019 },
  { brand: 'BMW', year: 2017 },
  { brand: 'Volkswagen', year: 2015 }
]
*/
