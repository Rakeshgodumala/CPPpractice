
// #include <iostream>
// using namespace std;

//     class Account{
//       private:
//       int balance;

//       public:
//       string name;


//       void setBal(int b){
//        balance = b;
//       }

//       int getBal(){
//         return balance;
//       }
//     };

// int main()
// {
//   Account b1;
//   b1.name  = "Rohit";
//   b1.setBal(35000);
//   cout <<"name: " << b1.name << endl;
//   cout <<"balance: " << b1.getBal() << endl;

    


//     return 0;
// }



































































#include <iostream>
using namespace std;

class Bank{
private:
  int bal;

  public:
  string name;

  void setBal(int b){
    bal = b;

  }

  int getBal(){
    return bal;
  }

};
   

int main()
{
  Bank b1;
  b1.name = "Arjun";
  b1.setBal(50000);

  cout << "name : "<< b1.name << "  " << "  " << "balance"<< b1.getBal() << endl;


  
    return 0;
}