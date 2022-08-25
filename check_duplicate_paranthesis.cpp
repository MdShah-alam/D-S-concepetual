#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    stack<char>st;

    for(char c:s)
    {
        int i;
        if(c=='(' || c=='{' || c=='[')
        {
            st.push(c);
            i++;
        }
        else
        {
            i=0;
            st.push(c);
        }
        if(i>1)
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
