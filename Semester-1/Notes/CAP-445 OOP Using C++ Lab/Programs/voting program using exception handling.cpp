/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream>
using namespace std;

class Voting
{
public:
void vote()
{
int a;
try
{
cout << "Enter Your Age : ";
cin >> a;
if (a >= 18)
{
cout << "You are eligible for casting vote";
}
else{
throw a;
}

}
catch(int a)
{
throw;
}
}
};

int main()
{
Voting v;
try
{
v.vote();
}
catch(int a)
{
cout << "Your age is " << a << " so you are not eligible for voting";
}
return 0;
}