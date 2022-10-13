#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define input(i) int i; cin>>i;
// Program to print all prime factors
# include <stdio.h>
# include <math.h>
	
// A function to print all prime factors of a given number n
int primeFactors(int n)
{
    int factors=0;
	// Print the number of 2s that divide n
	while (n%2 == 0)
	{
		factors++;
		n = n/2;
	}
	
	// n must be odd at this point. So we can skip
	// one element (Note i = i +2)
	for (int i = 3; i <= sqrt(n); i = i+2)
	{
		// While i divides n, print i and divide n
		while (n%i == 0)
		{
			factors++;
			n = n/i;
		}
	}
	
	// This condition is to handle the case when n
	// is a prime number greater than 2
	if (n > 2)
		factors++;

    return factors;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,k;
        cin>>x>>y>>k;
        int gcd = __gcd(x,y);
        int min=2;
        if(x==y)
        {
            min=2;
        }
        else if(x>y&&x%y==0)
        {
            min=1;       
        }
        else if(x<y&&y%x==0)
        {
            min=1;
        }
        int max;
        max= primeFactors(x/gcd);
        max+=primeFactors(y/gcd);
        if(k>=min&&k<=max)
        {
            cout<<"YES"<<endl;
            continue;
        }
        else
        {
            cout<<"NO"<<endl;
            continue;
        }
        int f = primeFactors(gcd)*2;
        k=k-max;
        if(k>=f&&k%2==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }
}