#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
Node *head = NULL;
void insert(int n)
{
    Node *newNode = new Node();
    newNode->data = n;
    newNode->next = NULL;
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
void print(Node *temp)
{
    if (temp == NULL)
        return;
    print(temp->next);
    cout << temp->data;
}
int main()
{
    insert(3);
    insert(5);
    print(head);
}
