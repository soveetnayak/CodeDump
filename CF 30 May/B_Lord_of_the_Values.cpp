/*
Change soln:
let a and b
1 a=a+b
2 b-a= b-(a+b)=-a
3 a+b=(a+b)-a = b
So in 3 steps i make a=b and b=-a
repeat those again ll get a=-a b=-b
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define input(i) int i; cin>>i;

int type1( int *a,int i,int j)
{
    a[i]=a[i]+a[j];
    cout<<1<<" "<<i<<" "<<j<<endl;
}
int type2(int *a,int i,int j)
{
    a[j]=a[j]-a[i];
    cout<<2<<" "<<i<<" "<<j<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector <int> a(n);
        for(auto &x:a)
        {
            cin>>x;
        }
        vector <int> b;
        b=a;
        for (int i = 0; i < n; i++)
        {
            
        }
        

    }
}