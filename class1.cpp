//#include<iostream>
// int main()
//{
   // std::cout << "Hey Sephali" <<std::endl;
    //std::cout << "hey"; 

    // return 0;

//}

/*#include<iostream>
using namespace std: // to reduce the usage of std
 int main() {
    intx;
    cin >> x >> y; //input into this variable 
    cout << "value of x:" <<x << "and y:" <<y;
    return 0;
 }
 } */

// #include<bits/stdc++.h> //includes all the library in ++
     
     
  // float and double 
  /* float x= 4.5;
   float y = 5.6 ;
   cout << "value of y:" << y;
   retin 0;
     //string and getline
     string s1, s2;
     cin>> s1 >> s2;
     cout << s1 <<"" <<s2;
     return 0;
     // getline (cin,str); takes the entire line 
     // cout<<str;

} */
 //int main(){
   // int, long. long long , float, double}


   // WRITE A PROGRAM THAT TAKES AN INPUT OF AGE 
   //AND PRINT IF YOU ARE ADULT OR NOT

 /*  #include<bits/stdc++.h>
   using namespace std;
   int main(){
      int age;
      cin>> age;
      if (age>=18){
         cout<< "you are an adult";
      }
      else{
         cout<< "You are not an adult";
      }
      return 0;
   } */

   /*
   A SCHOOL HAS FOLLOWING RULES FOR GRADING SYSTEM
   A. BELOW 25-F
   B. 25 TO 44 - E
   C. 45 TO 49-D
   D. 50 TO 59-C
   E. 60 TO 79-B
   F. 80 TO 100-A
   ASK USER TO ENTER MARKS AND PRINT THE CORRESPONDING GRADE. 
   */
 /* #include<bits/stdc++.h>
int main(){
    int marks;
    cin >> marks;
    if (marks <25){
      cout<<"F";
    }
    else if(25=<marks&& marks=<44){
      cout<< "E";
   
    }
    else if( 45=< marks && marks<=49){
      cout<<"D";

    }
    else if (50<=marks && marks<=59){
      cout<< "C";
    }
    else if (60<= marks && marks<=79){
      cout<< "B";
   
    }
    else if (80<=marks && marks <=100){
      cout<< "A";
    }
    return 0;
} */ 

/* TAKE THE AGE FROM THE USER AND THEN DECIDE ACCORDINGLY 
1. IF AGE<18,PRINT -> NOT ELIGIBLE FOR JOB
2. IF AGE >= 18
PRINT-> "ELIGIBLE FOE JOB
3. IF AGE >= 55 AND AGE <= 57,
PRINT-> ELIGIBLE FOE JOB BUT RETIREMENT SOON
4. IF AGE > 57
PRINT -> RETIREMENT TIME"*/

/* Take the day no and print the corresponding day 
for 1 print Monday,
for 2 print Tuesday and soon for 7 print Sunday. 

#include<bits/stdc++.h>
using namespace std;
int main(){
  int day;
  cin >> day;
  switch(day){
    case 1:
    cout << "Monday";
    break;
    case 2:
    cout << "Tuesday";
    break;
    case 3:
    cout << "Wednesday";
    break;
    case 4:
    cout << "Thursday";
    break;
    case 5:
    cout << "Friday";
    break;
    case 6:
    cout << "Saturday";
    break;
    case 7:
    cout << "Sunday";
    break;
    defualt:
    cout << "Invalid";
    
  }
  cout << "Check";
  return 0;
}
*/

//**************** ARAYS (similar type of data) && 

/*int main() {
  int arr[5];
  cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];

  arr[3] += 10;
  cout << arr[3];
  return 0; // 10
} // the entire thing is stored in memory location 

// 2 d Array
 int main(){
  int arr[2][3]
  arr[1][3] = 23 ;
  cout << arr[1][2];
  return 0;
 }

 // string
  int main(){
    string s = "shifu";
    cout << s[1] //s
    cout << s[2] //h
    int len = s.size(;)//5
    cout << s[len - 1];// 
    return 0;
  } 


  // FOR LOOPS 

  int main({
    //same line of code? why do u want to writite again and again
    // use me = for loops 

  
    for(int i=1; i<=10; i= i+1){
   cout << "shifu" <<endl; // shifu is printed 110 time 
    }
    // i= 1 .....till 10 prints shifu after that it wont 
    //because the scope of the i is 10. 
    // for (initialize, condition, increace/ decrease)

    cout << "shifu" << i << endl; // shifu 1 shifu 2....


  }) 

  // WHILE LOOP
  int i //initialize 
  while(i<=5){ //condition
    cout << "shifu"; 
    i=i+1; // increment 
  } return 0; 

  // Do while, u dont know the condiiton 
  // condition might be user dependent , 
  //so u want your code to be executed to min for 1 time 
  //which is why do while is used 

  int i = 2;
  do{
    cout << "shifu"<<i << endl;
    i= i+1 ;

  } while (i<=1);
  


// FUNCTIONS 
// they are set of code which performs soemthing for u
// they are used to modularise code
//they are used to increase readability 
// they are used to use same code multiple times 
 
// to avoid writting same codes again and again 
// types: 
//void => which does not return anything 
//return
//parameterised 
// non parameterised 


void printName() {
  cout << "shifu";
} // nothing is excecuting because function is outisde the main
int main(){
  printName(); // using this will print the cout thing 
  
  // if i do not know c++ i willl not know cout so 
  // void = it will do soemthing but it will not give me soemthing 

    return 0; 
}

 
 

 // parameterized void fucntion 
  void printname(string name){
    cout << " hey" << name << endl;
    int main(){
      string name;
      cin >> name;
      printname(name);
      return 0;
    }
  } 



  // take 2 numbers and print its sum 
 int sum(int num1, int num2) // here it takes 2 numbers 
 int num3 = num1+ num2; // then sum is taken stored in num 3
 return num3; // we retun num3 which is the value of int res 
 
  int main(){
    int num1, num2;
    cin >> num1 >> num2;
    int res = sum(num1 , num2); // here the execution stops and fo to sum
    cout << res; // as the num 3 value is stores in res, here res is printed 
    return 0; 
  }  

  int main(){
    int num1, num2 ;
    int minimum = min(num1, num2); //in built function
    int maximum = max(num1, num2); // inbuilt fucntion 
    cout << minimum; 
    cout<< maximum;
    return 0;

    // there can no repetition of fucntion name in same program 



// Pass by  value 
#include<bits/stdc++.h>

void doSomething(int num){
  cout << num << endl; // the num has got copied from the fucntion
  num+=5;
  cout << num << endl;
  num+= 5;
  cout << num << endl;
}
int main(){
  int num = 10; //the original memory doesnt go
  doSomething(num); // the copy of the memory performs the fucntion
  cout <<num<<endl;
  r
  
  output is : 10 15  20 10 
  

  // Pass by Refrence 

     if we attach and and (&)
     it takes the addresss an dnot the copy
     it takes the original and not the copy


     void doSomthin(string &){
     s[0]= 't';
     cout << s <, endl}
     int main(){
     int num = 10;
     cout << string << endl;
     } 
     Output is taj taj and not taj raj 

      Example of Array:
       void doSomething(int arr[],int n){
       arr[0] +=100;
       cout << "Value inside function:" << arr[0] << endl;}
       int main(){
       int n = 5;
       int arr[n];
       for (int i=0; i<n; i=i+1)
       cin >> arr[i];
       }
       doSomething(arr, n);
       cout << "Value inside int mian:" << arr[0] << endl;
       return 0;}  


       
 

  
