#include<bits/stdc++.h>
using namespace std;

void print(int n)
{
    if(n==0)
        return ;
        cout<<n<<"   ";
        cout<<endl;
    print(n-1);
    cout<<n<<"   ";
}

int main()
{
  print(5);
}
