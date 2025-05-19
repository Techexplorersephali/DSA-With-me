// Array 


// DATA STRUCTURE WHICH CONTAINS SIMILAR ELEMENTS
// IT HAS TO CONTIAN ON EOTYPE OF DATA
// REPRESENTATION 
// ARR[5]= [0,1,2,3,4]

// GLOBAL DECLARATION, ARR[0,0,0,0,0]
/* int arr[5]    // MAX SIZE WHEN GLOBALLY DECLARED IS ARR[10^7]
   int main(){
   body
   } */

   // MAX SIZE WHEN DECLARED INSIDE INT MAIN() i.e localy
   // arr[10^6]




// LARGEST ELEMENT IN ARRAY 

  // BRUTE FORCE SOLUTION 
    //sorting , arr[3,2,1,5,2] /
    // arr[1,2,2,3,5]
    // largest elemt = a[n-1] = 5 
   
    
// OPTIMAL SOLUTION 
#include<bits/stdc++.h>
int largestElement(vector<int> arr, int n){
    int largest = arr[0];
    for(i=0; i<n; i++)
    if(arr[i]> largest){
        largest= arr[i];
    }
}
return largest;

//SECOND LARGEST ELEMENT IN ARRAY
  // with sorting 
// Bruteforce solution 
//TC : 0(N)
  for(i = n-2; i>=0; i--){
    if arr(arr[i]!=largest)
    secondLargest= arr[i];
    break;
  } 

  // ARR[1,2,4,5,5]
  // here, we cant say n-2 is the seocnd largest 

  //arr[5,5,5,5]
  //here, no second largest exist

  // arr[1,5,5,5,5]
  // traversing till the end 

  // BETTER SOLUTION 

  arr[]= [1,2,4,7,7,5]
  // with 2 passes 

  // first pass
  largest arr[0]
  for(i=0; i<n; i++){
    if(arr[i]> largest)
    largest = arr[i];
  }
  // second pass 
  s.largest = -1 // most minimun number 
  for(i=0; i<n: i++)
  (
    if(arr[i]> s.largest && arr[i]!= largest)
    s.largest = arr[i];
  )
  print(s.largest)

  // TC : 0(2N)  { BECAUSE OF 2 PASSES}

  // OPTIMAL SOLUTION 
  int secondlargest(vector<int> &a, int n)
  vector<int{
    int largest = a[0];
    int slargest= -1;
    for(int i=1; i<n; i++){
        if(a[i]> largest){
        slargest=largest;
        largest=a[i];
        }
    }
    elese if(a[i]<largest && a[i]>slargest){
        slargest= a[i];
    }
    return slargest;
  }

  // second smallest 
  int secondSmallest(vector<int>, &a, int n){
    int smallest = a[0];
    int ssmallest = INT_MAX;
    for(int i = 1; i<n; i++){
        if (a[i]< smallest){
            ssmallest= smallest;
            smallest= a[i];
        }
        else if(a[i]!=smallest && a[1]<ssmallest){
            ssmallest = a[i];
        }
    } retun ssmalest;
  }
  vecto<int> gestSecondOrderELements(int n, vector<int> a)
  int slargest = secondLargest(a,n);
  int ssmallest= secondSmallest(a,n);
  return{slargest, ssmallest};
}


// TC: 0(N)



// CHECK IF THE ARRAY IS SORTED 
// TC: 0(N)
 int isSorted(int n, vector<int> a){
    for(int i=; i<n; i++){
        if( a[i]>= a[i-1]){

        }else{
            return false;
        }
    } return true; 

 }


 // REMOVE DUPLICATED IN PLACE FROM SORTED ARRAY 
  int removeduplicates(vector<int> &arr, int n)[
    int i= 0;
    for( int j =1; j<n; j++){
        if (arr[i]!=arr[j]){
            arr[i+1]= arr[j];
        i++        }
    }
    return i+1; //no of unique element 
  ]
