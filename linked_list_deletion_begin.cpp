#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
Node *head = NULL;
void deletebegin()
{
    if (head == NULL)
    {
        return;
    }
    Node *temp = head;
    head = head->next;
    delete temp;
}
void insert(int n)
{
    Node *newNode = new Node();
    newNode->data = n;
    newNode->next = NULL;

    // Node *temp=head;
    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}
void print()
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data;
        temp = temp->next;
    }
}
int main()
{
    insert(4);
    insert(8);
    insert(1);
    deletebegin();
    print();
}