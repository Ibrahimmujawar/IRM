// WAP to calculate area of circle,Triangle and square.
#include<iostream>
using namespace std;

int main()
{ 
    int side,length,base,radius,height;
    float pi=3.14;
    //area of circle
    float areacircle;
	;																																											
    cout<<"enter the radius of the circle"<<endl;
    cin>>radius;
    	areacircle=pi*radius*radius;
    cout<<"the area of the circle is:"<<areacircle<<endl;
    //area of triangle
    float areatriangle;
    
    cout<<"enter the length and breadth of the triangle";
    cin>>base>>height;
    areatriangle=(base*height)/2;
    cout<<"the area of triangle is:"<<areatriangle<<endl;
    
     
     float areasquare;
    
     cout<<"enter the side of the square"<<endl;
	 cin>>side;
	 areasquare =side*side;
	 cout<<"the area of the square is:"<<areasquare<<endl;
}
