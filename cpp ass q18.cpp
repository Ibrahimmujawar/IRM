/* 18 WAP to create a class population with data members city and totalpopulation & member functions getdata()
 with arguments which accepts the values.
 Create 3 objects and Display the name of city which has maximum number of population.*/
 
 #include<iostream>
#include<String.h>

using namespace std;
class Population
{
	public:
	char City[20];
	int TPopulation;
	
	void getdata(char City[],int TPopulation)
	{
		strcpy(this->City,City);
		this->TPopulation=TPopulation;
	}
	
	void display()
	
	{
		cout<<"\n"<<this->City<<"\t"<<this->TPopulation;
	}
};
 Population compare( Population x, Population y, Population z);

int main()
{
	Population P1,P2,P3;
	P1.getdata("Mumbai",4500000);
    P2.getdata("Delhi",180000);
    P3.getdata("Bangalore",3800000);
    P1.display();
    P2.display();
    P3.display();
   
     Population ans=compare(P1,P2,P3);
     
      {
      	cout<<endl<<"City having Maximum Population is ";
      	ans.display();
	  }
	  return 0;
}

  Population compare( Population x, Population y, Population z)
   {
   	if(x.TPopulation>y.TPopulation&&x.TPopulation>z.TPopulation)
   	return x;
   	else if(y.TPopulation>z.TPopulation)
   	return y;
   	else 
   	return z;
   }



