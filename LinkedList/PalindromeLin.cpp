#include <iostream>
#include <vector>
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
// check if palindrome;
//it takes extra space so need to optimise the solution
bool ifpalindrome(Node *&head)
{
    Node *temp = head;
    vector<int> data;
    while (temp != NULL)
    {
        data.push_back(temp->data);
        temp = temp->next;
    }
    int s=0,e=data.size()-1;
    while (s<=e)
    {
        if(data[s]!=data[e]){
            return false;
        }
        s++;
        e--;
    }
    

    return true;
}
Node* middleNode1(Node* &head){
    Node*fast=head,*slow=head;
    while (fast!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}
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
bool ifpalindromeoptimised(Node *&head){
    Node *temp=middleNode1(head);
    
}
int main()
{
    Node *newNode = new Node(1);
    Node *tail = newNode;
    Node *head = newNode;
    insertAtTail(tail, 2);
    insertAtTail(tail, 1);
    insertAtTail(tail,2);
    print(head);
    cout << endl;
    cout << ifpalindromeoptimised(head);

    return 0;
}