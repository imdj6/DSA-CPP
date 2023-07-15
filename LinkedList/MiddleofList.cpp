#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    // constuctor
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
// two approaches are there itterative approach;
Node *middleNode(Node *&head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    temp = head;
    for (int i = 0; i < count / 2; i++)
    {
        temp = temp->next;
    }
    return temp;
}
//there is better tortoise approach
Node* middleNode1(Node* &head){
    Node*fast=head,*slow=head;
    while (fast!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
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
    cout << endl;
    cout << middleNode1(head)->data;

    return 0;
}