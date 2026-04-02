// let x =[1,2,3,4,5]
// // console.log(x)
 

// const x = "Hey, How are you?" 
// let y = 'Pokiri'

// // console.log(x.concat(y));
// // console.log(x);
// // console.log(y);


// for(i=1; i<50; i++)
// (i% 2===1)? console.log(i): null;
 




const readline = require('readline');

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

rl.question("Enter the value of x: ", (xInput) => {
  const x = parseInt(xInput); // Convert input to integer

  rl.question("Enter the value of y: ", (yInput) => {
    const y = parseInt(yInput); // Convert input to integer

    console.log("Multiplication of both the values of X & Y: " + (x * y));
    console.log("Addition of both the values of X & Y: " + (x + y));

    rl.close();
  });
});
