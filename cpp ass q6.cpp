#include<iostream>
using namespace std;
int main()
{
	
	int start,end;
	int flag=0;
	int count=0;
	cout<<"enter the lower limit of range"<<endl;
	cin>>start;
	cout<<"enter the upper limit of range"<<endl;
	cin>>end;
	while (start<end)
{
flag = 0;
for(int i = 2; i <= start/2; ++i)
{
	count++;
if(start % i == 0)
{
flag = 1;

break;
}
}
if (flag == 0)
cout << start <<""<<endl;
++start;

}

cout << endl;
cout<<"the total prime numbers are"<<count;
return 0;
}

