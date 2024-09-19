/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
int main()
{
struct student
{
int roll;
string student_name;
float marks1,marks2,marks3,marks4;
struct student *next;
struct student *prev;
}
*temp,*head,*last=NULL;
int choice=1;
cout<<"Insertion at end of list:-"<<endl;
while(choice==1)
{
temp = new student();
cout << "Enter name of the student:";
cin >> temp->student_name;
cout << "Enter roll of the student:";
cin >> temp->roll;
cout << "Enter marks1 of the student:";
cin >> temp->marks1;
cout << "Enter marks2 of the student:";
cin >> temp->marks2;
cout << "Enter marks3 of the student:";
cin >> temp->marks3;
cout << "Enter marks4 of the student:";
cin >> temp->marks4;
cout << "Student Name:" << temp->student_name<<endl;
cout << "Roll:" << temp->roll<<endl;
cout << "Total marks of the student:"<<temp->marks1+temp->marks2+temp->marks3+temp->marks4<<endl;
if(last==NULL)
{
head=last=temp;
temp->prev=0;
temp->next=0;
}
else
{
last->next=temp;
temp->prev=last;
last=temp;
last->next=0;
}

cout<<"To continue press 1:";
cin>>choice;
}
}