  #include<iostream.h>
  #include<conio.h>
  class complex
 {
  int i,j;
  public:
  complex operator+(complex c2)
  {
     complex c3;
     c3.i=i+c2.i;
     c3.j=j+c2.j;
      return c3;
     }
     void input()
     {
     cout<<"Enter real part";
     cin>>i;
     cout<<"Enter imaginary part";
     cin>>j;
     }
 void disp()
 {
 cout<<i<<"+"<<j<<"i";
 }
 };
    void main()
    {
    clrscr();
    complex c1,c2,c3;
    c1.input();
    c2.input();
    c3=c1+c2;
    c3.disp();
    getch();
    }