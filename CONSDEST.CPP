#include<iostream.h>
#include<conio.h>
class num
{
  int n1,n2;
 public:
 num()
 {
 n1=10,n2=10;
 }
 void getdata()
 {
 cout<<"Enter two numbers";
 cin>>n1>>n2;
 }
 void add()
   {
    int s=n1+n2;
     cout<<"Sum="<<s;
   }
  };
 void main()
   {
   clrscr();
   num ob;
   ob.getdata();
   ob.add();
   getch();
   }