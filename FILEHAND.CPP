#include<iostream.h>
#include<fstream.h>
#include<stdlib.h>
void main()
{
  const int SIZE=80;
  char line[SIZE];

  ofstream fout;
  fout.open("E:\\STUD\\Shubham\\country.txt");
  fout<<"United States Of America\n";
  fout<<"United Kingdom\n";
  fout<<"South Korea\n";
  fout<<"India\n";
  fout.close();

  fout.open("E:\\STUD\\Shubham\\capital.txt");
  fout<<"Washington D C\n";
  fout<<"London \n";
  fout<<"Seoul\n";
  fout<<"New Delhi\n";
  fout.close();

  ifstream fin1,fin2;
  fin1.open("country");
  fin2.open("capital");
  cout<<"Country \t\t\t\t Capital\n\n\n";
  for(int i=1;i<=10;i++)
  {
     if(fin1.eof()!=0)
	{
	   cout<<"Exit from country\n";
	   exit(1);
	 }
	fin1.getline(line,SIZE);
	cout<<line<<"\t";
	if(fin2.eof()!=0)
	{
		cout<<"Exit from capital\n";
		exit(1);
	 }
	fin2.getline(line,SIZE);
	cout<<line<<"\n";
	}
    }