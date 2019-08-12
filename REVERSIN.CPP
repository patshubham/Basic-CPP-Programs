#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
void main()
{
clrscr();
cout<<"Enter the string"<<endl<<"\t\t\t";
char st[10],temp;
gets(st);
int len=strlen(st);
int j=len-1;
for(int i=0;i<(len/2);i++)
   {
   temp=st[i];
   st[i]=st[j];
   st[j]=temp;
   j--;
   }
cout<<"Reversed string is"<<"\t"<<st;
getch();
}
