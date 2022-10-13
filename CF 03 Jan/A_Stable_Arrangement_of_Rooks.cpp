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
        int n,k;
        cin >> n >> k;

        if( (n+1)/2 < k)
        {
            cout << "-1" << endl;
            continue;
        }

        vector<int> row(n);
        vector<int> col(n);
        vector<vector<char>> mat(n,vector<char>(n));

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                mat[i][j] = '.';
            }
        }
        int r = 0;
        int c = 0;
        for(int i=0;i<k;i++)
        {
            if(r >= n || c >= n)
            {
                cout << "-1" << endl;
                break;
            }

            mat[r][c] = 'R';
            r+=2;
            c+=2;
        }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << mat[i][j];
        }
        cout << endl;
    }
    }
}

