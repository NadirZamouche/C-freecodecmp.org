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

void Insert(int data, int n){
    Node* temp1 = new Node();
    temp1->data = data;
    temp1->next = NULL;
    if(n==1){
        temp1->next = head;
        head = temp1;
        return; //in order not to execute the code below if n equals 1
    }
    Node* temp2 = head;
    for(int i=0;i<n-2;i++){ //from 3 onwards because we want to use for loop to jump to the temp that comes right before the current temp and for 2 it's already before it
        temp2 = temp2->next;
    }
    temp1->next = temp2->next; //even for 2 here
    temp2->next = temp1; //to build the links
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

int main()
{
    Node* head = NULL; //empty list
    cout << "How many numbers?\n";
    int n, x, p;
    cin >> n;
    for(int i=0; i<n; i++){
        cout << "Enter the number:\n";
        cin >> x;
        cout << "and its position:\n";
        cin >> p;
        Insert(x,p);
        Print();
    }
}
