#include<iostream.h>
#include<conio.h>
inline int add(int n1, int n2)
{
return(n1+n2);
}
main()
{
clrscr();
int n1,n2,sum;
cout<<"Ennter 2nos";
cin>>n1>>n2;
sum=add(n1,n2);
cout<<"Addition of nos="<<sum;
getch();
}