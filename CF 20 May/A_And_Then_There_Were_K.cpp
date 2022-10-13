#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define input(i) \
    int i;       \
    cin >> i;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int factor = 0;
        int temp = n;
        if (n == 1)
        {
            cout <<0<< endl;
        }
        else
        {
            while (temp != 1)
            {
                temp = temp / 2;
                factor++;
            }

            int ans=1;
            for (int i = 0; i < factor; i++)
            {
                ans*=2;
            }
            cout<<ans-1<<endl;
        }
    }
}