#include<iostream.h>
#include<conio.h>
class student
{
protected:
char a[15];
int rn;
public:
void grl()
 {
   cout<<"Enter roll no";
   cin>>rn;
   }
   void getname()
   {
      cout<<"Enter name of student";
      cin>>a;
      }
 };
 class test:public student
 {
 protected:
 int s1,s2;
 public:
 void inputmarks()
 {
 cout<<"Enter marks of subject1 and subject2";
 cin>>s1>>s2;

 }
  };
  class sports
  {
    protected:
    int s;
    public:
    void getsports()
    {
    cout<<"Entermarks in sports";
    cin>>s;
    }
    };
 class result:public test,public sports
 {
 public:
 void print()
   {
      cout<<"roll no="<<rn;
      cout<<"\n Student name"<<a;
      cout<<"\n marks in s1 "<<s1;
      cout<<"\nMarks in s2 "<<s2;
      cout<<"\nMarksin sports"<<s;
      cout<<"\n The total marks in all subjects"<<s+s1+s2;
      }
      };

 void main()
 {
 clrscr();
 result ob;
 ob.grl();
 ob.getname();
 ob.inputmarks();
 ob.getsports();
 ob.print();
 getch();
 }