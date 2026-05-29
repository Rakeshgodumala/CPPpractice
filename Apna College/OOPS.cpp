// #include <bits/stdc++.h>
// using namespace std;

//   class Teacher{
//     private:
//     double salary;

//     public:

//     Teacher(){                    // constructor 
//       dept = "computer sci";

//     }

//     // properties  or attributes
//     string name;
//     string dept;
   

//     // methos or function
//     void printDetails(string newDept){
//       dept = newDept;

//     }

//     //seter for private variable
//     void setSalary(double sal){
//       salary = sal;
//     }

//     //geter for 

//     double getSalary(){
//       return salary;
//     }
//   };

// int main(){

//   Teacher t1;
//   t1.name = "Rohit";
 
 


  
//   cout << t1.name << " " << t1.dept ;

//   return 0;
// }



























#include <bits/stdc++.h>
using namespace std;

  class Teacher{

    private:
    double salary;

      // properties  or attributes
    public:
    string name;
    string dept;

    

    

    Teacher(){                    // constructor 
      dept = "computer sci";

    }

  Teacher(string name, string department, double salary){
    this->name = name;
    this->dept = department;
    this->salary = salary;

  }

  
   

    // methos or function
    void printDetails(string newDept){
      dept = newDept;

    }

    //seter for private variable
    void setSalary(double sal){
      salary = sal;
    }

    //geter for 

    double getSalary(){
      return salary;
    }


  };

int main(){

  // Teacher t1;
  // // t1.name = "Rohit";


 Teacher t1("Rohit", "Computer Sci", 50000);
  
  cout << t1.getSalary() << endl;

cout << t1.name << " " << t1.dept << " " << t1.getSalary() << endl; 
  return 0;
}