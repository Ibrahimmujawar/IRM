#include<iostream>
using namespace std;

int main()
{
  	int n=5362,rev=0,rem;
  	int p=n;
  	while(n!=0)
  	{
	  
  	rem=n%10;
  	rev=rev*10+rem;
  	n=n/10;

  }
    	cout<<"the reverse of the number "<<p<<" is "<<rev;
}
