#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
float a[5]={10.2,3.9,4.6,6.9,5.5};
float *ptr,sum=0;
ptr=a;
cout<<"\nstarting address \t size \t ending address \t sum";
for(int i=0;i<=5;i++)
{
sum=sum+(*ptr);
cout<<"\n"<<ptr<<"\t\t"<<sizeof(*ptr)<<"\t";
ptr=ptr+1;
cout<<ptr<<"\t\t"<<sum;
}
getch();
}
