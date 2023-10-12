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
string srg;

ifstream inFile("first.txt",ios::in); // From data will be copied

ofstream outFile("second.txt",ios::out); // data to be copied

while ( getline (inFile,srg) )
{
outFile<<srg<<'\n';
}

inFile.close();
outFile.close();

ifstream openFile("second.txt",ios::in);

while ( getline (openFile,srg) )
{
cout << srg <<endl;
}
openFile.close();

return 0;
}