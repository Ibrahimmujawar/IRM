/* 17 WAP to create a class branch with data members branch ID, branch Name, Branch City and member functions  
as getdata() and Display()*/
#include<iostream>
#include<String.h>

using namespace std;

class branch
{
	public:
	int branchid;
	char branchname[20];
	char city[20];
	
	void getdata(int branchid,char branchname[],char city[])
	{
		this->branchid=branchid;
		strcpy(this->branchname,branchname);
		strcpy(this->city,city);
	}
	
	void display()
	{
		cout<<"\n"<<this->branchid<<"\t"<<this->branchname<<"\t"<<this->city;
	}
};

int main()
{
	branch b1,b2,b3;
	b1.getdata(144,"Matthew","Newyork");
	b2.getdata(273,"John","Los santos");
	b3.getdata(144,"Luke","California");
	b1.display();
	b2.display();
	b3.display();
	
	return 0;
}
