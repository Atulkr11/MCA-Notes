/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <fstream>

using namespace std;


int main(){
int position;
ofstream outfile;

outfile.open("Test.txt", ios::out);

outfile.write("This is a simple.", 17);

position = outfile.tellp();

cout<<"Current position of pointer is : " << position << endl;

outfile.seekp(position - 8);

outfile<<"\n example of seekp() in c++.";

outfile.close();

return 0;
}