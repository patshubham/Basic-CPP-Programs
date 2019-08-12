#include<iostream.h>
#include<conio.h>
void add(int *n1,int *n2)
{
  int sum;
  sum=*n1+*n2;
  cout<<"The addition of nos is"<<sum;
  }
  void main()
  {
  clrscr();
  int a,b;
  cout<<"Enter two nos to be added";
  cin>>a>>b;
  add(&a,&b);
  getch();
  }