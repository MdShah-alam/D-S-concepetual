#include<bits/stdc++.h>
using namespace std;

int prefix_evaluation(string s)
{
    stack<int>st;
    for(int i=s.length()-1; i>=0; i--)
    {
        if(s[i]>='0' && s[i]<='9')
            st.push(s[i]-'0');
        else
        {
            int b=st.top();
            st.pop();
            int a=st.top();
            st.pop();
            cout<<"a="<<a<<" b="<<b<<endl;

            switch(s[i])
            {

            case '+':
                    st.push(b+a);
                break;

            case '-':
                    st.push(b-a);
                break;

            case '*':
                    st.push(b*a);
                break;

            case '/':
                    st.push(b/a);
                break;

            case '^':
                    st.push(pow(b,a));
                break;

            default:
                break;
            }
        }
    }
    return st.top();
}

int main()
{
    cout<<prefix_evaluation("*5-^622")<<endl;
    return 0;
}
