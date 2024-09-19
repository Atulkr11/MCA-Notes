
#include <iostream>

using namespace std;

int main()
{ struct node
{ int data;
struct node* link;
};
struct node *temp,*head,*last,*temp2;
int choice =1;
cout<<"inserting at the start of list"<<endl;
while(choice==1)
{
temp = new node();
cout<<"Enter the data of node";
cin>> temp-> data;
cout<<"\n data is :"<< temp-> data;
temp->link = head;
head=temp;
cout<<"continue";
cin>>choice;
}
return 0;
}