#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
void main()
  {
    clrscr();
    char st[100],temp;
    gets(st);
    int len=strlen(st);
    int j=len-1;
    int c=0;
     char x='-';
    for(int i=0;i<len;i++)
    {
      if(st[i]==' ')
      st[i]=x;
       c++;
       }
       cout<<"Number of spaces is"<<c;
       for(i=0;i<(len/2);i++)
   {
   temp=st[i];
   st[i]=st[j];
   st[j]=temp;
   j--;
   }
cout<<"Reversed string is"<<"\t"<<st;
getch();
}
