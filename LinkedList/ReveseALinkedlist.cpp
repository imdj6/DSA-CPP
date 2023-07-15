#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void insertAtTail(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    tail = temp;
}
void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
// Revesing a Linkedlist
Node *reverse(Node *&head)
{
    if ((head == NULL) || (head->next = NULL))
    {
        return head;
    }
    Node *prev = NULL;
    Node *curr = head;
    Node *Next = NULL;
    while (curr != NULL)
    {
        Next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = Next;
    }
    return prev;
}
int main()
{
    Node *newNode = new Node(10);
    Node *tail = newNode;
    Node *head = newNode;
    insertAtTail(tail, 20);
    insertAtTail(tail, 30);
    insertAtTail(tail, 40);
    insertAtTail(tail, 50);
    insertAtTail(tail, 60);
    print(head);
    Node* prev=reverse(head);
    print(prev);

    return 0;
}