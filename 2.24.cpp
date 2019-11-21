  #include <iostream>
  using namespace std;
  
  int main()
{
	int a,b,sum;
	cout<<"enter two numbers: ";
	cin>>a>>b;
	sum=a+b;
	if(a%2==0)
	{
		cout<<"integer a is even."<<endl;
	}
	else
	{
		cout<<"integer a is odd."<<endl;
	}
	if(b%2==0)
	{
		cout<<"integer b is even."<<endl;
	}
	else
	{
		cout<<"integer b is odd."<<endl;
	}
	if(sum%2==0)
	{
		cout<<"sum is even."<<endl;
	}
	else
	{
		cout<<"sum is odd. "<<endl;
	}
	return 0;
}            
