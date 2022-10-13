#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define input(i) \
    int i;       \
    cin >> i;
int mod(int x, int y)
{
    if (x > y)
        return x - y;
    else
        return y - x;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        set<int> b;
        for (int i = 0; i < n; i++)
        {
            b.insert(a[i]);
        }
        vector <int> temp;
        int size = b.size();
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (b.find(mod(a[i], a[j])) == b.end())
                    {
                        temp.push_back(mod(a[i], a[j]));
                    }
            }
        }
        while ( size != b.size()+temp.size() && size<=300)
        {
            for (int i = 0; i < temp.size(); i++)
            {
                b.insert(temp[i]);
            }
            size = b.size();
            for (auto it=b.begin();it!=--b.end();it++)
            {
                for (int i = 0; i < temp.size(); i++)
                {
                    /* code */
                }
                
            }
            
        }
        if (size>300 || b.size() > 300)
            cout << "NO" << endl;
        else
        {
            cout << "YES" << endl;
            cout << b.size() << endl;
            for (auto it=b.begin();it!=b.end();it++)
            {
                cout << *it << " ";
            }
            cout << endl;
        }
    }
}