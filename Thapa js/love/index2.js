//lovebbar
// console.log('hello ji');
// //object create
// let rectange ={
//     length: 1,
//     breadth: 2,

//     draw: function()
//     {
//         console.log('draw');
//     }

// };

//factory function 

// function createRectangle(len, bre){
//     return rectangle = {
//         length :len,
//         breadth : bre,
        
//         draw : function()
//         {
//             console.log('draw');
//         }

//     };
  
// }
// let object1 = createRectangle(4,5);
// let object2 = createRectangle(10,20);
// let object3= createRectangle(9,3);

//constrcutor funtion -> Pascal Notation-> first letter of every word is Capita -> NumberOfStudents
// //constrcutor funtion -> prop/methods -> intalise/Define
// function Rectange(len, bre){
//     this.length =len;
//     this.breadth = bre;
//     this.draw = function(){
//         console.log('hello');
//     }
// }
// //object creation using constrcutor function
// let rectangleObject = new Rectange(9,3);

// rectangleObject.color ="yellow";
// console.log(rectangleObject);
// delete rectangleObject.color;
// console.log(rectangleObject);

// let a={
//     Name:'Amit',
//     age: 23,
//     hobbi:['cricket','guitar','listening']
// }
// console.log(a.hobbi);


//Primitive type  vs reference type example
//  let a=10;
//  let b=a;
//  a++;
//  console.log(a);
//  console.log(b);

//reference type
//let a={
//     value:10
// };
// let b=a;
// a.value++;
// console.log(a.value);
// console.log(b.value);

// let a=10;
// function inc(a){
//      a++;
// }
// inc(a);
// console.log(a);

// let a={  
//     value:10,
// };
// function inc(a){
//     a.value++;
// }
// inc(a);
// console.log(a.value);


// let rectangle={
//     length:2,
//     breadth:4
// };
// //for in loop
// for(let key in rectangle){
//     //keys are reflected through key variable
//     //value are reflected through rectangle[key]
//     console.log(key,rectangle[key]);
// }

//for-of loop
// for(let key of Object.entries(rectangle)){
//     console.log(key);
// }
// if('color' in rectangle){
//     console.log('Present');
// }
// else{
//     console.log('absent');
// }

//object cloning
// let src={
//     a:10,
//     b:20,
//     c:30
// };
// let desc ={};
// for(let key in src){
//     desc[key]= src[key];
// }
// console.log(desc);

//object cloning 02
// let src = {
//     a:10,
//     b:20,
//     c:40
// };
// let src2 = {value:25};
// let dest = Object.assign({},src,src2);
// console.log(dest);

//Object cloning #3
// let src ={
//     a:10,
//     b:20,
//     c:30
// };
// let dest = {...src};
// console.log(dest);
// src.a++;
// console.log(dest);

// let lastName= 'amit';


// let firstName = new String('hello');
// console.log(firstName);
// console.log(typeof(firstName));
// console.log(typeof(last));


// let lastName = 'love';
// console.log(typeof(lastName));
// let firstName = new String('hello');
// console.log(typeof(firstName));

// let message = 'This is my first message';
// let words = message.split(' ');
// console.log(words);


//string litral
// let lastname ='kumar';
// let message = `hello ji ${lastname}
// kya
// hal hai. 
// kese hai`;
// console.log(message);

//Date and Time
// let date = new Date();
// console.log(date);
// let date2 = new Date('June 20 1998 07:12');
// console.log(date2);
// let date3 = new Date(1998, 11, 20, 7);
// console.log(date3);
// date3.setFullYear(1300);
// console.log(date3);


// //Array
// let numbers = [1,2,3,5,7,7];
// //inserst in last using push()
// console.log(numbers);
// numbers.push(34);
// console.log(numbers);
// //insert in begin using unshift()
// numbers.unshift(10);
// console.log(numbers);
// //insert in middle using splice(inde,delet, value)
// numbers.splice(2,0,'A','b','c');
// console.log(numbers);

//searching
// let numbers2= [ 2,4,6,8,4,6];
// console.log(numbers2);
// console.log(numbers2.indexOf(6));
// //we want ot check if a number exist in an array
// //first method
// // if(numbers2.indexOf(9) != -1)
// // {
// //     console.log('present');
// // }
// console.log(numbers2.includes(6));

//searching on object
// let courses = [
//     {no:1, naam:'hi'},
//     {no:2, naam:'love'}
// ];
// console.log(courses);
// console.log(typeof(courses));
//console.log(courses.includes( {no:1, naam:'love'}));// include methode not apply on object  so this is error

//this is correct ways to find element in object array
// let course = courses.find(function(course){
//     return course.naam =='love';
// })
// console.log(course);

// Removing Element

// let numbers = [ 2,3,2,5,7,5,8];
// // numbers.pop();
// // numbers.shift();
// numbers.splice(3,1);
// console.log(numbers);

