//4.19
#include<iostream>
using namespace std;
int main(){
	int a=1,b;
	int x=0,y=0;
    while(a<=10){
    		cout<<"Enter 10 different Numbers: ";
        	cin>>b;	
			
		if(x<b){
			y=x;
			x=b;
		}else if(y<b){
			y=b;
		}
        a++;
    }
        cout<<"First Maximum Number is: "<<x<<endl;
         cout<<"Second Maximum Number is: "<<y<<endl;
}
