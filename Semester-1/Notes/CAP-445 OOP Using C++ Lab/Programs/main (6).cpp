/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
class test
{
int a,b;
public:
test()
{
cout<<"Welcome"<<endl;
}
void input(int x, int y)
{
a=x;
b=y;
}
void output(void)
{
cout<<"SUM="<<(a+b)<<endl;
}

};
int main()
{
test t1;
t1.output();
return 0;
}
