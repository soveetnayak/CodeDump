#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define input(i) int i; cin>>i;

int smallerpower(int n)
{
   int p = (int)log2(n);
   if(p%2 != 0)
   return (int)pow(2, p);
   else
   return (int)pow(2, p-1);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        int x;
        cin>>n>>x;
        auto count=0;
        if(n%2!=0 && x==0)
        {
            cout<<-1<<endl;
            continue;
        }
        
        while(1)
        {
            if(n<=x && n==0)
            {
                cout<<count<<endl;
                break;
            }
            else if(n<=x && n!=0)
            {
                count++;
                cout<<count<<endl;
                break;
            }
            int a=smallerpower(n);
            // cout<<a;
            n=n-a;
            count++;

        }
    }
}