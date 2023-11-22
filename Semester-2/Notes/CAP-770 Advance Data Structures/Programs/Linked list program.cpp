/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
struct Student
{
int rollNo;
string studentName;
string courseName;
float marks;
struct Student *link;
};
struct Student *temp, *head;
int choice = 1;
cout << "inserting at the start of list" << endl;
while (choice == 1)
{
temp = new Student();
cout << "Enter the Roll no of student:";
cin >> temp->rollNo;
cout << "Enter Name of the student:";
while ((getchar()) != '\n')
;
getline(cin, temp->studentName);
cout << "Enter course Name:";
getline(cin, temp->courseName);
cout << "Enter marks of the student:";
cin >> temp->marks;
cout << "Roll No:" << temp->rollNo << " "
<< "Name:" << temp->studentName << " "
<< "Course:" << temp->courseName << " "
<< "Marks:" << temp->marks << endl;
temp->link = head;
head = temp;
cout << "Press 1 if you want to add more data in the list:";
cin >> choice;
}
return 0;
}