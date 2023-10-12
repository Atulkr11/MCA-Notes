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
int regno;
MCA()
{
regno=100; //regno =100
}
void operator=(int p)
{
regno=p;
}
void display()
{
cout<<"registration number is "<<regno;
}
};

int main()
{
int x=5000;
MCA nitin;
nitin=x; //(basic to class type conversion)operator overloading (primitve value is assigned to object)
nitin.display();
return 0;
}
    