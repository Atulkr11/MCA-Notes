/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/


#include<iostream>
using namespace std;
int main()
{
struct Student
{
int roll;
string Name;
string course;
float m1,m2,m3,total;
struct Student *link;
};
struct Student *temp, *head;
int choice = 1;
cout << "Adding at the start of list" << endl;
while (choice == 1)
{
temp = new Student();
cout << "Enter name of the student: ";
cin>>temp->Name;
cout << "Enter the Roll no of student: ";
cin >> temp->roll;
cout << "Enter course name: ";
cin>>temp->course;
cout << "Enter m1, m2 & m3 of the student: ";
cin >> temp->m1;
cin>>temp->m2;
cin>>temp->m3;
temp->total=temp->m1+temp->m2+temp->m3;
cout << "Roll No:" << temp->roll<<"\n"
<< "Name:" << temp->Name <<"\n"
<< "Course:" << temp->course<<"\n"
<< "Total Marks:" << temp->total<< endl;
temp->link = head;
head = temp;
cout << "Press 1 if you want to add more data in the list:";
cin >> choice;
}
return 0;
}