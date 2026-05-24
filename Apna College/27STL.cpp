#include <bits/stdc++.h>

using namespace std;

int main(){

  // vector<int> arr = {1,2,3,4,5};
  
  // arr.at(4) = 10;

  
  // arr.push_back(7);

  // cout << "capacity: "<< arr.capacity() << endl;

  // cout << "index of 2: " << arr[2]  <<  "  " << "index of 3: " << arr.at(3) << endl;
  // for (int value : arr)
  // {
  //   cout << value << " ";
  // }

















  // vector<int> arr = {1,2,3,4,5};

  // cout << "size: " << arr.size() << endl;
  // cout << "capacity: " << arr.capacity() << endl;


  // arr.push_back(6);

  // cout << "size after push_back: " << arr.size() << " " << "capacity after push_back: " << arr.capacity() << endl;

  // arr.pop_back();
  // cout << "size after pop_back: " << arr.size() << " " << "capacity after pop_back: " << arr.capacity() << endl;


  // int val1 = 10;
  // int val2 = 20;

  // arr.front() = val1;
  // arr.back() = val2;

  // for(int value : arr){
  //   cout << value << " "; 
  // }



  // cout << endl;


//   vector <char> vec (5, 'r');
// for(char i : vec){
//   cout << i << " ";
// }





// vector<int> xyz = {1,2,3,4,5};

// for (int value : xyz){
//   cout << value *2 << " ";
// }



// vector <int> vec(xyz);

// for(int vals : vec){
//   cout << vals <<  " ";
// }










// **************             erase                ************//////////

// vector<int> pqr = {1,2,3,4,5};
// // pqr.erase(pqr.begin());       // it erase 0th index value ie: 1 and print 2 3 4 5

// // pqr.erase(pqr.begin() + 2);   // it erase 2nd index value ie: 3 and print 1 2 4 5

// pqr.erase(pqr.begin() + 1 ,  pqr.begin() + 3);  // it erase 1st and 2nd index value ie: 2 and 3 and print 1 4 5. it works [start index, end index] need to give +1 extra if we want to delete upto value 2md index but give end index as 3



// for (int value : pqr){
//   cout << value << " " << endl;
// }



// **************             insert                ************//////////



// vector<int> x = {1,2,3,4,5};

// // cout << sizeof(x) << endl;
// // cout << x.capacity() << endl;

// // cout << "size: " << x.size() << endl;
// x.insert(x.begin() + 2, 8);     // it insert 8 at 2nd index and print 1 2 8 3 4 5

// cout << "after insert 8 the  size: " << x.size() << endl;



// for(int value : x ){
//   cout << value << " " << endl;
// }












// vector <char> str = {'x','y','z'};

// cout << "size: " << str.size() << '\n';
// str.push_back('p');

// for(char valu : str){
//   cout << valu << endl;
// }
// cout << "capacity: " << str.capacity() << '\n';



// str.insert(str.begin() + 3, 'q');



// for(char valu : str){
//   cout << valu << endl;
// }

//// ********** clear***************

// vector<string> str = {"abc", "def", "ghi"};
// str.push_back("ravi");

// cout << "front:"<< str.front() << endl;
// cout << "back:"<< str.back()<< endl;
// cout << "size: " << str.size() << endl;
// cout << "capacity: " << str.capacity() << endl;

// str.clear();




// for(string value: str){
//   cout << value << " " << endl;
// }





//// ******************* empty *************//

// vector<int> arr = {1,2,3,4,5};


// for(int val : arr){
//   cout << " value: "<< val << " "<<endl;
// }



//  arr.clear();
// cout << "isEmpty: " << arr.empty() << endl;  // it print 1 because about we used clear(). that means clear and now true thats why 1 is print.


// cout << "isEmpty not: " << arr.empty() << endl;  // it print 0 because we not used clear() and now false thats why 0 is print.



// cout << (*arr.begin()) << endl;
// cout << (*arr.end()) << endl;

// cout << arr[2] << endl;



////////////////**********List *********** */

// list <int> li  = {1,2,3,4,5};
// li.push_back(6);
// li.push_front(-1);
// for(int value : li){
//   cout << value << " ";
// }

///////***************cout << li[3];   // not posible in list acces  a particular value


////////////////**********deque *********** */

// deque<char> dq ;
// dq.push_back('x');
// dq.push_back('y');
// dq.push_back('z');
// dq.push_back('a');
// dq.push_back('b');
// dq.push_front('p');


// cout << dq.size() << endl;
// cout << dq.front() << endl;
// cout << dq.back() << endl;
// cout << *dq.begin() << endl;
// cout << *dq.erase(dq.begin() + 0) <<endl;
// cout << *dq.insert(dq.begin() + 4, 'c') << endl;

// cout << endl;

// cout << "position : " <<dq[3] << endl;
// cout << "position : " <<dq.at(3) << endl;













// for(char val: dq){
//   cout << val << " ";
// }








// *******************         pair     ****/////////////////////


// vector <pair <int, pair<char, int>>> vec = { 

//   {1, {'x', 5}}, 
//     {2, {'y', 10}}, 
//     {3, {'z', 15}}
//   };


// for(auto it : vec){
  
//   cout << it.first << "  " << it.second.first << " " << it.second.second << endl;

// }



// vector<pair <char, pair<string, int>>> vel;
// vel.push_back({'a', {"vivo", 5000}});

// vel.emplace_back('b', pair<string, int>{"samsung", 6000});

// vel.push_back({'c', {"oppo", 8000}});

// for(auto it : vel){
//   cout << it.first << " "<< it.second.first << " "<< it.second.second << endl;
// }











//// ***************************            stack             ********** //


// stack<int> s;
// s.push(1);
// s.push(2);
// s.push(4);
// s.push(5);
// s.push(6);

// // cout << "top: " << s.top() << endl;
// // s.pop();

// // cout << "top: " << s.top() << endl;



// while(!s.empty()){
//   cout << s.top()<< endl;
//   s.pop();
// }





//// ***************************            Queue             ********** //

// queue<int> q;
// q.push(1);
// q.push(2);
// q.push(3);
// q.push(4);
// q.push(5);

// cout << "front: " << q.front() <<endl;
// cout << "back: " << q.back() <<endl;

// q.pop();
// cout << endl;

// cout << "front: " << q.front() <<endl;
// cout << "back: " << q.back() <<endl;


// while(!q.empty()){
//   cout << q.front() << " " ;
//   q.pop();
// }

// cout << "size of q:"<< q.size()<<endl;

// queue<int> q1;

// q1.swap(q);                 ///swap q1 and q. now q1 have 1 2 3 4 5 and q is empty

// cout << "size of q:"<< q.size()<<endl;
// cout << "size of q1:"<< q1.size()<<endl;




// *********** priority_queue ***************

// priority_queue<int> pq;
priority_queue<int, vector<int>, greater<int>> pq;
pq.push(8);
pq.push(19);
pq.push(-3);
pq.push(9);
pq.push(2);
pq.push(5);

while(!pq.empty()){
  cout << pq.top() << " ";
  pq.pop();
}










  // cout << endl;

  return 0;
}