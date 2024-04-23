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

void Reverse(struct Node* temp1){
    if(temp1->next == NULL) {
        head = temp1;
        return; //Exit condition
    }
    Reverse(temp1->next); //Recursive call until u reach NULL then printing will begin
    struct Node* temp2 = temp1->next; //temp2 is after temp1
    temp2->next = temp1; //temp2 pointer points towards temp1's address
    /* Or just instead of the 2 previous lines we can put:
    temp1->next->next=temp1;
    the same thing though
    */
    temp1->next = NULL; //destroyed the original link
};

int main()
{
    head = NULL; //empty list
    Insert(2); //List : 2
    Insert(4); //List : 4, 2
    Insert(6); //List : 6, 4, 2
    Insert(5); //List : 5, 6, 4, 2
    Print();
    Reverse(head);
    Print();
}
