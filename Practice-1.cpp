#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=2; i<n; i++)
    {
        int k=2;
        bool found=true;
        while(k<i)
        {
            if(i%k==0)
                found=false;
            k++;
        }
        if(found)
            cout<<i<<"  ";
    }
    cout<<endl<<endl;
    return 0;
}
