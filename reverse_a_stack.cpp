#include<bits/stdc++.h>
using namespace std;

void reverse_top_to_bottom(stack<int>&st,int topelement)
{
    if(st.empty())
    {
        st.push(topelement);
        return ;
    }

    int chkelement=st.top();
    st.pop();
    reverse_top_to_bottom(st,topelement);

    st.push(chkelement);
}

void reverse_stack(stack<int>&st)
{
    if(st.empty())
        return ;
    int topelement=st.top();
    st.pop();

    reverse_stack(st);

    reverse_top_to_bottom(st,topelement);
}

int main()
{
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);

    reverse_stack(st);

    while(!st.empty())
    {
        cout<<st.top()<<"  ";
        st.pop();
    }
    cout<<endl;
    return 0;
}
