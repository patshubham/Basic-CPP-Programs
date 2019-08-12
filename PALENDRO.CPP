#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
void main()
{
clrscr();
cout<<"Enter the string"<<endl<<"\t\t\t";
char st[10],temp,orig[10];
gets(st);
strcpy(orig,st);
int len=strlen(st);
int j=len-1;
for(int i=0;i<(len/2);i++)
   {
   temp=st[i];
   st[i]=st[j];
   st[j]=temp;
   j--;
   }
if(strcmp(st,orig)==0)
{
cout<<"it is palendrome";
}
else
cout<<"it is not palendrome";
getch();
}
