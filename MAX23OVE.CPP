#include<iostream.h>
#include<conio.h>
int max(int n1, int n2)
{
int ans;
if(n1>n2)
ans=n1;
else
ans=n2;
return ans;
}

int max(int n1,int n2 ,int n3)
{
int ans;
if((n1>n2)&&(n1>n3))
ans=n1;
if((n2>n3)&&(n2>n1))
ans=n2;
if((n3>n2)&&(n3>n1))
ans=n3;
return ans;
}
main()
{
clrscr();
int n1,n2,n3;
cout<<"Enter 2 nos";
cin>>n1>>n2;
int ans=max(n1,n2);
cout<<"Max of 2nos is"<<ans;
cout<<"Enter 3 nos";
cin>>n1>>n2>>n3;
ans=max(n1,n2,n3);
cout<<"Max of 3nos is"<<ans;
getch();
}