#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <math.h>
#include <assert.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, k;
        int temp;
        int l=0;
        scanf("%d %d", &n, &k);
        int arr[n];
        int bit[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        for (int i = 0; i < n; i++)
        {
            bit[i]=0;
            if(l>n-i+1)
            break;
            for (int j = i; j < n; j++)
            {
                bit[i]= bit[i] | arr[j];
                if(bit[i]<=k)
                {
                    if(j-i+1>l)
                    l=j-i+1;
                }
                else break;
            }
        }
        printf("%d\n",l);
    }
}