#include<iostream.h>
#include<conio.h>
class complex
{
  int n1,n2;
  public:
  void operator-()
  {
    n1=-n1;
    n2=-n2;
   }
   void input()
   {
   cout<<"Enter two numbers";
   cin>>n1>>n2;
   }
   void disp()
   {
   cout<<"Opposite of numbers is "<<n1<<"\t"<<n2;
   }
   };
  void main()
  {
   clrscr();
   complex ob;
   ob.input();
   -ob;
   ob.disp();
   getch();
   }