/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream>
#include<string>
using namespace std;
class sum
{
int a,b;
public:
void input()
{
cin>>a;
cin>>b;
}
void output()
{
cout<<"AVG : " <<(a+b)/2;
}
};

int main()
{
sum s1;
s1.input();
s1.output();
return 0;
}

