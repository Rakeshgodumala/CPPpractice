let s = "Raju is good boy";

let word = "";
let result = "";

for(let i = 0; i <= s.length; i++) {

    if(i === s.length || s[i] === ' ') {

        result += word.split('').reverse().join('') + " ";

        word = "";
    }
    else {

        word += s[i];
    }
}

console.log(result.trim());