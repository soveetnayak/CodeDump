#include <bits/stdc++.h>
#include <tuple>
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
        vector<tuple<int,int,int>> v(n);

        for(int i=0;i<n;i++)
        {
            int l,r,c;
            cin>>l>>r>>c;
            v[i] = make_tuple(l,r,c);
        }
        int min_x= get<0>(v[0]);
        int max_x= get<1>(v[0]);
        int price;
        int price1;
        int price2;

        int num_of_integers = 0;

        for(int s=1;s<=n;s++)
        {
            price = INT_MAX;
            price1 = INT_MAX;
            price2 = INT_MAX;

            for(int i = 0; i<s; i++)
            {
                if(i == 0)
                {
                    min_x = get<0>(v[i]);
                    max_x = get<1>(v[i]);
                }
                else
                {
                    min_x = min(min_x,get<0>(v[i]));
                    max_x = max(max_x,get<1>(v[i]));
                }

            }

            for(int j = 0; j<s; j++)
            {
                if(get<0>(v[j]) == min_x && get<1>(v[j]) == max_x && price > get<2>(v[j]))
                {
                    price = get<2>(v[j]);
                }
                
                if(get<0>(v[j]) == min_x && price1 > get<2>(v[j]))
                {
                    price1 = get<2>(v[j]);
                }
                
                if(get<1>(v[j]) == max_x && price2 > get<2>(v[j]))
                {
                    price2 = get<2>(v[j]);
                }

            }

            if(price <= price1 || price <= price2 || price <= price1+price2)
            {
                cout << price << endl;
            }
            else 
            {
                cout << price1 + price2 << endl;
            }
            
        }
    }
}