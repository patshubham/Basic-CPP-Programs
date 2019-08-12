#include<iostream.h>
#include<conio.h>
class temp
{
private:
  float f;
 public:
friend void convert(temp ob);
 temp()
 {
 f=100;
 }
 void getdata()
 {
 cout<<"Enter temp in Fahrenheit";
 cin>>f;
 }
 };
 void convert(temp ob)
   {
    float c=(5*(ob.f-32))/9;
     cout<<"temp in celsius is"<<c;
   }
 void main()
   {
   clrscr();
   temp ob1;
   ob1.getdata();
   convert(ob1);
      getch();
   }