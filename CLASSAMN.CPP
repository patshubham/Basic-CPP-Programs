#include<iostream.h>
#include<conio.h>
class item
{
int itemcode,qty,rate;
char name[15];
 public:
 void getdata()
     {
      cout<<"Enter item code";
	   cin>>itemcode;
       cout<<"Enter name";
	cin>>name;
	cout<<"Enter quantity";
	cin>>qty;
	cout<<"Enter rate";
	 cin>>rate;
	   }
      void putdata()
     {
	cout<<"name of item is"<<name;
	cout<<"Item code is"<<itemcode;
	 cout<<"Quantity is"<<qty;
	cout<<"rate is"<<rate;
     }
      void amount()
   {
      int amount=qty*rate;
      cout<<"Amount="<<amount;
    }
    };
  void main()
  { item ob,s;
  clrscr();
       ob.getdata();
       ob.putdata();
       ob.amount();
       getch();
       }







