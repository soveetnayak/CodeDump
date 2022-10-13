#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define input(i) \
    int i;       \
    cin >> i;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> a(n);
        vector<int> b(n);
        char temp;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            a[i]=temp-'0';
        }
        b=a;
        if(m>n)
        m=n;
        for (int i = 0; i < m; i++)
        {
            if(a[1]==1)
            {
                b[0]=1;
            }
            if(a[n-2]==1)
            {
                b[n-1]=1;
            }
            for (int i = 1; i < n-1; i++)
            {
                if(a[i-1]==0&&a[i+1]==1)
                {
                    b[i]=1;
                }
                else if(a[i-1]==1&&a[i+1]==0)
                {
                    b[i]=1;
                }
            }
            a=b;
            
        }
        for (int i = 0; i < n; i++)
        {
            cout << a[i];
        }
        cout << endl;
    }
}