#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define input(i) \
    int i;       \
    cin >> i;
/*
1 3
2 8
3 12
15 21
17 24
*/
int main()
{
    int n;
    lli m;
    cin >> n >> m;
    vector<pair<lli, lli>> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first;
        cin >> a[i].second;
        a[i].second += a[i].first;
    }
    sort(a.begin(), a.end());
    int unlock = 0;
    multiset<lli> computer;
    for (int i = 0; i < n; i++)
    {
        if (computer.size() == 0)
        {
            unlock++;
            computer.insert(a[i].second);
            continue;
        }
        int time = a[i].first - m;
        auto it = computer.begin();
        while (it != computer.end())
        {
            if (time > *it)
            {
                computer.erase(it);
                it=computer.begin();
            }
            else
            {
                break;
            }
        }

        if (computer.size() != 0)
        {
            it = computer.begin();
            if (*it <= a[i].first)
            {
                computer.erase(it);
                computer.insert(a[i].second);
            }
            else
            {
                unlock++;
                computer.insert(a[i].second);
                // while (it != computer.end())
                // {
                //     if (*it > a[i].first)
                //     {
                //         it++;
                //     }
                //     else
                //     {
                //         computer.erase(it);
                //         computer.insert(a[i].second);
                //         break;
                //     }
                // }
            }
        }
        else{
            unlock++;
            computer.insert(a[i].second);
            continue;
        }
    }
    cout << n-unlock << endl;
}