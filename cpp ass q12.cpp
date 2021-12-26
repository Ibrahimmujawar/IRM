/*WAP to find billammount with discount. Apply discount in following conditions
1. if price of product is greater than Rs.50 then apply discount 2.5%
2. if price of product is greater than Rs.100 then apply discount 5%
3. if price of product is greater than Rs.200 then apply discount 7%*/

#include<iostream>
#include<string.h>

using namespace std;

void addprice(float price,float discount)
{
	
}

int main()
{
	float price[3]={50,190,300};
	float discount;
	int i;
	for(i=0;i<3;i++)
	{
	
	cout<<"\n product price= " <<price[i];
	
	
	if(price[i]>50&&price[i]<=100)
	{
		discount=price[i]*0.025;
		cout<<"\ntotal discount is "<<discount;
		cout<<"\nthe total billamount is "<<price[i]-discount;
	}
		else if(price[i]>100&&price[i]<=200)
	{
		discount=price[i]*0.05;
			cout<<" \ntotal discount is "<<discount;
		cout<<"\nthe total billamount is "<<price[i]-discount;
	}
	    else if(price[i]>200)
	{
		discount=price[i]*0.07;
			cout<<"\ntotal discount is "<<discount;
		cout<<"\nthe total billamount is "<<price[i]-discount;
	}
    	else
    	cout<<" \n amount is invalid";
}
}
