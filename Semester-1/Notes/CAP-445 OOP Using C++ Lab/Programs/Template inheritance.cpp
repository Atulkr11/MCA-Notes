/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
template<typename T>
class demo{
public: T a,b;
void show()
{
cout<<"Enter a and b value"<<endl;
cin>>a>>b;
}};
template<typename T1>
class demo1 : public demo<T1>
{
public:
void display()
{
demo <int>ob;
ob.show();
cout<<ob.a<<ob.b;
}};
int main(){
demo1 <int> ob;
ob.display();
return 0;
}