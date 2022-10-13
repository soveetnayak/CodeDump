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
        int N;
        cin>>N;
        int ans=0;
        int result=0;
        vector <vector<int>> a;
        for (int i = 0; i < N; i++)
        {
            int k;
            cin>>k;
            ans+=k;
            vector <int> row(k);
            for (int j = 0; j < k; j++)
            {
                input(row[j]);
            }
            a.push_back(row);
        }
        for (int i = 0; i < a.size(); i++)
        {
            set<int> b;
            for (int j = 0; j < a[i].size()-1; j++)
            {
             if(a[i][j]>a[i][j+1])
             {
                 b.insert(min(j+1,a[i].size()-j-1));
             }               
            }
        }
        result+=ans;
        
    }
}
// 1 2 7 5 4 6
// 0 1 2 3 4 5