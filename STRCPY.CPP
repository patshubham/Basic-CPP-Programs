#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
void main()
{
  char a[100],b[100];
  cout<<"Enter a sentence";
  gets(a);
  strcpy(b,a);
  cout<<b;
  getch();
  }