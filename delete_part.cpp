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
    Node *newNode=new Node(val);

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
    temp->next=newNode;
}

void remove_k(Node *&head,int m,int k)
{
    Node *temp=head;
    Node *temp1;

    while(temp!=NULL)
    {
        for(int i=1; i<m && temp!=NULL; i++)
        {
            temp=temp->next;
        }
        if(temp==NULL)
            return ;

        temp1=temp->next;

        for(int i=0; i<k && temp1!=NULL ; i++)
        {
            Node *delnode=temp1;
            temp1=delnode->next;
            delete delnode;
        }

        temp->next=temp1;

        temp=temp1;
    }
}

void display(Node *n)
{
    while(n!=NULL)
    {
        cout<<n->val<<"  ";
        n=n->next;
    }
    cout<<endl<<endl;
}

int main()
{
    Node *head=NULL;

    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        insert_at_tail(head,i+1);
    }
    int m,k;
    cin>>m>>k;
    remove_k(head,m,k);
    display(head);
    return 0;
}
