#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define input(i) \
    int i;       \
    cin >> i;

struct _arr
{
    int a;
    int b;
};
int comparator(const void *x, const void *y)
{
    int p = ((struct _arr *)x)->a;
    int q = ((struct _arr *)y)->a;
    if (p == q)
    {
        int m = ((struct _arr *)x)->b;
        int n = ((struct _arr *)y)->b;
        return m - n;
    }
    return p - q;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        input(n);
        struct _arr A[n];

        for (int i = 0; i < n; i++)
        {
            cin >> A[i].a >> A[i].b;
        }

        qsort(A, n, sizeof(struct _arr), comparator);
        int temp = A[0].a;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (A[i].a >= temp)
            {
                count++;
                temp = A[i].a + 1;
                continue;
            }
            if (A[i].b >= temp)
            {
                count++;
                temp++;
            }
            
        }
        cout << count << endl;
    }
}