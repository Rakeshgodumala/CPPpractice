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

  vector<char> vec = {'a', 'b', 'c', 'd', 'e'};

  cout << "size: " << vec.size() << endl;
  vec.push_back('p');
  vec.push_back('q');
  vec.push_back('r');

  cout << "after push_back: " << vec.size() << endl;
  vec.pop_back();
  cout << "after pop: " << vec.size() << endl;

  cout << "front: " << vec.front() << endl;
  cout << "back:" << vec.back() << endl;

  for (char i : vec)
  {
    cout << i << " ";
  }
}
