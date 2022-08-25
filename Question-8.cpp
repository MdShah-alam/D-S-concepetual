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

void insert_at_tail(Node *&head, int val)
{
    Node *newNode=new Node(val);

    if(head==NULL)
    {
        head=newNode ;
        return ;
    }

    Node *temp=head;

    while(temp->next!=NULL)
    {
        temp=temp->next;
    }

    temp->next=newNode;
}

void remove_m_val(Node *&head,int n,int m)
{
    Node *temp=head;
    Node *temp1;

    while(temp)
    {
        for(int i=1;i<n && temp!=NULL ; i++)
            temp=temp->next;

        if(temp==NULL)
            return ;

        temp1=temp->next;

        for(int i=0;i<m && temp1!=NULL ;i++)
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
        cout<<n->val;
        if(n->next!=NULL)
            cout<<"->";
        n=n->next;
    }
    cout<<endl<<endl;
}

int main()
{
    Node *head=NULL;
    int k,n,m;
    cin>>k>>n>>m;

    for(int i=0; i<k; i++)
    {
        int a;
        cin>>a;
        insert_at_tail(head,a);
    }

    remove_m_val(head,n,m);

    display(head);

    return 0;
}
