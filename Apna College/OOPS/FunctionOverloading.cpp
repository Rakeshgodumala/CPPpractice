#include <bits/stdc++.h>
using namespace std;

class Person{
  public:

  string name;

  void show(int x){
    cout << "int: " << x << endl;

  }

  void show(string ch){
    cout << "string: "<< ch << endl;

  }
};

int main(){

  Person p1;
  // p1.show(10);

  p1.show("ABC");


  

  return 0;
}