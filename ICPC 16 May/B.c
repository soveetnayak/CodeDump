#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <math.h>
#include <assert.h>

typedef long long int lli;
int temp[10000]; 
void merge_sort(int a[],int l,int r)
{
    //base cases
    if (l == r)
        return;
    int mid = (l + r) / 2;
    // step 1 : partition the array
    merge_sort(a, l, mid);
    merge_sort(a, mid + 1, r);

    // step 2 : merge

    int p1 = l, p2 = mid + 1;
    int count = 0;
    while (p1 <= mid && p2 <= r)
    {
        if (a[p1] <= a[p2])
        {
            temp[count++] = a[p1++];
        }
        else
        {
            temp[count++] = a[p2++];
        }
    }
    while (p1 <= mid)
        temp[count++] = a[p1++];
    while (p2 <= r)
        temp[count++] = a[p2++];

    for (int i = l; i <= r; i++)
        a[i] = temp[i - l];

}
int main()
{
    freopen("overcode.in", "r", stdin);

    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);
        int a[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        if (n < 6)
        {
            printf("0\n");
            continue;
        }
        merge_sort(a, 0, n - 1);
        int count = 0;
        for (int i = 0; i < n - 5; i++)
        {
            if (a[i + 5] - a[i] <= 1000)
            {
                count++;
                i = i + 5;
            }
        }
        printf("%d\n", count);
    }

}