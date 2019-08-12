#include<iostream.h>
#include<conio.h>
void gcd(int n1,int n2)
{
while(n1!=n2)
{ if (n1>n2)
      n1=n1-n2;
      else
      n2=n2-n1;
      }
      cout<<"gcd="<<n1;
      }

      void lcm(int n1,int n2)
      {
      int p=n1*n2;
      while (n1!=n2)
      {
      if(n1>n2)
      n1=n1-n2;
      else
      n2=n2-n1;
      }
      cout<<"lcm="<<(p/n1);
      }
      void main()
     {
     int n1,n2;
     cout<<"Enter 2nos";
     cin>>n1>>n2;
      lcm(n1,n2);
      gcd(n1,n2);
      getch();
      }