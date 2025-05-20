// LEFT ROTATING THE ARRAY BY ONE PLACE 

#include<bits/stdc++.h>
vector<int> rotateArray(vector<int> &arr, int n){
    int temp= arr[0];
    for(i=1; i<n; i++){
        arr[i-1] = arr[i];
    }
    arr[n-1]= temp;
    return arr;
}


// LEFT RORATE AN ARRAY BY D PLACES 

#include<bits/stdc++.h>
#incldue<iostream>
using namespace std:
void leftRotate(int arr[], int n, int d){
     d= d%n;
     int temp[d];
     for(int i=0; i<d; i++)
     {
         temp[i]= arr[i];
     }
     for(int i=d; i<n, i++)

     {
    arr[i-d]= arr[i];
    }    
      for(int i= n-d; i<n; i++)
      {
    arr[i]= temp[i=(n=d)];
      }
}
int main(){
    int n;
    cin>> n;
    int arr[n];
    for(int 0; i<n, i++){
        cin>> arr[i];
    } 

    int d;
    cin>> d;
    leftRotate(arr,n,d);
    for(int i=0; i<n; i++){
        cout<< arr[i]<< " ";
    }

    return 0;

}
 // TC: 0(D)+ 0(N-D)+ 0(D) = 0(N+D)
 // SC: 0(D), EXTRA SPACE USED FOR STORING TEMP

 // OPTIMAL SOLUTION 
 // TC: 0(D)+ 0(N-D)+ 0(N) = 0(2N), INCREASED 
 // SC: 0(1), AS NO EXTRA SPACE IS BEING USED   

  #include<bits/stdc++.h>
  #include<iostream>
  using namespace std:
  void leftRotate(int arr[], int n, int d){
     reverse [arr, arr+d]; 
     reverse[ arr+d, arr+n];
     reverse[arr, arr+n];
  }

  int main(){
    int n;
    cin>> n;
    int arr[n];
    for(i=0, i<n; i++){
        cin>> arr[i];
    }
  }
    int d;
    cin>> d:
    leftRotate(arr, n, d):
    for(int i=0; i<n; i++){
        cout<, arr[i]<< " ";
    }
    return 0;
}
// RIGHT ROTATE IN ARRAY - HOMEWORK

// MOVE ZERO TO END 

// bruteforce solution
 vector<int> moveZeros(int n, vector<int> a){
    //step 1
    vector<int> temp;
    for(int i=0; i<n; i++){
        if(a[i]!=0){
            tep.push_back(a[i]);
        }
    }
 
 // step 2
 int nz= temp.size():
 for(int i=1; i<nz; i++){
    a[i]= temp[i];
 }

 //step 3
 for(int i= nz; i<n; i++){
    a[i]= 0;
 }
 return a;
 }


 // OPTIMAL SOLUTION 
 vector<int> moveZeros(int n, vector<int> a){
    int j= -1;
    for(int i=0; i<n;i++){
        if(a[i]==0){
            j=i;
            break;
        }
    }
 // no non zero numbers 
 if(j==-1)return a;
 for(int i=j+1; i<n; i++){
    if(a[i]!=0){
        swap(a[i], a[j]);
        j++;
    }
    return a;
 }



// LINEAR SEARCH 

int LinearSearch(int n, int num, vector<int> &arr){
    for(int i=0; i<n; i++){
        if(arr[i]== num);
        return i;
    }
    return -1;
}

// FIND THE UNION OF TWO ARRAYS

#include<bits/stdc++.h>
vector<int>sortedRaay(vector<int> a vector<int b> d){
    int n1= a.size();
    int n2= b.size();
    set<int> st;
    for(int i=0; i<n; i==){
        st.insert(a[i]);
    }
    for(int i=0; i<n2; i++){
        st.insert(b[i]);
    }
    vector<int> temp;
    for(auto it: st){
        temp.push_back(it);
    }
    return temp;
}


// optimal solution 
#include<bits.stdc++.h>
vector<int> sortedArray(vector<int>a, vector<int b> b){
    int n1= a.size();
    int n2 = b.size();
    int j=0;
    int i=0;
    vector<int> unionArr;
    while( i<n1 && j<n2){
        if(a[i]<=b[j]){
            if(unionArr.size()==0 || unionArr.back()!=a[i]){
                unionArr.push_back(a[i]);
            }
            i++;

        }
        else{
            if(if(unionArr.size()==0 || unionArr.back()!=b[j]){
                unionArr.push_back(b[j]);)
            }
            j++;
        }
        while(j<n2){
            if(if(unionArr.size()==0 || unionArr.back()!=b[j]){
                unionArr.push_back(b[j]);)
            }
            j++;


        }

        while(i<n1){
            if(unionArr.size()==0 || unionArr.back()!=a[i]){
                unionArr.push_back(a[i]);
            }
            i++;

        }
    }
    return unionArr;
}


// TC: 0(n1+n2)
//SC: 0(n1+n2)

// INTERSECTION OF 2 SORTED ARRAY 

  // BRUTEFORCE SOLUTION 
  #inlcude<bits/stdc++.h>
  vector<int> findArrayIntersection(vector<int> &A, int m vector<int> &B , int m)
  {
    vector<int> ans;
    int vis[m]={0};
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(A[i]==B[j] && vis[j]== 0){
                ans.push_back(A[i]);
                vis[j]= 1;
                break;
            }
            if(B[j]> A[i]) break;
        }
    }
    return ans;
  } 

  // OPTIMAL SOLUTION 
  // TWO POINTER APPROACH
  #inlcude<bits/stdc++.h>
  vector<int> findArrayIntersection(vector<int> &A, int m vector<int> &B , int m)
  {
    int j= 0;
    int i=0;
    vector<int> ans;
    while(i<n && j<m){
        if(A[i]< B[j]{
            i++;
        }
        else{
            ans.push_back(A[i]);
            i++;
            j++;
        }
    } return ans;
  }
  