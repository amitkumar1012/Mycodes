// document.addEventListener('click',function(){
//     console.log('I have clicked on document');
// })

// function eventFunction(){
//     console.log('I have clicked on the document');
// }
// document.addEventListener('click',eventFunction);



// function print(){
//     console.log('hello');
// };
// //add listener
// document.addEventListener('click',print);
// //remove listener
// document.removeEventListener('click',print);

//event object
// const content = document.querySelector('#wrapper');
// content.addEventListener('click',function(event){
//     console.log(event);
// })

//preventDfefault 
let links = document.querySelectorAll('a');
let thirdLink = links[2];

thirdLink.addEventListener('click',function(event){
    event.preventDefault();
    console.log('maza aya ');
})