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
        int a,b,c;
        cin >> a >> b >> c;
        int flag = 0;
        int diffab = a - b;
        int diffbc = b - c;
        int diffca = c - a;

        if(diffab > 0)
        {
            int temp = b - diffab;
            if(temp % c == 0 && temp > 0)
            {
                flag = 1;
            }
        }
        else
        {
            int temp = b + abs(diffab);
            if(temp % c == 0)
            {
                flag = 1;
            }
        }
        if(diffbc > 0)
        {
            int temp = b + diffbc;
            if(temp % a == 0)
            {
                flag = 1;
            }
        }
        else
        {
            int temp = b - abs(diffbc);
            if(temp % a == 0 && temp > 0)
            {
                flag = 1;
            }
        }
        if(diffca > 0)
        {
            if(diffca % 2 == 0)
            {
                int diff = diffca/2;
                int temp = a + diff;
                if(temp % b == 0)
                {
                    flag = 1;
                }
            }
        }
        else
        {
            diffca = abs(diffca);
            if(diffca % 2 == 0)
            {
                int diff = diffca/2;
                int temp = a - diff;
                if(temp % b == 0 && temp >0)
                {
                    flag = 1;
                }
            }
        }
        if(flag ==1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}