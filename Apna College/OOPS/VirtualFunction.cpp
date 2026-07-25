#include <bits/stdc++.h>
using namespace std;

class Teacher{
  public: 
  void show(){

    cout << "parent class"<< endl;
  }

  virtual void hello(){
    cout << "hello from parent class" << endl;
  }

};

class Student : public Teacher{
  public:
  void show(){
    cout << "child class"<< endl;

  }


  
   void hello(){
    cout << "hello from child class" << endl;
  }


};

int main(){
///// virtual function

Student xyz;
xyz.hello();   // this will call child class hello function because of virtual function, if we want to call parent class hello function then we can use scope resolution operator like this: xyz.Teacher::hello();



//// Function overRiding


//   Student s1;
//   s1.show();                    




  //s1.Teacher::show();        // this will call parent class show function

  // //  or

  // Teacher t1;
  // t1.show();                 // this will call parent class show function because we are creating object of parent class
  

  return 0;
}