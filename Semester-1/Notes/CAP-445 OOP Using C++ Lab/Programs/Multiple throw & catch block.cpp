/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream.h>

using namespace std;

int main()
{
int choice;

try
{
cout<<"Enter any choice: ";
cin>>choice;

if(choice == 0)
cout<<"Hello Friend!"<<endl;
else if(choice == 1)
throw (100); //throw integer value
else if(choice == 2)
throw ('x'); //throw character value
else if(choice == 3)
throw (1.23f); //throw float value
else
cout<<"Good Bye !!!"<<endl;
}
catch(int a)
{
cout<<"Integer Exception Block, value is: "<<a<<endl;
}
catch(char b)
{
cout<<"Character Exception Block, value is: "<<b<<endl;
}
catch(float c)
{
cout<<"Float Exception Block, value is: "<<c<<endl;
}

return 0;
}