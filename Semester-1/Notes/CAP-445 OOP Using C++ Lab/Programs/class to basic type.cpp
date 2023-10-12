/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
class classtobasic

{

int marks;

public:

classtobasic(int x)

{

marks=x;

}

operator int()//casting operator or conversion function

{

return(marks +100);
}
};
int main()

{

int marks1;

marks1=233;

classtobasic object(marks1); 
marks1=object;//calling conversion method cout<<Marks are"<<marks1; 
cout<<"Marks are "<<marks1;
return 0;

}