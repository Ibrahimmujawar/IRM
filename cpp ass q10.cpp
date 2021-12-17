//WAP to create a function searcharray() which finds the array value is present or not.
#include<iostream>
using namespace std;
      void searcharray()
      {
      	int skey,i;
      	int d=0;
      	int a[5]={22,34,56,78,90};
      	cout<<"enter a number to search ";
         cin>>skey;
            for( i=0;i<5;i++)
           {
          if(skey==a[i])
        {
        cout<<"The array value " <<skey<<" is present"<<endl;
         d++;
        }
        }
        if(d==0)
        {
          cout<<"array value not present";
        }  
	  }
int main()
{
	   
	   searcharray();


}
