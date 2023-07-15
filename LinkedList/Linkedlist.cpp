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
//printing the linkedlist by traversing the linkedlist
void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    
}
//inserting a node at the linkedlist head;
void insertAtHead(Node* &head,int data){
    Node *temp=new Node(data);
    temp->next=head;
    head=temp;
}
//inserting the node at the linkedlist tail
void insertAtTail(Node *&tail,int data){
    Node *temp=new Node(data);
    tail->next=temp;
    tail=temp;
}
//identifying size of linkedlist
int size(Node* &head){
    Node *temp=head;
    int count=0;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    return count;
}
int main()
{
    //creating a new node
    Node * newNode=new Node(10);
    Node *head=newNode;
    Node *tail=newNode;
    //printing the value of node
    // cout<<newNode->data<<" "<<newNode->next;
    print(head);
    cout<<size(head);


    return 0;
}