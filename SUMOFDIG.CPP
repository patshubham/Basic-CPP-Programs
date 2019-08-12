#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
 int n,i,sum=0;
 cout<<"Enter the number";
 cin>>n;
 while(n>0)
 {
   i=n%10;
   sum=sum+i;
   n=n/10;
   }
   cout<<"The sum of the digits of the numbers is "<<sum;
   getch();
   }