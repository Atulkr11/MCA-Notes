/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
class Divide
{
private:
int *x;
int *y;
public:
Divide()
{
x = new int();
y = new int();
cout<<"Enter two numbers: ";
cin>>*x>>*y;
try
{
if(*y == 0)
{
throw *x;
}
}
catch(int)
{
delete x;
delete y;
cout<<"Second number cannot be zero!"<<endl;
throw;
}
}
~Divide()
{
try
{
delete x;
delete y;
}
catch(...)
{
cout<<"Error while deallocating memory"<<endl;
}
}
float division()
{
return (float)*x / *y;
}
};
int main()
{
try
{
Divide d;
float res = d.division();
cout<<"Result of division is: "<<res;
}
catch(...)
{
cout<<"Unkown exception!"<<endl;
}
return 0;
}