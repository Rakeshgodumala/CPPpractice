#include <bits/stdc++.h>

using namespace std;

int main()
{

  // vector<int> vec = {1,2,3,4,5};
  // cout << "Size: " << vec.size() << endl;

  // cout << " vec: " << vec[2] << "\n";

  // vector <int> arr (5, 3);

  // for (int i : arr){
  //   cout << i << " ";
  // }

  //   vector <string> xyz = {"abc " ," asd" ,"jj", "kk"};
  //   for (string val: xyz){
  //     cout << val << " ";
  //   }


// ******************************* practice ****************************

// vector <int> arr = {1,2,3,4,5};
// cout << "size : " << arr.size() << "\n";
// cout << "Element at index 2: " << arr[2] << endl;



// vector <int> vec (3,4);
// for(int i : vec ){
//   cout << i << " ";
// }


vector<char> vec = {'x', 'y', 'z'};


// cout << vec.size() <<  " "  << vec.front() << " " << vec.back() << endl;
for(char value : vec){
  cout << value << " " << endl;;
}


vec.push_back('p');


vec.push_back('w');




// after push_back value print below 
  cout << "after push_back() : " << vec.back() << " "<< endl;



// vec.pop_back();
vec.pop_back();


  cout << "after pop_back() : " << vec.back() << " " << endl;;


///////////////////**********      at  ********///////////////

  cout << "at index 3: " << vec.at(3) << endl;
  cout << "index of 1:" << vec[1] <<endl;


for(char value : vec)
{
  cout << value << " ";
}

  // vector<char> vec = {'a', 'b', 'c', 'd', 'e'};

  // cout << "size: " << vec.size() << endl;
  // vec.push_back('p');
  // vec.push_back('q');
  // vec.push_back('r');

  // cout << "after push_back: " << vec.size() << endl;
  // vec.pop_back();
  // cout << "after pop: " << vec.size() << endl;

  // cout << "front: " << vec.front() << endl;
  // cout << "back:" << vec.back() << endl;

  // for (char i : vec)
  // {
  //   cout << i << " ";
  // }


  cout << endl;

// vector <string> arr = {"Apple", "Mango"};
// for (string val : arr){
//   cout << val << " " << endl;
// }

// // // arr.push_back("Grapes"); 


// cout << "size of arr: " << arr.size()<< endl;
// cout << "capacity of arr: " << arr.capacity()<< endl;  // capacity only work if we use push_back() function to add element in vector  otherwise it will give us the same size as capacity because we are initializing vector with 3 element and capacity is also 3 in this case.






vector <int> arr = {1,2,3};
cout << "size of arr: " << arr.size() << endl;

for(int val : arr){
  cout << val<< " " << endl;
}

arr.push_back(4);

cout << "size of arr after push_back: " << arr.size() << endl;

cout << "capacity of arr after push_back: " << arr.capacity() << endl;  // double if we use push_back() otherwise without push_back() uses capacity will be same as size same as we are initializing vector with 3 element and capacity is also 3 in this case. when use push_back then vector  will double . eg: current size is 3 and capacity is 3 then after push_back() size will be 4 and capacity will be 6 because vector double its capacity when we use push_back() function to add element in vector.







  return 0;
}
