// Section Data Types in Javascript

// var myName = "Amit Kumar";
// console.log(myName);

// var myAge =23;
// // type of operator
// console.log(typeof(myName));
// console.log(myAge);
// console.log(typeof(myAge)) ;

// var iAm = true;
// console.log(iAm);
// console.log(typeof(iAm));

// var myPhoneNumber = 987654321;
// var myName = "Amit Kumar";
// console.log( isNaN(myPhoneNumber));
// console.log(isNaN(myName));
 
// NaN===NaN;
// Number.NaN=== NaN;
// isNaN(NaN);
// isNaN(Number.NaN);
// Number.isNaN(NaN);
// console.log(NaN===NaN);

/**** Sedtion 5 expressions and  operator*/
  
// var a=5;
// var b=5;
// console.log("is both the a nad b equal or not" + a===b);

//  var num =5;
//  var newNum= num++;
//  console.log(num);
//  console.log(newNum);


// var a=30;
// var b=10;
// console.log(a==b);
// console.log(a!=b);
// console.log(a>b);
// console.log(a<b);

// var a = 30;
// var b = -20;
// console.log(a>b && b>0 && b<0);
// console.log(a>b || b > a || b <a);

// var a = 30;
// var b = 20;
// console.log(!(a>0) || (b<0));

// console.log("hello world");

// console.log( "hello " + "Amit");
// console.log("Hello " + " World");

// console.log(3**4);


// var a = 30;
// var b= "Hello Amit ";
// console.log( a + b);

// var a = 20;
// var b = 30;
// var c= a;
//     a=b;
//     b=c;
// console.log("a is :" + a ,"b is :" + b );

//     a=a+b;
//     b=a-b;
//     a= a-b;
//  console.log( a);
//  console.log(b);

// var num1 = 5;
// var num2 = '5';
// console.log(typeof(num1));
// console.log(typeof(num2));
// console.log(num1==num2);
// console.log(num1===num2);

//  var tomr = 'rain';
//   if(tomr=='rain')
//   {
//     console.log("take a raincoat");
//   }
//   else
//     console.log('no need to take a raincode');

// var year = 2020;
// if(year % 4 === 0)
// {
//     if(year % 100 ===0){
//         if(year % 400 === 0)
//         {
//             console.log("The year " + year + " is a leap year");
//         }else{
//             console.log("The year " + year + " is not a leap year");
//         }
//     }else{
//         console.log("The year "+ year + "is a leap year")
//     }
// } else{
//     console.log("The year" + " is not a leap year");
// }


// what is truthy and falsy values in javascript?
// we have total 5 falsy values in javascript
// 0, " ",undefined,null, NaN, false.

// if(score = 10)
// {
//     console.log("OMG, we loss the game");

// }else{
//     console.log("Yay, We won the the game");
// }


// var age= 7;
// console.log((age>=18)?"You can vote" : "use can not vote");

// var area = "rectangle";
// var PI = 3.142,  l=5, b=4, r=3;

// if(area=="circle")
// {
//     console.log("the area of the circle is : " + PI*r**2);
// }else if(area=="triangle"){
//     console.log("the area of the triangle is :" + (l*b)/2);
// }else if(area =="rectangle"){
//     console.log("the area of the rectangle is : "+ (l*b));
// }else
// {
//     console.log("please enter valid value ");
// }

// var area = "circ";
// var PI = 3.142, l=5, b=4, r = 3;
// switch(area){
//     case 'circle':
//         console.log("the area of the circle is :" + PI*r**2);
//         break;
//     case 'rectangle':
//         console.log("the area of rectange is :" + (l*b));
//         break;
//     case 'triangle':
//         console.log("the area of the triangle is" + (l*b)/2);
//         break
//     default:
//         console.log("please enter valid value ")
// }

// var num;
// for(num=1; num<=10;num++)
// {
//     var tableof = 10;
//     console.log(tableof + "*" + num +"=" + tableof*num);
// }

// function sum()
// {
//     var a =10, b = 20;
//     var total = a+b;
//     console.log(total);
// }
// sum();

