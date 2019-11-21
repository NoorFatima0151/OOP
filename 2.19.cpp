#include <iostream>
using namespace std;
 
main()
{
	int x,y,z;
	cout<<"input three different integers: ";
	cin>>x>>y>>z;
	cout<<"sum is: "<<x+y+z<<endl;
	cout<<"product is: "<<x*y*z<<endl;
	cout<<"average is: "<<x+y+z/3<<endl;
	if(x>y&&x>z){
		cout<<"largest is: "<<x<<endl;
	}
    if(y>x&&y>z){
		cout<<"largest is: "<<y<<endl;
	}
	if(z>x&&z>y){
		cout<<"largest is: "<<z<<endl;
	}
	if(x<y&&x<z){
		cout<<"smallest is: "<<x<<endl;
	}
		if(y<x&&y<z){
		cout<<"smallest is: "<<y<<endl;
	}
		if(z<x&&z<y){
		cout<<"smallest is: "<<z<<endl;
	}
}
