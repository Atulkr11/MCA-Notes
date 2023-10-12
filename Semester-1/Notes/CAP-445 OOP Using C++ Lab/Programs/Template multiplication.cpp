/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

template<typename t1,typename t2>
void mul(t1 a,t2 b)
{
cout<<"mul="<<a*b<<endl;
}

int main()
{
int a,b;
float x,y;
cout<<"\nEnter two integer data: ";
cin>>a>>b;
cout<<"\nEnter two float data: ";
cin>>x>>y;
mul(a,b);
mul(x,y);
mul(a,x);
mul(a,y);
mul(b,x);
mul(b,y);

return 0;
}