#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define PI 3.14159265
#define br cout << endl
#define sp cout << " "
#define fo(i, n) for (int i = 0; i < n; i++)
#define Fo(i, k, n) for (int i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
#define amazing ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#define ff first
#define ss second
#define pb push_back
#define file_read                     \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<string> vs;
typedef vector<pii> vpii;
typedef vector<pll> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef map<int, int> mii;
typedef map<ll, ll> mll;
int MOD = 1e9 + 7;

int main() {
    amazing;
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vvi arrays(n);
        for(int i=0; i<n; i++)
        {
            int l;
            cin >> l;
            for(int j=0; j<l; j++)
            {
                int temp;
                cin >> temp;
                arrays[j].pb(temp);
            }
        }
        vector<vector<int>> sorted;
        for(int i=0; i<n; i++)
        {
            vector<int> temp;
            temp.pb(arrays[i][0]);

            for(int j = 1; j<arrays[i].size(); j++)
            {
                if(arrays[i][j] > temp[temp.size()-1])
                {
                    temp.pb(arrays[i][j]);
                }
                else{
                    sorted.pb(temp);
                    temp.clear();
                    temp.pb(arrays[i][j]);
                }
            }
            if(temp.size() > 0) sorted.pb(temp);
        }
    }
}