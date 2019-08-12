#include<iostream.h>
#include<conio.h>
class student
{
int rno;
char name[15];
 public:
 void getdata();
 void putdata();
 };
 void student::getdata()
     {
      cout<<"Enter roll no";
	   cin>>rno;
       cout<<"Enter name of student";
	cin>>name;
	   }
      void student::putdata()
     {
	cout<<"The roll no is";
	   cout<<rno;
       cout<<"The name of student is";
	cout<<name;
	    }

  void main()
  { student ob,s;
  clrscr();
       ob.getdata();
       ob.putdata();
       getch();
       }







