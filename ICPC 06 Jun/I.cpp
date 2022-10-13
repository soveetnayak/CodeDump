#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define input(i) int i; cin>>i;
int multiplier(int zoom)
{
    int ans=1;
    for (int i = 0; i < zoom-1; i++)
    {
        ans*=2;
    }
    return ans;
}
int main()
{
    string s;
    cin>>s;
    int zoom= s.size();
    int z=zoom;
    int x=0;
    int y=0;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i]=='0')
        {
            zoom--;
        }
        else if(s[i]=='1')
        {
            x+=multiplier(zoom);
            zoom--;
        }
        else if(s[i]=='2')
        {
            y+=multiplier(zoom);
            zoom--;
        }
        else
        {
            x+=multiplier(zoom);
            y+=multiplier(zoom);
            zoom--;
        }
    }
    cout<<z<<" "<<x<<" "<<y<<endl;
    
}