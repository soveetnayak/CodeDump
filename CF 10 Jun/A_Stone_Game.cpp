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
        int ans;
        int n;
        cin >> n;
        auto l = 0;
        auto h = 0;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            if (temp == 1)
                l = i + 1;
            else if (temp == n)
                h = i + 1;
        }
        int mid = (n + 1) / 2;
        int lcorner;
        int hcorner;
        if (l > mid)
        {
            lcorner = n - l + 1;
        }
        else
        {
            lcorner = l;
        }
        if (h > mid)
        {
            hcorner = n - h + 1;
        }
        else
        {
            hcorner = h;
        }
        if (l <= mid && h <= mid)
        {
            if (h > l)
            {
                ans = h;
            }
            else
                ans = l;
        }
        else if (l > mid && h > mid)
        {
            if (h > l)
            {
                ans = n - l + 1;
            }
            else
                ans = n - h + 1;
        }
        else if (l < h)
        {
            if (lcorner < hcorner)
            {
                ans = lcorner;
                if(hcorner > h-lcorner)
                {
                    ans+=h-lcorner;
                }
                else ans+=hcorner;
            }
            else
            {
                ans = hcorner;
                if(lcorner > n-l+1-hcorner)
                {
                    ans+=n-l+1-hcorner;
                }
                else ans+=lcorner;
            }
        }
        else if (l > h)
        {
            if (hcorner < lcorner)
            {
                ans = hcorner;
                if(lcorner > l-hcorner)
                {
                    ans+=l-hcorner;
                }
                else ans+=lcorner;
            }
            else
            {
                ans = lcorner;
                if(hcorner > n-h+1-lcorner)
                {
                    ans+=n-h+1-lcorner;
                }
                else ans+=hcorner;
            }
        }
        cout<<ans<<endl;
    }
}