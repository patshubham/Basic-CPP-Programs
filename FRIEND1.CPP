#include<iostream.h>
#include<conio.h>
class digit
{
private:
int n1,n2;
public:
void input();
void display();
friend void add(digit ob);
};
void digit::input()
{
   cout<<"Enter first no:";
   cin>>n1;
   cout<<"Enter second no:";
   cin>>n2;
   }
   void digit::display()
   {
   cout<<"NO1="<<n1;
   cout<<"NO2="<<n2;
   }
   void add(digit ob)
   {
      int sum=ob.n1+ob.n2;
      cout<<"Addition ="<<sum;
      }
      void main()
      {
      clrscr();
	  digit d1;
	  d1.input();
	  d1.display();
	  add (d1);
	  getch();
	  }
