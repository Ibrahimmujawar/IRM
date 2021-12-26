/* WAP to input price,qty and create a fuction calculate()
 with arguments which accepts the price and qty and calculates Bill amount.
 Return the bill ammount. Display Total. */
 
 #include<iostream>
 using namespace std;
 
  float calculate(float price,int qty)
  
  {
 
  	float billamount=price*qty;
  	return billamount;
  }
  
  int main()
{    

	float r=calculate(1530.88,13);
	cout<<"the total amount ="<<r;
	
	
	return 0;
 } 
