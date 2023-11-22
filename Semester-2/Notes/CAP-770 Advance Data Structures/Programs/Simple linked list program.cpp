/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//simple linked list program,

#include<iostream>

using namespace std;


int main() {
int i,size = 0;
struct node
{
int data;
struct node* next;
};

struct node *new_node, *head = NULL, *tail = NULL;

cout << "Enter the size of the linked List -> ";
cin >> size;

while ( i < size)
{
cout << "Enter the data for " << i << " Node -> ";
new_node = new node();
cin >> new_node->data;
new_node->next=NULL;

if ( head == NULL)
{
head = tail = new_node;
}

else {
tail->next = new_node;
tail = new_node;
}

i++;

}

i = 0;
struct node* temp = new node();
temp = head;

while (temp!=NULL)
{
cout<<"Node ["<<i<<"] -> "<<temp->data<<endl;
temp = temp->next;
i++;
}
}