/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

// An example of explicit conversion

#include <iostream>
using namespace std;

int main()
{
char x;
char b='a';
int y=5;

x = b+(char)y;

cout << "Sum = " << x;

return 0;
}
