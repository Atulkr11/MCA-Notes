/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
template <class T>
class MCA{
public:T a,b;
T add(T x,T y)
{a=x;b=y;
return(a+b);}
};
int main(){
MCA<int>ob; cout<<ob.add(5,10)<<endl;
MCA<double>ob1;cout<<ob1.add(2.3,7.6);
}