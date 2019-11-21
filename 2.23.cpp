#include <iostream>
using namespace std;

int main()
{
	int p,q,r,s,t;
	cout<<"enter values of integers: ";
	cin>>p>>q>>r>>s>>t; 
	
	if(p>q&&p>r&&p>s&&p>t)
	{
		cout<<"Largest is: "<<p<<endl;
    }
    if(q>p&&q>r&&q>s&&q>t)
	{
	cout<<"Largest is: "<<q<<endl;
    }
    if(r>p&&r>q&&r>s&&r>t)
	{
	cout<<"Largest is: "<<r<<endl;
    }
    if(s>p&&s>r&&s>q&&s>t)
	{
	cout<<"Largest is: "<<s<<endl;
    }
    if(t>p&&t>r&&t>s&&t>q)
	{
	cout<<"Largest is: "<<t<<endl;
    }
    if(p<q&&p<r&&p<s&&p<t)
	{
    	cout<<"Smallest is: "<<p<<endl;
	}
	 if(q<p&&q<r&&q<s&&q<t)
	 {
    	cout<<"Smallest is: "<<q<<endl;
	}
	 if(r<q&&r<p&&r<s&&r<t)
	 {
    	cout<<"Smallest is: "<<r<<endl;
	}
	 if(s<q&&s<r&&s<p&&s<t)
	 {
    	cout<<"Smallest is: "<<s<<endl;
	}
	 if(t<q&&t<r&&t<s&&t<p)
	{
    	cout<<"Smallest is: "<<t<<endl;
	}
	return 0;
}
