//*Solution 1: head as global variable
#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

// to create a Node:
struct Node
{
    int data;
    struct Node* next; //in C++ we don't have to write struct.
};

struct Node* head; //global variable

void Insert(int data){ //we need to pass head to pinter head because head is a local variable
    Node* temp = new Node();
    temp->data = data;
    temp->next = NULL;
    if(head != NULL) temp->next = head; //This time data will be inserted at the beginning of the list
    head = temp; // the element we insert becomes the new head
}

void Print(struct Node* temp){ //In order
    if(temp == NULL) return; //Exit condition
    cout << temp->data<< " "; //Print the value in the node
    Print(temp->next); //Recursive call
};

void ReversePrint(struct Node* temp){ //In order
    if(temp == NULL) return; //Exit condition
    ReversePrint(temp->next); //Recursive call until u reach NULL then printing will begin
    cout << temp->data<< " "; //Print the value in the node
};

int main()
{
    head = NULL; //empty list
    Insert(4); //List : 4
    Insert(5); //List : 5, 4
    Insert(6); //List : 6, 5, 4
    Insert(2); //List : 2, 6, 5, 4
    Print(head);
    cout << endl;
    ReversePrint(head); //Reversed!
}

/*Solution 2: head as local variable in main function
#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

// to create a Node:
struct Node
{
    int data;
    struct Node* next; //in C++ we don't have to write struct.
};

struct Node* Insert(Node* head, int data){ //we need to pass head to pinter head because head is a local variable
    Node* temp = new Node();
    temp->data = data;
    temp->next = NULL;
    if(head != NULL) temp->next = head; //This time data will be inserted at the beginning of the list
    head = temp; // the element we insert becomes the new head
}

void Print(struct Node* temp){ //In order
    if(temp == NULL) return; //Exit condition
    cout << temp->data<< " "; //Print the value in the node
    Print(temp->next); //Recursive call
};

void ReversePrint(struct Node* temp){ //In order
    if(temp == NULL) return; //Exit condition
    ReversePrint(temp->next); //Recursive call until u reach NULL then printing will begin
    cout << temp->data<< " "; //Print the value in the node
};

int main()
{
    struct Node* head = NULL; //local variable so recursion is shitty & empty list
    head = Insert(head,4); //List : 4
    head = Insert(head,5); //List : 5, 4
    head = Insert(head,6); //List : 6, 5, 4
    head = Insert(head,2); //List : 2, 6, 5, 4
    Print(head);
    cout << endl;
    ReversePrint(head); //Reversed!
}
*/
