#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *head = NULL;

void insertAtBeginning(int n)
{
    Node *newNode = new Node();
    newNode->data = n;
    newNode->next = head;
    head = newNode;
}

void print()
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{
    insertAtBeginning(10);
    insertAtBeginning(20);
    insertAtBeginning(30);
    print();
}
