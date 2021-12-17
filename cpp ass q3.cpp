#include<iostream>
using namespace std;
int main()
{
	int n1=1056;
	int n2=2850;
	int n3=2500;
	if(n1>n2&&n1>n3)
	{
		cout<<"the greatest number is"<<n1<<endl;
	}
	else if(n2>n3)
	{
		cout<<"the greatest number is "<<n2<<endl;
	}
	else
		cout<<"the greatest number is "<<n3<<endl;
}
