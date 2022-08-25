#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val=val;
        next=NULL;
    }
};

void insert_at_tail(Node *&head,int val)
{
    Node *newNode = new Node(val);

    if(head==NULL)
    {
        head=newNode;
        return ;
    }

    Node *temp=head;

    while(temp->next!=NULL)
    {
        temp=temp->next;
    }

    temp->next=newNode ;
}

Node * reverse_k_times(Node *&head,int k)
{
    Node *currnode=head;
    Node *prevnode=NULL;
    Node *nextnode;
    int count=0;

    while(currnode!=NULL && count<k)
    {
        nextnode=currnode->next;
        currnode->next=prevnode;
        prevnode=currnode;
        currnode=nextnode;
        count++;
    }

    if(nextnode!=NULL)
    head->next=reverse_k_times(nextnode,k);

    return prevnode;

}

void display(Node *n)
{
    while(n!=NULL)
    {
        cout<<n->val;
        if(n->next!=NULL)
          cout<<"->";
        n=n->next;
    }
    cout<<endl;
}

int main()
{
    Node *head=NULL;

    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        insert_at_tail(head,a);
    }

    int k;
    cin>>k;

    head=reverse_k_times(head,k);

     display(head);


    return 0;
}
