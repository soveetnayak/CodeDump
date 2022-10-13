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


                if(s-1 == 0)
                {
                    min_x = get<0>(v[0]);
                    max_x = get<1>(v[0]);

                    price = get<2>(v[0]);
                }
                else
                {
                    int min_y = min_x;
                    int max_y = max_x;

                    min_x = min(min_x,get<0>(v[s-1]));
                    max_x = max(max_x,get<1>(v[s-1]));

                    if( min_x <= min_y && max_x >= max_y && price > get<2>(v[s-1]))
                    {
                        price = get<2>(v[s-1]);
                    }

                    if( min_x < min_y)
                    {
                        price1 = get<2>(v[s-1]);
                    }
                    else if(min_x == min_y)
                    {
                        price1 = min(price1,get<2>(v[s-1]));
                    }
                    if( max_x > max_y)
                    {
                        price2 = get<2>(v[s-1]);
                    }
                    else if(max_x == max_y)
                    {
                        price2 = min(price2,get<2>(v[s-1]));
                    }

                }


            // for(int j = 0; j<s; j++)
            // {
            //     if(get<0>(v[j]) == min_x && get<1>(v[j]) == max_x && price > get<2>(v[j]))
            //     {
            //         price = get<2>(v[j]);
            //     }
                
            //     if(get<0>(v[j]) == min_x && price1 > get<2>(v[j]))
            //     {
            //         price1 = get<2>(v[j]);
            //     }
                
            //     if(get<1>(v[j]) == max_x && price2 > get<2>(v[j]))
            //     {
            //         price2 = get<2>(v[j]);
            //     }

            // }

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