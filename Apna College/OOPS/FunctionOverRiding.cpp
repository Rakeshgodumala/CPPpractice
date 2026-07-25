#include <bits/stdc++.h>
using namespace std;

class Teacher{
  public: 
  void show(){

    cout << "parent class"<< endl;
  }

};

class Student : public Teacher{
  public:
  void show(){
    cout << "child class"<< endl;

  }

};

int main(){

//   Student s1;
//   s1.show();                    // this will call child class show function because of function overriding, if we want to call parent class show function then we can use scope resolution operator like this: s1.Teacher::show();








  //s1.Teacher::show();        // this will call parent class show function

  // //  or

  // Teacher t1;
  // t1.show();                 // this will call parent class show function because we are creating object of parent class
  

  return 0;
}