function myFunction(myArray) {
    let result = 0;
    // for (let i = 0; i < myArray.length; i++) {
    // result+=myArray[i];
    // }
    for (var element of myArray) {
        result += element;
    }
    return result;
}
var anInput = prompt("Enter your array:");
anInput = eval(anInput);
console.log("Your Output: " + myFunction(anInput));
