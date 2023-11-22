/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
class LinkedList
{
    //Created Node
    class Node
    {
    public:
        int data;
        Node* next;
        Node(int val)
        {
            data = val;
            next = NULL;
        }
    };
    int size = 0;



public:

    // Head of the Linked List it is initially null because of in the initially linked is empty.
    Node* head = NULL;
    Node* tail = NULL;


    //Method of Insert At End position
    void insertAtEnd(int val)
    {
        Node* node = new Node(val);

        if(head == NULL)
        {
            head = tail = node;
            size++;
            return;
        }

        /*

        // Temporary pointer of the head for traverse Linked List
        Node* temp = head;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = node;

        */

        tail->next = node;
        tail = node;
        size++;
    }


    // Method of Insert At First Position
    void insertAtFirst(int val)
    {

        Node* node = new Node(val);

        if(head == NULL)
        {
            head = node;
            size++;
            return;
        }

        node->next = head;
        head = node;
        size++;

    }


    // Insert Element at the given position

    void insertAtPosition(int val, int pos)
    {

        Node* node = new Node(val);

        if(size < pos)
        {
            cout<<"Invalid Position Entered.."<<endl;
            return;
        }


        if(head == NULL)
        {
            head = node;
            size++;
            return;
        }

        Node* temp = head;
        Node* prev = NULL;

        int i=0;

        while(pos!=i)
        {

            prev=temp;
            temp = temp->next;
            i++;

        }

        prev->next = node;
        node->next=temp;
        size++;
    }



    //Delete data from End

    void deleteAtEnd(){

        if(head == NULL)
        {
            cout<<"Linked List is empty..."<<endl;
            return;
        }

        // Temporary pointer of the head for traverse Linked List
        Node* temp = head;
        Node* prev = NULL;

        while(temp->next != NULL)
        {
            prev = temp;
            temp = temp->next;
        }
        prev->next = NULL;
    }


    //Delete data from End

    void deleteAtFront(){

        if(head == NULL)
        {
            cout<<"Linked List is empty..."<<endl;
            return;
        }

        // Temporary pointer of the head for traverse Linked List
        Node* temp = head->next;
        head = temp;
    }


    int retunElement(Node* temp){

        return temp->data;

    }

    void reverseOfLinedList(){
        if(head == NULL)
        {
            cout<<"Linked List is empty..."<<endl;
            return;
        }

        Node* temp = head;
        while(temp->next == NULL){

            int data = retunElement(temp);
            temp = temp->next;
            cout<<data<< " ";

        }
    }



    // Print the Whole Linked List
    void display ()
    {
        if(head == NULL)
        {
            cout<<"null";
            return;
        }

        // Temporary pointer of the head for traverse Linked List
        Node* temp = head;

        while(temp != NULL)
        {

            cout<<temp->data << " -> ";
            temp = temp->next;
        }
        cout<<"end"<<endl;
    }


    int sizeofLinkedList()
    {
        return size;
    }


};


int main()
{

    LinkedList ll;



    ll.insertAtEnd(10);
    ll.insertAtEnd(20);
    ll.insertAtEnd(30);
    ll.insertAtEnd(40);


    /*
        ll.insertAtFirst(10);
        ll.insertAtFirst(20);
        ll.insertAtFirst(30);
        ll.insertAtFirst(40);
        ll.insertAtFirst(50);
    */


    //ll.display();

    //ll.deleteAtEnd();

    //ll.display();

    //ll.deleteAtFront();

    ll.display();

    ll.reverseOfLinedList();

    //cout<<ll.sizeofLinkedList()<<endl;

    //ll.insertAtPosition(50,1);

    //ll.display();

    //cout<<ll.sizeofLinkedList()<<endl;


    return 0;
}
