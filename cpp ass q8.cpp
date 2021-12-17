//WAP to display the minimum value among the array values.
#include<iostream>
using namespace std;
int main()
{
	int a[5]={23,45,11,45,15};
    int min=a[0];
       for(int i=0;i<5;i++)
       {
       	if(min>a[i])
       	{
       		min=a[i];
		   }
	   }
  	   
	cout<<"the minimum array value is"<<min;
}

