#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define input(i) \
    int i;       \
    cin >> i;
int temp[2005];
void merge_sort(int a[], int l, int r)
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
            // for calculating the inversions.
        }
    }
    while (p1 <= mid)
        temp[count++] = a[p1++];
    while (p2 <= r)
        temp[count++] = a[p2++];

    for (int i = l; i <= r; i++)
        a[i] = temp[i - l];
}
int comp (const void * x,const void * y) {
   return -( *(int*)x - *(int*)y );
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        lli ans = 0;
        int even = 0;
        int nodd = 0;
        int odd[n];
        int k = 0;
        for (int i = 0; i < n; i++)
        {

            int temp;
            cin >> temp;
            if (temp % 2 == 0)
            {
                even++;
            }
            else
            {
                odd[k++] = temp;
            }
        }
        int arr[k];
        for (int i = 0; i < k; i++)
        {
            arr[i] = odd[i];
        }

        ans = even * k;
        ans += ((even - 1) * (even)) / 2;
        qsort(arr, k, sizeof(int), comp);
        
        for (int i = 0; i < k - 1; i++)
        {
            for (int j = i + 1; j < k; j++)
            {
                if (__gcd(arr[i], arr[j]) > 1)
                    ans++;
            }
        }

        cout << ans << endl;
    }
}