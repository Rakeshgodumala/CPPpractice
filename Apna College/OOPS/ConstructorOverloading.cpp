// Constructor overloading means defining multiple constructors in the same class with the same name, but with different parameters (different types, number, or order of arguments).It allows you to initialize an object in different ways.

#include <bits/stdc++.h>
using namespace std;

class Person{
  public:

  string name;
  int age;

  Person(){
    cout << "default constructor called or Non parameterized" << endl;
  }


  Person(string nam, int age){
    this->name = nam;
    this->age = age;
    cout << "parameterized constructor called" << endl;

  }



  void display(){
     cout <<"name: "<<  name << endl;
     cout << "age: " << age << endl;

  }
};

int main(){

  //// //  this is only for default constructor
   
// Person p1;



// //  this is for parameterized constructor

  Person p1("Alice", 25);
  Person p2("Bob", 30);

  p1.display();
  p2.display();

  return 0;
}