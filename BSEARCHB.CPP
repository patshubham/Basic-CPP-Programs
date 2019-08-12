#include<iostream.h>
#include<conio.h>
void main()
{
  clrscr();
  int a[10],i=0;
  cout<<"Enter nos in the array";
  while(i<10)
  {
  cin>>a[i];
  i++;
  }
   for(int j=1;j<=10;j++)
   {
     for(int i=0;i<=(10-j);i++)
     {
	if(a[i]>a[i+1])
	{
	  int temp=a[i+1];
	  a[i+1]=a[i];
	  a[i]=temp;
	 }
	 }
	 }
	 i=0;
	 cout<<"The sorted array is";
	 while(i<10)
 {
	   cout<<"\t"<<a[i];
	   i++;
	 }
	 int search;
	 cout<<"Enter no to be searched";
	 cin>>search;
	 int low=0;
	 int high=9;
	int mid=(low+high)/2;
	 while((a[mid]!=search)&&(high>low))
	 {

	 if(search<a[mid])
	 high=mid-1;
	 else
	 low=mid+1;
	 mid=(high+low)/2;
	 }
	 if(a[mid]==search)
	    cout<<"No not found";
	else
	   cout<<"foumd";
	getch();

   }



