/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

    class Student
    {
    public:

    int roll;
    float age;
    char gender;

    void input(int p, float q, char r)
{
    roll=p;
    age=q;
    gender=r;
}

    void display()
{
    cout<<"Roll number is : "<<roll<<endl;
    cout<<"Age is : "<<age<<endl;
    cout<<"Gender is : "<<gender<<endl;
}

};


    int main()
{
    int roll;
    float age;
    char gender;

    cout<<"Enter the roll number : "<<endl;
    cin>>roll;
    cout<<"Enter the age : "<<endl;
    cin>>age;
    cout<<"Enter the gender : "<<endl;
    cin>>gender;


    Student s;
    s.input(roll, age, gender);
    s.display();

    return 0;
}

