#include<bits/stdc++.h>
using namespace std;

//bool check_palindrome(string s)
//{
//    stack<char>st;
//    queue<char>q;
//    cout<<s<<endl;
//
//    for(int i=0;i<s.length();i++)
//    {
//        cout<<st.top()<<" "<<q.front()<<"  ";
//        st.push(s[i]);
//        q.push(s[i]);
//    }
//
//    while(st.empty())
//    {
//        if(st.top()!=q.front())
//        {
//            return false;
//        }
//        st.pop();
//        q.pop();
//    }
//    return true;
//}

bool check_palindrome(string s)
{
    int mid=s.length()/2;
    stack<char>st;
    for(int i=0;i<mid;i++)
    {
        st.push(s[i]);
    }

    for(int i=s.length()-1;!st.empty() ; i--)
    {
        if(s[i]!=st.top())
            return false;
        st.pop();
    }
    return true;
}

int main()
{
    if(check_palindrome("abcdef"))
        cout<<"Yes"<<endl;

    else
        cout<<"No"<<endl;

    return 0;
}
