//*Solution 1: head as global variable

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

void Insert(int data){
    Node* temp = new Node();
    temp->data = data;
    temp->next = NULL;
    if(head != NULL) temp->next = head; //the element we insert becomes the new head
    head = temp;
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
    int n, x;
    cin >> n;
    for(int i=0; i<n; i++){
        cout << "Enter the number:\n";
        cin >> x;
        Insert(x);
        Print();
    }
}

/*Solution 2: head as local variable in main function
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

//variable to store the address of the first node (head node):
//struct Node* head; //global variable

void Insert(Node** head, int x) //pointer to pointer that's why Node**
{
    Node* temp = (Node*)malloc(sizeof(struct Node));
    temp->data = x; //or (*temp).data = x;
    temp->next = NULL;
    if(*head != NULL) temp->next = *head; //the element we insert becomes the new head
    *head = temp;
};

void Print(Node* head){
    cout << "List is: ";
    while(head != NULL){
        cout << head->data<< " ";
        head = head->next;
    }
    cout << endl;
};

int main()
{
    Node* head = NULL; //empty list
    cout << "How many numbers?\n";
    int n, x;
    cin >> n;
    for(int i=0; i<n; i++){
        cout << "Enter the number:\n";
        cin >> x;
        Insert(&head, x);
        Print(head);
    }
    return 0;
}
*/
