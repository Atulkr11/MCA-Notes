/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
class sum
{
int a,b;
public:
void input(int x, int y)
{
a=x;
b=y;
}
void output()
{
cout<<"Sum : " <<a+b;
}
};

int main()
{
int k,z;
cout<<"enter the value of z"<<endl;
cin>>z;
cout<<"enter the value of k "<<endl;
cin>>k;

sum s1;
s1.input(z,k);
s1.output();
return 0;
}

