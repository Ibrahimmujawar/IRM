#include<iostream>
using namespace std;
int main()
{
	int a[7]={50,11,88,55,30,15,48};

	for(int i=0;i<7;i++)
	{
		for(int j=0;j<7-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
		    	int temp=a[j];
				    a[j]=a[j+1];
				    a[j+1]=temp;
			}
		}
	}
	cout<<"the array values in assending order are"<<endl;
	for(int i=0;i<7;i++)
	{
		cout<<a[i]<<endl;
	}
	return 0;
}

