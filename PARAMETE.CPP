#include<iostream.h>
#include<conio.h>
class ratio
{
 int num,den;
 public:
 ratio(int x ,int y)
    {
    num=x;
    den=y;
    }
    void getdata()
    {
      cout<<"Enter numerator & denominator";
      cin>>num>>den;
      }
      void convert()
      {
      float a= (float)num/den;
      cout<<"The ratio is"<<a;
      }
    void inverse()
    {
       int temp;
       temp=num;
       num=den;
       den=temp;
       float i= (float)num/den;
       cout<<"Ratio of inverse is"<<i;
       }
    };
    void main()
    {
      clrscr();
      int x,y;
      cout<<"Enter two numbers";
      cin>>x>>y;
      ratio ob1(x,y);
      ob1.convert();
      ob1.inverse();
      getch();
      }


