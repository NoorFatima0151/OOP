#include <iostream>
using namespace std;

main()
{
	int a,b,c,d;
	const int pi=3.14159;
	cout<<"enter radius: ";
	cin>>a;
	b=2*a;
	cout<<"Diameter of circle is: "<<b<<endl;
	c=pi*a^2;
	cout<<"Area of circle: "<<c<<endl;
	d=2*pi*a;
	cout<<"Circumference of circle: "<<d<<endl;
	return 0;
}
