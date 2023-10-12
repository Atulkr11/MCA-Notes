/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
template<typename T>

T mul(T a, T b)
{
return a * b;

}

int main()
{
int a,b;
cout<<"1st value"<<endl;
cin>>a;
cout<<"2nd value"<<endl;
cin>>b;
cout<<"multiplies of values "<<mul(a,b);
return 0;
}



