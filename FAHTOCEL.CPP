#include<iostream.h>
#include<conio.h>
class temp
{
  int f;
 public:
 temp()
 {
 f=100;
 }
 void getdata()
 {
 cout<<"Enter temp in Fahrenheit";
 cin>>f;
 }
 void convert()
   {
    float c=(5*(f-32))/9;
     cout<<"temp in celsius is"<<c;
   }
  };
 void main()
   {
   clrscr();
   temp ob;
   ob.getdata();
   ob.convert();
   getch();
   }