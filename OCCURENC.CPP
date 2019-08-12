#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a[10]={1,2,3,4,5,5,4,3,2,1};
int count=0,n=0;
cout<<"Enter the number to be searched";
cin>>n;
cout<<"No found at position";
for( int i=0;i<=9;i++)
{
if(a[i]==n)
{
cout<<i+1<<"\t";
count++;
}
}
cout<<"The occurence of no is"<<count;
getch();
}
