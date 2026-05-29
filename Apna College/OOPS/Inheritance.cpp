// #include <bits/stdc++.h>
// using namespace std;


// class Person{

//   public:
//   string name;
//   int age;

//   //   Person(string nam, int age){
//   //   this->name = nam;
//   //   this->age = age;
//   // }


// };

// class Student : public Person{
//   public: 
//   int roll;

//   void getInfo(){
//     cout << name << " " << age << " " << roll;   // we can access name and age because of inheritance ie:   : public Person,     class student is child class and class person is parent class, student class is inheriting properties of person class
//   }

// };
// int main(){

//   Student s1;
//   s1.name  = "Rohit";
//   s1.age = 23;
//   s1.roll = 101;

//   s1.getInfo();
//   return 0;
// }








































#include <bits/stdc++.h>
using namespace std;


class Person{

  public:
  string name;
  int age;

    Person(string nam, int age){
    this->name = nam;
    this->age = age;
  }


};

class Student : public Person{
  public: 
  int roll;

  // Student((string nam, int age, int roll)) : Person((string nam, int age)){
  //   this->roll = roll;
  // }


  Student (string nam, int age, int roll) : Person(nam, age){
    this->roll = roll;
  }
  
  void getInfo(){
    cout << name << " " << age << " " << roll;   // we can access name and age because of inheritance ie:   : public Person,     class student is child class and class person is parent class, student class is inheriting properties of person class
  }





};
int main(){ 

  Student s1("Rohit", 23, 101);
  // s1.name  = "Rohit";
  // s1.age = 23;
  // s1.roll = 101;

  s1.getInfo();
  return 0;

}