//second example
// let num = [ 2,5,7,9,3];
// num.pop();
// num.shift();
// num.splice(2,1);
// console.log(num);


// empty an array
// let numbers = [1,2,3,4,5];
// numbers2 = numbers;
// numbers.length = 0;
// console.log(numbers);
// console.log(numbers2);
//empty array seconde method
// numbers.splice(0,numbers.length);
//emppty array third method
// while(numbers.length >0){
//     numbers.pop();
// }
// console.log(numbers);
// console.log(numbers2);



//Combing & slicing Arrays
// let first = [1,2,3,4];
// let second =[ 5,6,7,8];
// let combined = first.concat(second);
// let sliced = combined.slice(0,6);
// // console.log(combined);
// console.log(sliced);


//for of loop
// let arr = [ 10,29,39,47,64];
// for( let value of arr){
//     console.log(value);
// }

// //forEach loop
// arr.forEach(function(number){
//     console.log(number)
// })
//arrow function of above program
// arr.forEach(number =>console.log(number));

// JOing Array
// let numbers = [30,40,59,28,48];
// const joined = numbers.join(',');
// console.log(joined);

// let message = 'This is my first message';
// let parts = message.split(' ');
// console.log(parts);

// let joined = parts.join('_');
// console.log(joined);

// sort array
// let numbers = [1,5,7,4,6,7];
// numbers.sort();
// console.log(numbers);
// numbers.reverse();
// console.log(numbers);

//filtering Arrays
// let numbers= [ 3,4,-4,-8];
// let filtered = numbers.filter(function(value){
//     return value <=0;
// });
//arrow function
// let filtered = numbers.filter(value =>value >=0);
// console.log(filtered);


//Mapping Arrays
// let numbers = [7,8,9,10];
// let items = numbers.map(value=>'Student_no' + value);
// console.log(items);

//Mapping with Objects
// let numbers= [3,5,-8,-4];
// let filtered = numbers.filter(value =>value >=0);
// // let maped= filtered.map(function(num){
// //     return {value:num};
// // });
// //Arrow funtion
// let item = filtered.map(num => ({value:num}));
// console.log(item);

//Maping chaining
// let numbers = [ 4,5 -5,-3];
// let item = numbers.filter(value =>value >=0).map(num => ({value:num}));
// console.log(item);


// Function declaration
// function run(){
//     console.log('running');
// };
// //funtion call or invoke
// run();

//Named function assignment
// let stand= function walk(){
//     console.log('walking');
// }
// stand();
// let jump= stand;
// jump();

//Anonymous funtion assignment in this remove funtion name 
// let stand2 = function(){
//     console.log('walking')
// };
// stand2();

// let x=1;
// x='a';
// console.log(x);

// function sum(a,b){
//     console.log(arguments);
//     return a+b;
// }
//console.log(sum(3,4));
//console.log(sum(2));
//console.log(sum());
// console.log(sum(3,4,3,5,3,5));

// function sum(){
//     let total=0;
//     for(let value of arguments)
//         total = total+value;
//     return total;
// }
// console.log(sum(3,4,7,5,4,5));

//rest oprator ( ...name)
// function sum( ...args){
//     console.log(args);
// }
// sum(4,6,3,6,3,4);



//Default Parameters
// function interest(p,r=5,y=5){
//     return p*r*y/100;
// }
// console.log(interest(1000,15));

//getter setter
// let person = {
//     fName : 'Amit',
//     lName :'Kumar',
//     get fullName(){
//         return `${person.fName} ${person.lName}`
//     },
//     set fullName(value){
//         let parts = value.split(' ');
//         this.fName =parts[0];
//         this.lName = parts[1];
//     }
// };
// // console.log(person.fullName);
// person.fullName ="hello world";
// console.log(person.fullName);
// console.log(person.fullName);


//try and catch
// let person =  {
//     fName : 'love',
//     lName : 'kumar',
//     get fullName(){
//         return `${person.fName} ${person.lName}` 
//     },
//     set fullName(value){
//         if(typeof value !== string){
//             throw new Error('You not entered string');
//         }
//         let parts = value.split(' ')
//         this.fName = parts[0];
//         this.lName = parts[1];
//     }

// };

// try{
//     person.fullName = hello;
// }
// catch(e){
//     console.log('hello',e.message);
// }
// // console.log(person.fullName);

//scope
// for(var i=0;i<10;i++){
//     console.log(i);
// }
// console.log(i);


//Reducing an array
// let toatal = 0;
// arr = [3,4,5,3,5];
// for(let value of arr){
//     toatal += value;    
// }
// console.log(toatal);
// let arr=[3,6,2];
// let totalSum = arr.reduce((accumulator,currentValue) => accumulator + currentValue,0);
// console.log("Total sum:");
// console.log(totalSum);