// function parameter vs function arguments
// function parameters are the names listed in the funtion's defination.
// function arguments are the real values passed to the function.

// function sum(a,b)
// {
//     var total=a+b;
//     console.log(total);
// }
// sum();
// sum(10,20);
// sum(50,30);


// Function expressions
// "Function expressions simply means 
// create a function and put it into the variable"

// function sum(a,b){
//     return total = a+b;
// }
//  var funExp= sum(5,25);
//  console.log('the sum of two no is '+funExp);

// anonymous function expressions

// var funExp = function(a,b)
// {
//     return total= a+b;
// }
// var sum = funExp(10,39);
// console.log('the sum of two no is '+ sum);


// LET VS CONST VS Var

// VAR= function scope
// let == block scope

// function fun()
// {
//     let a=10;
//     console.log(a);
//     console.log(b);
//     if(true)
//     {
//         let b= 20;
//         console.log(a);
//         console.log(b);
//     }
// }
// fun();
// function fun1()
// {
//     let a=10;
    
    
//     console.log(a);
//     if(true)
//     {
//         const a=20;
//         console.log(a);

//     }

// }
// fun1();

// Template literals (Tamplate strings)

// JavaScript program to print table or given Number(8)?

// for(let num=1;num<=10;num++)
// {
//     let tableof = 8;
//     console.log(tableof + "*"+ "=" +tableof*num);
//     console.log(`${tableof}*${num}= ${tableof*num}`);
// }

// Default Parameters
//  function mult(a,b=1){
//     return (a*b);
//  }
//  console.log(mult(3,4));
//  console.log(mult(5));

// fat arrow function
// const sum = () =>{
//     let a=5;b=6;
//     let sum= a+b;
//     return  `the sum of two number is ${sum}`;
// }
// console.log(sum());


// var myFriends=["Amit","Sumt", "Rahul","Roshan"];
//  console.log(myFriends[2]);
// console.log(myFriends[myFriends.length-2])

// if we want to check the length of elements of an Array

// console.log(myFriends.length)

// for loop
// var a=["Amit ","Kumar", "singh", ]
// for( let i=0;i<a.length;i++)
// {
//     console.log(a[i]);
// }

//  for in loop
//  var  a=["hello","MOhan", "what ", "are", "you"];
// for(let elements in a){

//     console.log(elements);
// }


// for of loop
// var a=["hello", "tum", "log", "kese","ho"];
// for(let elements of a)
// {
//     console.log(elements);
// }

// Array.prototype.forEach()
// calls a function for each elements in the Array.
// var myFriends = ['vinod', 'mohan','shayam', 'raghu'];
// myFriends.forEach(function(element, index, array){
//     console.log(element + " index :" + index );
// });

// above program with fat arrow function

// var Names =['amit', 'sumit','rohan', 'yawar'];
// Names.forEach((element, index, array) =>{
//     console.log(element+ "index :" + index);
// });

// Array.prototype.push()
// The push() method adds one or more Elements to the 
// end of an array and returns the new length of the array.

// const animals =[ 'pigs','goats','sheep'];
// const count = animals.push('cow');
// console.log(animals);
// console.log(count);

// array unshift :-

// const animals =[ 'cow','horse','cats'];
// const count = animals.unshift('chicken');
// console.log(animals);

// Array pop ():-
// const plants = [ 'broccoli', 'cauliflower', 'kale', 'tamato','patato'];
// console.log(plants);
// console.log(plants.pop());
// console.log(plants);

// Array shift():-
// const names= ['ami', ' sumit', ' saurbh', 'sonu'];
// console.log(names);
// console.log(names.shift());
// console.log(names);


function fun(fname,lastname,age,Gender){

    this.firstName=fname,
    this.lastName= lastname,
    this.age = age,
    this.Gender= Gender;
    this.draw= function (){
        console.log('hello');
    }
};
const Person = new fun('Amit','Kumar',23,'Male');
// console.log(Person);

Person.hello= 'hi';
console.log(Person);
delete Person.hello;
console.log(Person);