#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<int>st1;
    stack<int>st2;

    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        st1.push(a);
    }

    while(!st1.empty())
    {
        int k=st1.top();
        st1.pop();

        while(!st2.empty() && st2.top()<k)
        {
            st1.push(st2.top());
            st2.pop();
        }
        st2.push(k);
    }

    while(!st2.empty())
    {
        cout<<st2.top()<<"   ";
        st2.pop();
    }
    cout<<endl;
    return 0;
}
