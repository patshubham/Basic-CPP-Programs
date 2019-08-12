#include<iostream.h>
#include<conio.h>
void main()
    {
      clrscr();
      int f0=0,f1=1,n;
      cout<<"Enter how many series";
      cin>>n;
      cout<<"The fibbonacci series is "<<f0<<"\t"<<f1;
      int f2,i=1;
      while(i<=n)
      {
	f2=f0+f1;
	f0=f1;
	f1=f2;
	cout<<"\t"<<f2;
	i++;
	}
     getch();
     }