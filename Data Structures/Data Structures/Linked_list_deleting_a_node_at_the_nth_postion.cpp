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

void Insert(int data){ //no need to pass the head  to pointer head since it's already a global variable
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

void Delete(int n){
    struct Node* temp1 = head;
    if(n==1){
        head = temp1->next;
        delete temp1; //free(temp1);
        return; //in order not to execute the code below if n does not equal 1
    }
    for(int i=0;i<n-2;i++){ //from 3 onwards because we want to use for loop to jump to the temp that comes right before the current temp and for 2 it's already before it
        temp1 = temp1->next;
    //temp1 points to (n-1)th Node
    }
    struct Node* temp2 = temp1->next; //nth Node
    temp1->next = temp2->next; //(n+1)th Node
    delete temp2; //free(temp2);
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
    int n;
    cout << "Enter a position to Delete\n";
    cin >> n;
    Delete(n);
    Print();
}
