#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <math.h>
#include <assert.h>

typedef long long int lli;
int OR(int *arr, int l, int r)
{
    int ans = 0;
    for (int i = l; i <= r; i++)
    {
        ans = ans | arr[i];
    }
    return ans;
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, k;
        int temp;
        int flag = 0;
        scanf("%d %d", &n, &k);
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        for (int j = n; j >= 0; j--)
        {
            for (int i = 0; i < n; i++)
            {
                if (i + j - 1 <= n - 1)
                {
                    temp = OR(arr, i, i + j - 1);
                    if (temp <= k)
                    {
                        printf("%d\n", j);
                        flag = 1;
                        break;
                    }
                }
            }
            if (flag == 1)
                break;
        }
    }
}