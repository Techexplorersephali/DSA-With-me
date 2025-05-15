#include<bits/stdc++.h>
// #incldue<math.h> // for maths 
 //  #incldue< string.h> // for strings 
 // But evertyhing is already added in <bits/stc++.h> 
using namespace std: 
// use this to avoid using  this in every line or code
// std: cin>> n;
// std:cout << n ;

// FUCNTIONS 
  /*  void print(){ // will not return anything 
        cout<< "raj";
     } 
     int sum(int a, int ab){
        return a+b;
     }
int main(){
    print();
    int s= sum(1,5)
    //prints 6
    cout<< s;
    retun 0;
}
} */ 


// c++ STL 
// has 4 parts Algorithms, contianers , fucntions and iterators 

// pairs 
/* void explainPair(){
    pair<int, int> p={1,3}
    cout <<p.first <<" " << p.second;
    pair<int, pair<int,int>> p{1,{3,4}};
    cout << p.first << " " <<p.second.second << " " << p.second.first;
    pair<int, int> arr[]={{1,2}, {2,5}, {5,1}};
    cout<< arr[1]second;//5
} */

// CONTAINERS : 1. VECTORS 
 void explainvector(){
    vector<int> v; //data type name is v, it creates an empty contianer 
    v.push_back(1); // it pushes 1 in empty contianer
    v.emplace_back(2); // similar to push back, it dynamacally increases the contianer pushes the another int value


    vector<pair<int, int>>vec; //defining the pair data type
    v.push_back({1,2});
    v.emplace_back(1,2); // atomatically thinks that this is a pair data type and takes it as an input
     
    vector<int> v(5,100); // (size, value) {100,100,100,100,100}
     vector<int> v(5); // a container with size 5 is declared 
     vector<int> v1(5,20);{20,20,20,20,20};
     vector<int> v2(v1);// similar to v1 but the copy of it...other contianer with  5 copies of 20

     // its dynamic in nature , we can always increase the size
     //increase the size by using push _back and emplace_back


     // access the data in vector 
     // v-{10,15,17,18,5}
     // v[1]= 15, v[2]= 17

    //other way to access the data is ITERATOR

    vector<int>:: iterator it= v.begin(); // v.beg points ot the memory not the value, so if we print v.beg we print the momoery 
    // in order to access in the memory, * is used, 
    it++ // shift of the memory to the next memory i.e 15
    cout << *(it)<< " "; // prints 15 as we have doen i++

    it = it +2;
    cout<< *(it)<< " ";


    vector<int>:: iterator it= v.bend(); //end will point to somewhere right after 5
    i-- // now the memoery will point 5

    vector<int>:: iterator it= v.rend(); // reverse end - means im going to reverse it, so it will point left of the 10
    vector<int> :: iterator it= v.rbegin(); // it will point 5

    cout<< v.back()<< " "; // the element wwhich is at 5



    // print the entire vector { 10,20,30,40,50}

     for( vector<int>::iterator it= v.begin(); it!=v.en(); it++){
        cout<< *(it) << " ";

     }
    
     // short cut for vector<int>::iterator = auto
     for( auto it= v.begin(); it !=v.end(); it++){
        cout<< *(it) << " ":
        
     }

     for(auto it : v){
        cout << it<< " "; // auto matically prints the entire vector

     } //{10,20,30,40,50}

     // deletion in the vector 
      v.erase(v.begin()+1); //erases 20
      // v.begin()+1 will be 20
      //resuffeled data = {10,30,30,40,50}

      v.erase(v.begin() + 2, v.begin()+4); // {start, end(end is not included)}
      // so the data 30 and 40 will get deleted 
      // output: {10,30,50}

      //Insert function
       vector<int>v(2,100); //{100,100}
       v.insert(v.begin(), 300); //{300,100,100}
       v.insert(v.begin()+ 1, 2,10); // {30,10,10,100,100} {where, number of times, number}

       vector<int>copy(2,50); //{50,50}
       v.insert(v.begin(), copy.begin(), copy.end()); // {50,50, 300,10,10,100,100}

       
       cout << v.size(); // size of the vector i.e 7 in above

       v.pop_back(); //{10}

       //v1 => {10,20
       //v2 => {30,40
       v.swap(v2); // v1=> {30,40} , v2=> {10,20}
       v.clear(); // erases the entire vector

       cout << v.empty();
   }



   // COntianer 2. LIST 
   void explainList(){
      list<int> ls;
      ls.push_back(2); //{2}
      ls.emplace_bacl(4); //{2,4}
      ls.push_front(5); //{5,2,4}  //very very cheap in terms of Time complexity and sapce
      ls.emplace_front();
   }
   // rest functions same as vector 
   //begin, end, rebegin, rend, clear, insert, size, swap

   // Container 3. DEque
 void explainDeque(){
   deque<int>dq;
   dq.push_back(1); //{1}
   dq.emplace_back(2); //(1,2)
   dq.push_front(4); //{4,1,2}
   dq.emplace_front(3); //{3,4,1,2}

   dq.pop_back(); //{3,4,1}
   dq.pop_front(); //{4,1}

   dq.back();
   dq.front();

   //rest fucntions same as vector 
   //  begin, end, rbegin, rend, clear, insert, size, swap
 }      


 Contianer 4. Stack // LIFO //pop push top

 void emaplainStack(){
   stack<int> st;
   st.push(1); //{1}
   st.push(2); //{2,1}
   st.push(3); //{3,2,1}
   st.empalce(5); //{5,3,2,1}

   cout<< st.top(); // prints 5 "**st[2] is invalid**"
   st.pop(); // st lools lile {3,2,1}
   
   cout<< st.top(); //3 
   cout << st.size(); //3
   cout <<st.empty();  //false 
   stack<int>st1, st2; //declaration of st2 
   st1.swap(st2);


 }

 //CONTAINER QUEUE 
  void explainQueue(){ // FIFO
   queue<int> q;
   q.push(1); //{1}
   q.push(2); //{1,2}
   q.empalce(4); //{1,2,4}

   q.back += 5
   cout <<q.back(); //prints 9
   
   // q is {1,2,9}
   cout <<q.front: // pritns 1
    q.pop(); {2,9}
    cout << q.front(); //prints 2 

    //size swap empty same as stack

  }

  // Priority queue

  priority_queue<int>pq; // this is not a linear datta structure here a tree ds is maintined

  pq.push(5); //{5}
  pq.push(2); //{5,2}
  pq.push(8); // {8,5,2}
  pq.push(3); //{8,5,3,2}
  pq.empalce(10); //{10,8,5,3,2}

  cout <<pq.top(); // prints 10  {largest int  }
  pq.pop; //{8,5,3,2}
   cout<<  pq.top(); //prints 8

   // size swap empty fucntion same as others 
   // Minimum Heap 
   priority_queu<int, vector<int>, greater<int>> pq;

   pq.push(5); // {5}
   pq.push(2); //{2,5}
   pq.push(8); //{2,5,8}
   pq.emplace(10); //{2,5,8,10}
   cout<< pq.top(); //prints 2

   // tc of push and pop log n  // top - 0(1)

   // CONTAINER : SET 

   void explainSet(){
      set<int>st;
      st.insert(1); //{1}
      st.emplace(2); //{1,2}
      st.insert(2); //{1.2} will not store 2 again
      st.insert(4); //{1,2,4}
      st.insert(3); //{1,2,3,4}

      // fucntionality of insert in vector
      //can be used also that only increases
      // efficiency 

      // begin(), end, rbegin, rend, size
      // empty, swap are same as those of above

      //{1,2,3,4,5}
      auto it = st.find(3); // retruns an iterator which points to the 3(adresss)
      // {1,2,3,4,5}
      auto it= st.find(6);// if the element is not theri in the set it will always return st.end()
      // it  will poitn after the 5 
      
      st.erase(5); //deletes 5 and maints the sorted order 

      int cnt = st.count(1); // if elemet (1) is there it will give the number of 1 otheriwise it will give 0 
      st.erase(it); //it takes constant time 

      //{1,2,3,4,5}
      auto it1= st.find(2);
      auto it2 = st.find(4); 
      at,erase(it1,it2); // after erase{1.4.5} {first, last}

      //lower_bound() and upper bound() function works in the same way
      // as in vector it does 

      // This is the syntax
      auto it= st.lower_bound(2); // watch the video 
      atuto it= st.upper_bound(3); // watch the video 




   }


   void explainMultiSet(){    // MultiSet obeys sorted but not unique

      multiset<int>ms;
      ms.insert(1); //{1}
      ms.insert(1); //{1,1}
      ms.insert(1); //{1,1,1}
      ms.erase(1); // all the 1's erased 

      int cnt = ms.count(1); // 3
      
      // only a single one erases 
      ms.erase(ms.find(1));
      // find will point to iterator 

      ms.erase(ms.find(1), ms.find(1)+2);  // erase(starting address, end)
      // find 1 and go till 2 so it 

   }
  
   
   void explainSet(){
      unordered set<int> st; 
      // lower_bound an dupper_boun fucntion
      //does not works, rest all fucntions are same
      // as above, it does not stores in any
      // particular order it has better compalexity 
      //than set in most cases , expect some when collison happens 
   }



   void explainMap(){ // if we have 10 raj,  but as roll no is given so itis our key to find the unique Raj so... the keys are unique
      // so we can have 10 raj with 10 diffrent roll no or say key 
      // this key and value of any data type- char, int, float, double  , pair
      // a contianer which stores everything in respect of keys , values and {key, value}
      map<int, int> mpp; 

      map<int. pair<int, int> mpp;
      map<pair<int, int>, int> mpp; 

      mpp[1]= 2; // { 1, 2} store  2 on the key 1
      mpp.emplace({3,4}); // {3,4} does the similar thing as above 
      mpp.insert({2,4});
      mpp[{2,3}]= 10; // [{ 1,2}, {2,3}, {3,4}] this is  how it is stores in sorted order of key, all uniques no duplicate

      for(auto, it: mpp){
         cout < it.first << "" << it.second << endl; // it stores in a pair [{ 1,2}, {2,3}, {3,4}] [0,1,2] 
         //  prints {1,2} it.first is 1 and it.second is 2
      }

      cout << mpp[1]; // prints 2
      cout<< mpp[5]; // Null  or 0 as adress 5 doesnt exits 

      auto it  = mpp.find(3);
      cout<< *(it).second; // *it is the element and only it.second is the adddress 

      auto it = mpp.fid(5); // points after the 3 as no address of 5 is there 

      // THIS IS THE SYNTAX 
      auto it= mpp.lower_bound(2);

      auto it= mpp.upper_bound(3);
      // erase, swap, size, empty are the same as above
   }


   void explainMultimap(){
      //everything same as map only it can store multiple keys, similiar to set
      // sorted manner
      // only mpp[key] cannot be used here 
      //duplicate keys 
   }

   void explainUnordredMap(){
      //same as set and unordred_set diffrence 
      // unique keys but not sorted 
      // map works log N time but 
      // unordredmap works in constant time 
   }



// ALGORITHMS 

 
     