/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

class Display_info{
public:

int roll;
float age;
char gender;

void input(int p, float q, char r){
roll=p;
age=q;
gender=r;
}

void display(){
cout<<"Roll number is : "<<roll<<endl;
cout<<"age is : "<<age<<endl;
cout<<"gender is : "<<gender<<endl;
}

};


int main()
{
int roll;
float age;
char gender;


Display_info d[4];

for(int i=0; i<5; i++){
cout<<"Enter the roll number : "<<endl;
cin>>roll;
cout<<"Enter the age : "<<endl;
cin>>age;
cout<<"Enter the gender : "<<endl;
cin>>gender;
d[i].input(roll, age, gender);
}

for(int i=0; i<5; i++){
d[i].display();
}

return 0;
}