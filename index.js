
//string method -->toString()
let x;
x = 555;
// console.log(x);
// console.log(x.toString());

x = 10 + 5;
// "15"
// console.log(x.toString());

x = 9.1;
// console.log(x.toFixed(0));
// x.toFixed(2);
// x.toFixed(4);
// x.toFixed(6);

x = 9.46;
// console.log(x.toPrecision());
// console.log(x.toPrecision(2));
// x.toPrecision(2);
// x.toPrecision(4);
// x.toPrecision(6);

x = () => { };
// console.log(x.valueOf());

// console.log(Number('44 77'));

// console.log(parseInt("-10"));
// console.log(parseInt(parseInt("-10.33")));
// console.log(parseInt(parseInt("10")));
// console.log(parseInt(parseInt("10 20 30")));
// console.log(parseInt(parseInt("10 years")));
// console.log(parseInt(parseInt("years 10")));
// console.log(parseInt(parseInt("+10GGG")));
// console.log(parseInt(parseInt("+HcH10GGG")));

// console.log(parseFloat("10"));
// console.log(parseFloat("10.44"));
// console.log(parseFloat("10 20 30"));
// console.log(parseFloat("10 years"));
// console.log(parseFloat("years 10"));
// console.log(parseFloat(" 10 years"));
// console.log(parseFloat("   -10 g 10"));


// let fruits = ["Banana", "Orange", "Apple", "Mango"];
// fruits.join(" 10 ");
// console.log(fruits.join(" Fruits "));
// console.log(fruits);




let a = 5;
// const result = a++;
// const result = ++a;
// const result = a + a++ + a; //5 + 5 + 6 =16
// const result = a + ++a + a; //5+6+6=17
// const result = a + ++a + a++; //5+ 6+6=17
// const result= a+ ++a + ++a +a; //5+6+7+7=25
const result = ++a + a++ + a + ++a; //6+6+7+8=27
console.log("a is:", a, result);

