const fs = require("fs");

let reading = fs.readFileSync(0, "utf-8");

let lines = reading.split(" ").map((n) => parseInt(n));

console.log(Math.max(...lines));
