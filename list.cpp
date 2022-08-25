#include<bits/stdc++.h>
using namespace std;

void print_list(list<int>l)
{
    list<int>::iterator it;

    for(it=l.begin();it!=l.end();it++)
        cout<<*it<<"  ";
    cout<<endl;
}

int main()
{
    list<int>l;

    l.push_back(10);
    l.push_back(20);
    l.push_back(30);
    l.push_back(40);
    l.push_back(50);
    l.push_back(60);

    list<int>::iterator it1=l.begin();
    list<int>::iterator it2=l.begin();
    advance(it1,3);
    advance(it2,5);
//    l.insert(it,4,1);

    l.erase(it1,it2);

//    l.pop_back();
//    l.pop_front();

    print_list(l);

    return 0;
}
