 // PATTERNS 
 
 // nested loops (outer and inner)
// outer loops are for lines 
// inner loops are for columns
// Rules: 
// 1. for the outer loop, count the no of lines
//  2. for the inner loop, focus on the columns 
//and connect them somehow to the rows 
// 3.  Whatver you are printing print them inside the 
//inner for loop
// 4. Observe Symmetry (optional step)



  /* QUES 1. 

 ****
 ****
 ****
 ****
*/

// Answers 1 :
 /*  
 #include<bits/stdc++.h>
 using namespace std;
 void print1(int n){
  for (int )}
 for( i=0; i<=4, i=++){
    for ( j=0; j<=4; j++ ){
        cout << "*";
    }
    cout << endl;

 }
    int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
    int i;
    cin >> n;
    print1(n);
    } // this code is the backend of the test cases 
    }
    */
// Ques 2. 
/*

*
**
***
****
******
 Answers : 
 void print1(int n) {}
 void print2(int n){

 for(int i=0; i<=n; i=++){
    for (int j = 0; j<=1, j++){
    cout << "* ";
}


/* Ques 3. 

1 
1 2
1 2 3 
1 2 3 4 
1 2 3 4 5 
  
// for every row (i) we are printing till that row no. 
for ( i = 0; i< n ; i++){
   for(j = 1; j <= i; j++){
   cout << j << " "; 
   }
   cout << endl;

}

/*
 1 
 2 2 
 3 3 3 
 4 4 4 4 
 5 5 5 5 5 

 #include<bits/stdc++.h>
 using namespace std;
 void pritn1(int n){
 for (i = 1; i<= n; i++){
   for(int j=1; j<=i; j++)
   cout << i << " "}
   cout << endl;
   }

   /*

   /*
     *****
     ****
     ***
     **
     * 
     
     for(i = 1; i <=n; i++){
     for (j =1; j <n-1+1; j++){
      cout << "*";
      }
      cout << endl;
} 
      */

      /*
      12345
      1234
      123
      12
      1

      for (i= 1; i <= n; i++){
        for (j=1; j<=n+1-1; j++){
        cout << j << " ";
}
        cout << endl;
    }
      */


      /*

         *
        ***
       ***** 
      ******* 
     ********* 
  

  for( i = 0; i <n ; i ++){
   // space 
   for(j=0; j < n-1-i ; j ++){
   cout << " ";
   }
   // stars 
   for(j =0; j< 2*i+1; j ++){
   cout<< " * "; }

   // space 

    for( j = 0; j <n-i+1; j++){
    cout << " "}

    cout << endl; 
  
  }
  
     */


     /*
       *********
        *******
         *****
          ***
           *
           
           for ( i =0, i < n; i++ ){
           // space 
           for( j= 0 ; j <i ; j ++){
           cout << " ";}
           // stars 
           for (j = 0; j <2*n - (2*i + 1); j ++){
           cout << " * "; 
           }

           // space 
           for ( j = 0; j < i; j ++){
           cout << " "; }
           cout << endl;
    
           
}
    */

    /*
         *
        ***
       ***** 
      ******* 
     ********* 
     *********
      *******
       *****
        ***
         *
         

         // combine pattern 7& 8 you will get this one 
    
    */