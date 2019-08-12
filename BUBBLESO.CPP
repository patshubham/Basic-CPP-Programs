#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int temp;
int ar[10];
cout<<"Enter 10 elements to be sorted";
for(int i=0;i<=9;i++)
      {
      cin>>ar[i];
      }
      for(int k=1;k<10;k++)
      {
	 for(int j=0;j<(10-k);j++)
	 {
	 if(ar[j]>ar[j+1])
	 {
	 temp=ar[j];
	 ar[j]=ar[j+1];
	 ar[j+1]=temp;
	 }
	 }
	 }
       cout<<"The sorted array is /n";
       for(int n=0;n<=9;n++)
       {
       cout<<ar[n]<<endl;
       }
       getch();
       }

