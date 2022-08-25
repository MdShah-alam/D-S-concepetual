#include<bits/stdc++.h>
using namespace std;

void print_vector(vector<int>v)
{
    for(int i=0;i<5;i++)
    {
        cout<<v[i]<<"  ";
    }
    cout<<endl<<endl;
}

int main()
{
    vector<int>v;
    //vector<int>::reverse_iterator it;

    //----------------rend()
    v.push_back(100);//begin()
    v.push_back(200);
    v.push_back(300);
    v.push_back(400);
    v.push_back(500);//rbegin()
//-------------------end();

//    for(auto it=v.begin();it!=v.end();it++)
//        cout<<*it<<"  ";

    for(int i=0;i<5+5;i++)
    {
        cout<<v.at(i)<<"  ";
    }
    cout<<endl;

//    it=v.rbegin();
//    cout<<*it<<endl;

//    cout<<v.size()<<endl;
//    cout<<v.capacity()<<endl;
//    cout<<v.max_size()<<endl;

//    v.resize(3);
//    v.shrink_to_fit();

     //print_vector(v);

    return 0;
}
