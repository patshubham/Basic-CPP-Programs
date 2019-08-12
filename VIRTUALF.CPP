#include<iostream.h>
#include<conio.h>
class b
{
 public:
virtual void display()
 {
 cout<<"I'm in A class";
 }
 };
 class d:public b
 {
 public:
 void display()
 {
 cout<<"I am in C class";
 }
 };
 void main()
 {
 clrscr();
 b *p,b1;
 d d1;
 p=&b1;
 p->display();
 p=&d1;
 p->display();
 getch();
 }
