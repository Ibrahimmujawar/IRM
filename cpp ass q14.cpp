//WAP to display even and odd values from the given range.

#include<iostream>


using namespace std;
int  findbyEven(int l,int m)
{
	for(int i=l;i<m;i++)
	{
	if(i%2==0)
	{
	   cout<<"\t"<<i;
	}
	}

}

int  findbyOdd(int l,int m)
{
	for(int i=l;i<m;i++)
	{
	if(i%2!=0)
	{
	   cout<<"\t"<<i;
	}
	}

}

	
int main()
{
	cout<<"The Even numbers are";
	findbyEven(5,30);

		cout<<" \nThe Odd numbers are";
	findbyOdd(5,30);
}



