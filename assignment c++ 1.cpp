//Write a C program to find area of circle, triangle and rectangle
#include<iostream>
#include<math.h>

using namespace std;
int main()
{
float b=0,h=0,l=0,r=0,area=0;
int choice;
cout<<"Choose a shape to find its area:";
cout<<"\n1.Circle";
cout<<"\n2.Triangle";
cout<<"\n3.Rectangle";
cout<<"\nEnter Your Choice :";
cin>>choice;

switch(choice)
{
case 1:
{
    cout<<"\nEnter the radius of the circle: ";
    cin>>r;
    area=3.14*r*r;
    cout<<"Area of Circle = "<<area;
    cout<<" sq.units"<<endl;
    break;
}
case 2:
{
   cout<<"\nEnter base and height of the triangle:";
   cin>>b>>h;
   area=0.5*b*h;
   cout<<"Area of Triangle = "<<area;
   cout<<" sq. units"<<endl;
   break;
}
case 3:
{
     cout<<"\nEnter the length and breadth of rectangle:";
     cin>>l>>b;
     area=l*b;
     cout<<"Area of Rectangle = "<<area;
     cout<<" sq. units"<<endl;
     break;
}
default: cout<<"\n Invalid Choice!";
break;
}
return 0;
}

