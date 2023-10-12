/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream>
#include<fstream>
#include<stdlib.h>

using namespace std;

int main()
{
int roll;
char name[30];
char c;
ofstream outFile("clients.dat",ios::app);
ifstream inFile("clients.dat");
if(!outFile)
{
cout<<"File could not be opened" <<endl;
exit(1);
}

while (true)
{
cout<<"Enter roll number and name \n";
cin>>roll>>name;

outFile<<roll<<' '<<name<<'\n';

cout<<"Do you want to continue Y/N\n";
cin>>c;
if(c=='Y' || c =='y'){}
else
{
break;
}
}

outFile.close();

cout<<"Done\n";

string srg;
cout<<"Contents of files:- \n";
if (inFile.is_open())
{
while ( getline (inFile,srg) )
{
cout << srg <<endl;
}
inFile.close();
}
else
{
cout << "File opening is fail."<<endl;
}
return 0;
}