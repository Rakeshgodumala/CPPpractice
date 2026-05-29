
#include <iostream>
using namespace std;

    
    class ATM{
        
        private:
        void verifyDetail(){
            cout << "Verify successfull" << endl;
        }
        
        
        public:
        
        void Withdraw(){
                 
            verifyDetail();
            cout << "Money Withdraw" << endl;
       
        }
        
    };
    
    
int main()
{
    
ATM b1;
b1.Withdraw();


    return 0;
}