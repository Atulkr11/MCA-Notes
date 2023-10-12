/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Basic to class type conversion (converting int to object)
#include <iostream>
using namespace std;
class MCA
{
public:
string section;
MCA()
{
section="D2110";
}
void operator=(string s)
{
section=s;
}
void display()
{
cout<<"Section is "<<section;
}
};

int main()
{
string x="D2110";
MCA nitin;
nitin=x; //(basic to class type conversion)operator overloading (primitve value is assigned to object)
nitin.display();
return 0;
}
    