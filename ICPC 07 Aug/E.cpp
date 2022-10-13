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
        string s;
        cin>>s;
        auto Mflag=0;
        auto Uflag=0;
        for (int i = 0; i < s.length() ; i++)
        {
            if(s[i]=='M' && Mflag==0)
            {
                Mflag=1;
            }
            // else if(s[i]=='M' && Mflag==1)
            // {
            //     Mflag=0;
            // }
            else if(s[i]=='U' && Mflag==1)
            {
                Uflag=1;
                break;
            }
            // else if(s[i]=='?')
            // {

            // }
        }
        if(Uflag==1)
        {
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }

}