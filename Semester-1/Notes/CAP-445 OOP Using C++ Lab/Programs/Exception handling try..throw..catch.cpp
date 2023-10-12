/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
int a, b, c;
try
{
cout << "Enter Two value : ";
cin >> a >> b;
if (b == 0)
{
throw b;
}
c = a / b;
cout << "result is :" << c;
}
catch (int b)
{
std::cerr << "a number cannot be devided by 0 : " << '\n';
}

return 0;
}