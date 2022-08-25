#include<bits/stdc++.h>
using namespace std;

void delete_mid(stack<int>&st,int n,int cur=0)
{
    if(st.empty() || cur==n)
        return ;

    int x=st.top();
    st.pop();

    delete_mid(st,n,cur+1);

    if(cur!=floor(n/2)+1)
        st.push(x);
}
int main()
{
    stack<int>st;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        st.push(i+1);
    }

    int cur=0;
    delete_mid(st,n,cur);

    while(!st.empty())
        {
            cout<<st.top()<<"  ";
            st.pop();
        }

    cout<<endl;

    return 0;
}
