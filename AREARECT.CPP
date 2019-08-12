#include<iostream.h>
#include<conio.h>
float area(int n1)
{
float ans;
ans=3.14*n1*n1;
return ans;
}
float area(int n1,int n2)
{
float ans;
ans=n1*n2;
return ans;
}
main()
{
clrscr();
int n1,n2;
cout<<"Enter radius";
cin>>n1;
float ans=area(n1);
cout<<"Area of circle is"<<ans;
cout<<"Enter length and breadth";
cin>>n1>>n2;
ans=area(n1,n2);
cout<<"Area of rectangle is"<<ans;
getch();
}
