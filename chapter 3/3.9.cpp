#include <iostream>
#include <string>
using namespace std;
class Account {

public:

   Account( string accName, int initialBalance )
      : name{ accName } {

      if ( initialBalance > 0 )
         balance = initialBalance;
   }

   void deposit( int depositAmount ) {
      if ( depositAmount > 0 )
         balance = balance + depositAmount;
   }

   void withdraw( int withdrawAmount ) {
      if ( withdrawAmount > balance )
         cout << "Withdrawal amount exceeded account balance.\n";
      if ( withdrawAmount <= balance )
         balance = balance - withdrawAmount;
   }

   int getBalance() const {
      return balance;
   }

   void setName( string accName ) {
      name = accName;
   }

   string getName() const {
      return name;
   }

private:

   string name;
   int balance{ 0 };
};
int main() {

   Account acc1( "Noor", 20000 );
   
   Account acc2( "XYZ", 30000 );
   //account 1
   cout << "Account 1 "<<endl;
   cout<<"Name: " << acc1.getName() <<endl;
   cout<< "balance: "<< acc1.getBalance()<<endl;
   cout<<"\n"<<"\n";
   //account 2
   cout << "Account 2 "<<endl;
   cout<<"Name: " << acc2.getName() <<endl;
   cout<< "balance: "<< acc2.getBalance()<<endl;

   int withdrawAmount;
   cout<<"\n"<<"\n";

   cout << "Enter withdraw amount for account 1: ";
   cin >> withdrawAmount;

   acc1.withdraw( withdrawAmount );

   cout << "Account 1 "<<endl<<"Name: " << acc1.getName() <<endl<< "balance: "<< acc1.getBalance();
   cout<<"\n"<<"\n";
   cout << "Account 2 "<<endl<<"Name: " << acc2.getName() <<endl<< "balance: "<< acc2.getBalance();

   cout << "\n\nEnter withdraw amount for account2: ";
   cin >> withdrawAmount;
   cout<<"\n"<<"\n";
   acc2.withdraw( withdrawAmount );

  cout << "Account 1 "<<endl<<"Name: " << acc1.getName() <<endl<< "balance: "<< acc1.getBalance();
  cout<<"\n"<<"\n";
   cout << "Account 2 "<<endl<<"Name: " << acc2.getName() << endl<<"balance: "<< acc2.getBalance();

   return 0;
}
