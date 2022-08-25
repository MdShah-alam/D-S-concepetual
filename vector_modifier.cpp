#include<bits/stdc++.h>
using namespace std;

void print_vector(vector<int>v1)
{
    for(int i=0; i<v1.size(); i++)
    {
        cout<<v1[i]<<"  ";
    }

    cout<<endl;
}

int main()
{
    int n;
    cin>>n;
    vector<int>v(n);

    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

//    sort(v1.begin(),v1.end(),greater<int>());

    print_vector(v);

    return 0;
}
