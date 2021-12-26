
/* 13 Write a menu driven program to perform 
1. Add Book [Book No,Book Name, Book price]
2. Display Book 3. Search Book 4. Display all books 5. Exit.*/

#include<iostream>
#include<string.h>

using namespace std;

class book
{
	public:
	int bookno;
	char bookname[20];
	float price;
	
	void addbook(int bookno,char bookname[],float price)
	{
		this->bookno=bookno;
		strcpy(this->bookname,bookname);
		this->price=price;
	}
	
	void show()
	{
		cout<<"\n"<<this->bookno<<"\t"<<this->bookname<<"\t"<<this->price;
	}

};


 book searchbook(book x,book y,book z);
int main()
{
	book b1,b2,b3;
	b1.addbook(120,"python automation",1580.30f);
	b2.addbook(121,"java programming",800.50f);
	b3.addbook(331,"android development",2000.80f);
	
	b1.show();
	b2.show();
	b3.show();
	book ans=searchbook(b1,b2,b3);
	{
	cout<<"book found";
	ans.show();
	}

	


	return 0;
	
}
 book searchbook(book x,book y,book z)
   {
  
    	int skey=331;
   	cout<<" \nsearching  book no "<<skey;

   if(skey==x.bookno)
   return x;
   
   else if(skey==y.bookno)
   return y;
   else if(skey==z.bookno)
   return z;
   else  if(skey!=x.bookno&&skey!=y.bookno&&skey!=z.bookno)
   cout<<"book not found";
   
  }
  
  
 
