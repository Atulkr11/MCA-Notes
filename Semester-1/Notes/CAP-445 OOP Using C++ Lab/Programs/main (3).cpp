/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream>

using namespace std;

class test
{
int a,b;
public:
void input(int x,int y)
{
a=x;
b=y;
}
void output()
{
cout<<"Sum = "<<(a+b)<<endl;
}
};
int main(void)
{
test t1,t2;
t1.input(10,20);
t2.input(45,55);

t1.output();
t2.output();

return 0;
}