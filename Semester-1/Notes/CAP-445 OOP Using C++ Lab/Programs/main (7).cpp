/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
Constructor Destructor

#include <iostream>

using namespace std;

int count=0;


class num{
    public:
    num(){
count++;
cout<<"This is the time when constructor is called for object number "<<count<<endl;
}

    ~num(){
        cout<<"This is the time when my destructor is called for object number "<<count<<endl;
        count--;
}
};

int main(){
        cout<<"We are inside our main function"<<endl;
        cout<<"Creating first object n1"<<endl;
    num n1;
{
        cout<<"Entering this block"<<endl;
        cout<<"Creating two more objects"<<endl;
    num n2, n3;
        cout<<"Exiting this block"<<endl;
}
        cout<<"Back to main"<<endl;
return 0;
}