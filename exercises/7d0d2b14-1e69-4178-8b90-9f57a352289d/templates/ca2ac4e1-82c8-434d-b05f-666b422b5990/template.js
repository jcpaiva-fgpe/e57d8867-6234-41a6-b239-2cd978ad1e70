let data = prompt().split(' ');

const months = { 1: "A", 2: "B", 3: "C", 4: "D", 5: "E", 6: "H",
7: "L", 8: "M", 9: "P", 10: "R", 11: "S", 12: "T" }

let person = {
  "name" : data[0],
  "surname": data[1],
  "gender": data[2],
  "dob": data[3]
}

{{code}}

console.log(fiscalCode(person));