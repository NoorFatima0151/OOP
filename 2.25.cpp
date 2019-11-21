#include <iostream>
using namespace std;

int main()
{
	int n,f,s;
	
	cout<<"enter numbers: ";
	cin>>n>>f>>s;
	
	if(n%s==0&&f%s==0)
	{
		cout<<"N and F are factors of S"<<endl;
	}
	else
	{
		cout<<"N and F are not factors of S"<<endl;
	}
	return 0;
}
