#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)

    {
        int n, m, k;
        cin >> n >> m >> k;

        vector<int> p(n);

        for (int i = 0; i < n; i++)
        {
            cin>>p[i];
        }

        int f = p[0];

        sort(p.begin(), p.end());

        if (f > p[m - 1])
        {
            cout<<"NO"<<endl;
        }
        else if (f == p[m - 1] && f<p[m])
        {
            cout<<"YES"<<endl;
        }
        else if(f<p[m-1])
        {
            cout<<"YES"<<endl;
        }
        else if (f == p[m])
        {
            cout<<"MAYBE"<<endl;
        }

        
    }
}