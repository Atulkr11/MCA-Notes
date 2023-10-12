/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

// Name of program mainreturn.cpp
#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
cout << "You have entered " << argc
<< " arguments:" << "\n";

for (int i = 0; i < argc; ++i)
cout << argv[i] << "\n";

return 0;
}