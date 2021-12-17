#include<iostream>
using namespace std;
int main()
{
	int start,end;
	int sum=0;
	cout<<"enter the lower limit of range"<<endl;
	cin>>start;
	cout<<"enter the upper limit of range"<<endl;
	cin>>end;
	for(int i=start;i<=end;i++)
	{
		sum=sum+i;
	}
	cout<<"the addition of the numbers is "<<sum;
}
