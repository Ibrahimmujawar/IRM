//WAP to swap the two numbers without using temperory variable.
#include<iostream>
#include<String.h>

using namespace std;

int  swap(int a,int b)
{
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"\n"<<a<<"\t"<<b;
}
int main()
{
	cout<<"the swapped numbers are";
	int x=swap(10,30);
	
}
