//4.17
#include<iostream>
using namespace std;
int main(){
	int a=1,b;
	int x=0,y=0,z=0;
    while(a<=10){
    		cout<<"Enter a number: ";
        	cin>>b;	
			
		if(x<b){
			z==y;
			y=x;
			x=b;
		}else if(z<b){
			z=y;
			y=b;
		}else if(y<b){
			z=b;
		}
        a++;
    }
        cout<<"First Maximum Number is: "<<x<<endl;
         cout<<"Second Maximum Number is: "<<y<<endl;
          cout<<"Third Maximum Number is: "<<z<<endl;
}
