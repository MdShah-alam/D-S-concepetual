#include<bits/stdc++.h>
using namespace std;

void reverse_stack(string s , stack<char>&st)
{
    int l=s.length();

    for(int i=0;i<l;i++)
    {
        st.push(s[i]);
    }
}

int main()
{
    string s;
    cin>>s;
    stack<char>st;

    reverse_stack(s,st);

    string s1;

    while(!st.empty())
    {
        s1=s1+st.top();
        st.pop();
    }
    cout<<s1<<endl;
    return 0;
}

