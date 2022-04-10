#include <bits/stdc++.h>
using namespace std;
int partition(int a[], int l, int h)
{
    if (l == h)
        return l;
    for (int i = l; i <= h; i++)
        cout << a[i] << " ";
    cout << endl;
    int pivot = a[h];
    int i = l - 1;
    for (int j = l; j <= h; j++)
    {
        if (pivot > a[j])
        {
            i++;
            swap(a[i], a[j]);
        }
    }
    i++;
    swap(a[i], a[h]);
    return i;
}
int kthSmallest(int arr[], int l, int r, int k)
{
    // code here
    int ind = partition(arr, l, r);
    while (ind != k-1)
    {
        if (ind < k-1)
            l = ind + 1;
        else
            r = ind - 1;
        ind = partition(arr, l, r);
    }
    return arr[k-1];
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << kthSmallest(arr, 0, n - 1, 5);
    return 0;
}