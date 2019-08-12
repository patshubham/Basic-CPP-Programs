#include<iostream.h>
#include<conio.h>
int bsearch(int[],int);
main()
{clrscr();
int a[5],i,key;
for(i=0;i<=4;i++)
{
cout<<"Enter elements";
cin>>a[i];
}
cout<<"enter no to be searched";
cin>>key;
int pos=bsearch(a,key);
if (pos==-1)
{
cout<<"No not found";
}
else
{
cout<<"No f
ound at position"<<pos;
getch();
}
}
int bsearch(int a[],int key)
{
int start=0;
int end=4,mid;
while(start<=end)
{
mid=(start+end)/2;
if(a[mid]==key)
{
return mid;
}
else
{
if(key<a[mid])
{
end=mid-1;
}
else
{
start=mid+1;
}
}
}
return -1;
}
