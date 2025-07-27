function main() {
  console.log("Init JS file");

  const obj = {
    name: "Peter",
    age: 22,
    profession: "Programmer - software applications",
  };
}
main();

(function main() {
  console.log("Message from main!");
})();
