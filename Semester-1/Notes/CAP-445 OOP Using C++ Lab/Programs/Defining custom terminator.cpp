/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <exception.h>
#include <iostream.h>
using namespace std;
//defining custom terminator
void myhandler();
int main(){
set_terminate(myhandler);
try {
cout << "Inside try block\n";
throw 100;
}
catch (char a){
cout << "Inside catch block\n";
}
return 0;
}
void myhandler(){
cout << "Inside new terminate handler\n";
abort();
}