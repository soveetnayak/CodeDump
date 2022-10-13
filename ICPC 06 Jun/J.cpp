#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define input(i) int i; cin>>i;
int multiplier(int zoom)
{
    int ans=1;
    for (int i = 0; i < zoom; i++)
    {
        ans*=2;
    }
    return ans;
}
int* bit(int n,int * arr)
{
    int temp=multiplier(8);
    for (int i = 7; i >= 0; i--)
    {
        temp/=2;
        arr[i]=n/temp;
        n=n%temp;
    }
    return arr;
    
}
void print(int *arr)
{
    int ans=0;
    int two=1;
    for (int i = 0; i < 8; i++)
    {
        ans+=two*arr[i];
        two*=2;
    }
    cout<<ans<<" ";
    
}
int main()
{
    int n;
    cin>>n;
    int arr[8];
    vector <int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int flag=1;
    int ans[8];
    for (int i = 0; i < n; i++)
    {
        bit(a[i],arr);
        flag=1;
        for (int j = 0; j < 8; j++)
        {
            if(arr[j]==1&&flag==1)
            {
                ans[j]=1;
                flag=0;
            }
            else if(arr[j]==1)
            {
                ans[j]=0;
                flag=1;
            }
            else if(flag==0)
            {
                ans[j]=1;
            }
            else if(flag==1)
            {
                ans[j]=0;
            }
        }
        print(ans);
        
    }
    // 00110110
    // 01101100

    // 01011000
}