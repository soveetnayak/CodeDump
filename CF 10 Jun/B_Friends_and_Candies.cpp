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
        int n;
        cin>>n;
        int sum=0;
        vector <int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        if(sum%n!=0)
        {
            cout<<-1<<endl;continue;
        }
        int val= sum/n;
        sort(a.begin(), a.end());
        int ans=0;
        int i=n-1;
        while(a[i]>val){
            i--;
        }
        ans=n-i-1;
        cout<<ans<<endl;
        
    }
}