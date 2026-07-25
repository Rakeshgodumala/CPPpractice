
#include <bits/stdc++.h>
using namespace std;

class Principle{

  public:
  string name;
  int age;
  
};

class Teacher: public Principle{
  public:
  string subject;
};


class Student : public Teacher{
  public:
  string research;

};
 

int main(){

  Student s1;
  s1.name = "Uma shankar sir";
  s1.age= 65;
  s1.subject = "DSA";
  s1.research = " OOPS";

  cout << s1.name << endl;
  cout<<s1.subject << endl;
  cout << s1.research << endl;
 

  return 0;
}
