
#include <iostream>
using namespace std;

    class Account{
      private:
      int balance;

      public:
      string name;


      void setBal(int b){
        balance = b;
      }

      int getBal(){
        return balance;
      }
    };

int main()
{
  Account b1;
  b1.name  = "Rohit";
  b1.setBal(35000);
  cout <<"name: " << b1.name << endl;
  cout <<"balance: " << b1.getBal() << endl;

    


    return 0;
}