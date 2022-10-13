#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define input(i) \
    int i;       \
    cin >> i;
int binarySearchCount(lli arr[], int n, lli key)
{
    int left = 0, right = n;

    int mid;
    while (left < right)
    {
        mid = (right + left) >> 1;

        if (arr[mid] == key)
        {

            // If duplicates are present it returns
            // the position of last element
            while (mid + 1 < n && arr[mid + 1] == key)
                mid++;
            break;
        }

        // If key is smaller, ignore right half
        else if (arr[mid] > key)
            right = mid;

        // If key is greater, ignore left half
        else
            left = mid + 1;
    }

    // If key is not found
    // in array then it will be
    // before mid
    while (mid > -1 && arr[mid] > key)
        mid--;

    // Return mid + 1 because of 0-based indexing
    // of array
    return mid + 1;
}
int countGreater(lli arr[], int n, lli k)
{
    int l = 0;
    int r = n - 1;

    int leftGreater = n;

    while (l <= r)
    {
        int m = l + (r - l) / 2;

        if (arr[m] > k)
        {
            leftGreater = m;
            r = m - 1;
        }

        else
            l = m + 1;
    }

    return (n - leftGreater);
}
int comp(const void *x, const void *y)
{
    return (*(lli *)x - *(lli *)y);
}
lli temp[200005];
int count_inversions=0;
void merge_sort(lli a[],int l,int r)
{

	//base cases
	if(l==r)
		return ;
	int mid=(l+r)/2;
	// step 1 : partition the array
	merge_sort(a,l,mid);
	merge_sort(a,mid+1,r);

	// step 2 : merge

	int p1=l,p2=mid+1;
	int count=0;
	while(p1<=mid && p2<=r)
	{
		if(a[p1] <= a[p2])
		{
			temp[count++]=a[p1++];
		}
		else
		{
			temp[count++]=a[p2++];
			// for calculating the inversions.
			count_inversions+=mid-p1+1;
		}
	}
	while(p1<=mid)
		temp[count++]=a[p1++];
	while(p2<=r)
		temp[count++]=a[p2++];

	for(int i=l;i<=r;i++)
		a[i]=temp[i-l];

}
    int main()
    {
        int t;
        cin >> t;
        while (t--)
        {
            lli n, l, r;
            cin >> n >> l >> r;
            lli a[n];
            for (int i = 0; i < n; i++)
            {
                cin >> a[i];
            }
            merge_sort(a,0,n-1);
            int ans = 0;
            for (int i = 0; i < n - 1; i++)
            {
                int elems= n-i-1;
                int lower = binarySearchCount(&a[i + 1], elems, l - a[i] - 1);
                int higher = countGreater(&a[i + 1], elems, r - a[i]);
                ans+=elems-lower-higher;
            }
            cout<<ans<<endl;
        }
    }