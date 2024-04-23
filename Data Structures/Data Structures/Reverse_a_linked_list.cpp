#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

//to create a Node:
struct Node
{
    int data;
    struct Node* next; //in C++ we don't have to write struct.
};

struct Node* head; //global variable

void Insert(int data){ //no need to pass the head to pointer head since it's already a global variable
    Node* temp = new Node();
    temp->data = data;
    temp->next = NULL;
    if(head != NULL) temp->next = head; //This time data will be inserted at the beginning of the list
    head = temp; //the element we insert becomes the new head
}

void Print(){
    cout << "List is: ";
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data<< " ";
        temp = temp->next;
    }
    cout << endl;
};

void Reverse(){
    struct Node *current, *prev, *next; //current or temp are the same it's just a just a name
    current = head;
    prev = NULL; //this variable is used to reverse the address of the head Node to NULL
    while(current != NULL)
    {
        next = current->next; //this variable is used to store the address of the next Node
        current->next = prev; //head reversed to NULL
        prev = current;
        current = next; //and so on until we reach the end where the current == NULL
    }
    head = prev;
}

int main()
{
    head = NULL; //empty list
    Insert(2); //List : 2
    Print();
    Insert(4); //List : 4, 2
    Print();
    Insert(6); //List : 6, 4, 2
    Print();
    Insert(5); //List : 5, 6, 4, 2
    Print();
    Reverse();
    Print();
}
