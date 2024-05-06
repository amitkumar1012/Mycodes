// console.log(10 + "20"); //output- 1020
// console.log( 9 - "5"); //this is bug
// console.log("Java" + "Script");
// console.log(" " + " ");
// console.log(" "+ 0);
// console.log("vinod" - "thapa"); //Nan
// console.log(true+true);
// console.log(true+false);
// console.log(false+false);
// console.log(false - true);

// Interview   Question 1
//Difference between null vs undefined;
// var iAmuseless = null;
// console.log(iAmuseless);
// console.log(typeof(iAmuseless)); // this is also bug
// var iAmStandBy;
// console.log(iAmStandBy); 
// console.log(typeof(iAmStandBy)); //undefined

    // var a=10;
    // console.log(a);
    // console.log(typeof(a));

    // var a;
    // console.log(a);
    // console.log(typeof(a));

    // 8. challenge  Time

    // Array. prototype.splice()
    // Adds and /or removes elements from an Array.
    // 1. Add Dec at the end of an array?
    // 2. what is the return value of splice method?
    // 3. update march to March (update)?
    // 4. Delete June from an array?

    // const months = ['Jan',"march", 'April', "june", "July"];
    // //sol1:
    // const newMonth = months.splice(5 , 0 , "Dec");
    // console.log(months);

    // sol2:
    // console.log(newMonth);

    // sol3:

    // const months = ['Jan',"march", 'April', "june", "July"];

    // const indexOfMonth = months.indexOf('march');
    // if(indexOfMonth != -1){
    //     const updateMonth= months.splice(indexOfMonth,1,'March');
    //     console.log(months);
    // }
    // else{
    //     console.log('No such data found');
    // }

    // sol4:
    const months = ['Jan','Feb','March','April'];
    const indexOfMonth = months.indexOf('March');
    if(indexOfMonth != -1){
        const updateMonth = months.splice(indexOfMonth,1);
        console.log(months);
        console.log(updateMonth);
    }else{
        console.log('not such data found');
    }
   
    
    
        
