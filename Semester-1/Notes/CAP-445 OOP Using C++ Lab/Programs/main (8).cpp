/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
Constructor Destructor

#include<iostream>
using namespace std;
int count=0;
class test{
public:
test(){
count++;
cout<<"constructor number: "<<count<<endl;
}
~test(){
cout<<"destructor number: "<<count<<endl;
count--;
}
};
int main(){
test n1;
{

test n2;
{
test n3;
}
return 0;
}
}

