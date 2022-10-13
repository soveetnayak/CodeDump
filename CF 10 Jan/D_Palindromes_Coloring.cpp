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
    while(t--) {
        int n;
        cin >> n;
        int k;
        cin >> k;
        char a[n];
        fo(i, n) cin >> a[i];
        vector<int> v(26, 0);
        vector<int> color(k,0);
        int pairs=0;
        int single=0;
        fo(i, n) v[a[i] - 'a']++;
        fo(i,26)
        {
            if(v[i] == 0)
            {
                continue;
            }
            else if(v[i] == 1)
            {
                single++;
            }
            else if(v[i] % 2 == 0)
            {
                pairs++;
            }
            else
            {
                pairs += v[i] / 2;
                single++;
            }
        }
        if(n == k)
        {
            cout << 1 << endl;
            continue;
        }
        if(pairs==0)
        {
            cout << 1 << endl;
            continue;
        }
        if(pairs > k)
        {
            int temp = pairs / k;
            
        }
    }
}