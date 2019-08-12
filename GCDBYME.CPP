#include<iostream.h>
#include<conio.h>
class gcd
{
int n1,n2;
 public:
 void getdata()
   {
     cout<<"Enter two numbers";
     cin>>n1>>n2;
    }
 void gcdop()
 {
     while(n1!=n2)
     {
       if(n1>n2)
       n1=n1-n2;
       else
       n2=n2-n1;
       }
       }
  void print()
   {
    cout<<"GCD of the nos is"<<n1;
    }
    };
    void main()
    {
    clrscr();
       gcd ob;
       ob.getdata();
       ob.gcdop();
       ob.print();

       getch();
       }
