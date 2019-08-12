#include<iostream.h>
#include<conio.h>
void swap(int *,int *);
main()
{
clrscr();
int n1,n2;
cout<<"Enter 2 nos";
cin>>n1>>n2;
swap(&n1,&n2);
cout<<"n1="<<n1<<"\n";
cout<<"n2="<<n2;
getch();
return 1000;
}

void swap(int *x, int *y)
{
    int c;
    c=*x;
    *x=*y;
    *y=c;
    }
