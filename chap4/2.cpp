//4.14
#include<iostream>
using namespace std;
int main(){
	int acno;
	float bb,tchrg,tcred,cl,nb;
	while(acno!=-1){
		cout<<"Enter the Account Number(-1 to quite) :";
		cin>>acno;
		cout<<"Enter the Begining Balance :";
		cin>>bb;
		cout<<"Enter Total Charges :";
		cin>>tchrg;
		cout<<"Enter Total Credits :";
		cin>>tcred;
		cout<<"Enter Credits Limit :";
		cin>>cl;
		nb= (bb+tchrg)-tcred;
		cout<<"New Balance is :"<<nb<<endl;
		cout<<"Account Number is :"<<acno<<endl;
		cout<<"Credit Limit :"<<cl<<endl;
		if(cl<nb){
			cout<<"Credit Limit Exceeded."<<endl;;
		}
		cout<<"Enter Account Number (-1 to quit): ";
	    cin>>acno;
	}
	
	
	
}
