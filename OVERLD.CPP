#include<iostream.h>
#include<conio.h>
class b
{
  protected:
  int n1;
  public:
  void inputb()
  {
      cout<<"Enter n1";
      cin>>n1;
      }
    };
    class d:public b
    {
    int n2;
    public:
    void inputd()
    {
    cout<<"Enter n2";
    cin>>n2;
    }
    void add()
    {
    int c=n1+n2;
    cout<<"sum="<<c;
    }
    };
    void main()
    {
    clrscr();
    d ob;
    ob.inputb();
    ob.inputd();
    ob.add();
    getch();
    }