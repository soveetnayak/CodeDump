#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define input(i) int i; cin>>i;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        map<int,int> a;
        for (int i = 1; i < 5; i++)
        {
            int temp;
            cin>> temp;
            a[temp]=i;
        }
        auto it= --a.end();
        auto it2=--it;
        ++it;
        if(it->second==1||it->second==2)
        {
            if(it2->second==3||it2->second==4)
            {
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else
        {
            if(it2->second==1||it2->second==2)
            {
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
}