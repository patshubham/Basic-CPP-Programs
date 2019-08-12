  #include<iostream.h>
  #include<conio.h>
  class num
 {
  int n1,n2;
  public:
  num operator+(num ob2)
  {
     num ob3;
     ob3.n1=n1+ob2.n1;
     ob3.n2=n2+ob2.n2;
      return ob3;
     }
     void input()
     {
     cout<<"Enter two numbers";
     cin>>n1>>n2;
     }
 void disp()
 {
 cout<<n1<<"\t"<<n2;
 }
 };
    void main()
    {
    clrscr();
    num ob1,ob2,ob3;
    ob1.input();
    ob2.input();
    ob3=ob1+ob2;
    ob3.disp();
    getch();
    }