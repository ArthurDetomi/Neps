class Book {
  constructor(name, author, year) {
    this.name = name;
    this.author = author;
    this.year = year;
  }

  age() {
    var date = new Date();
    return date.getFullYear() - this.year;
  }
}

let bookOne = new Book("O universo numa casca de noz", "Stephen Hawking", 2001);

console.log(bookOne);

console.log(bookOne.age());

let description = `O livro ${bookOne.name} foi escrito por ${bookOne.author} e lançado em ${bookOne.year}.`;

console.log(description);
