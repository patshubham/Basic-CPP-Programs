#include<iostream.h>
#include<conio.h>
#include<math.h>
float area(int a ,int b,int c)
{ float area;

  float s=(a+b+c)/2;
  float h=s*(s-a)*(s-b)*(s-c);
  area=sqrt(h);
  cout<<"The perimeter of triangle is"<<(a+b+c);
  return area;
  }
  void main()
  {
    clrscr();
    float a,b,c;
    cout<<"Enter sides of triangle";
    cin>>a>>b>>c;
    float ar= area(a,b,c);
    cout<<"The area of triangle is"<<ar;
    getch();
    }
