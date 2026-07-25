#include <bits/stdc++.h>
using namespace std;

class Teacher {
  public:
  string name;
  int marks;
 


};

class Student : public Teacher{
  public:
  int roll;
  
  int display(int roll){

    this->roll = roll;

    cout << name << endl;
    cout << marks << endl;
    cout << roll << endl;
    
  }

};

int main(){
  Student t1;
  t1.name = "Rahul";
  t1.marks = 250;
  


  t1.display(10111);

  return 0;
}



























// #include <bits/stdc++.h>
// using namespace std;

// class Teacher {
//   public:
//   string name;
//   int marks;
 

//   Teacher(string name, int marks){
//     this->name = name;
//     this->marks = marks;

//   }

// };

// class Student : public Teacher{
//   public:
//   int roll;

//   Student(string name, int marks, int roll) : Teacher(name, marks) {
//     this->roll = roll;
//   }

//   void display(){
//     cout << name << endl;


//     cout << marks << endl;
    
//     cout << roll << endl;
    
//   }

// };

// int main(){
//   Student t1("Rahul", 250, 10111);
  


//   t1.display();

//   return 0;
// }
