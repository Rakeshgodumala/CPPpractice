
#include <bits/stdc++.h>
using namespace std;

class Father {
  public:
  string name;

};

class Mother {
  public:
  int balance;

};

class Son : public Father, public Mother{

};
 

int main(){

  Son s1;
  s1.name = "Rahul";
  s1.balance = 3500;
  
  cout << s1.name << endl;
  cout << s1.balance << endl;


  return 0;
}
