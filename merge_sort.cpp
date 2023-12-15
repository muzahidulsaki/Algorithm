#include<bits/stdc++.h>
using namespace std;

void merge(int a[], int l, int mid, int h)
{

    int i = l;
    int j = mid + 1;
    int k = l;
    int temp[h + 1];

    while (i <= mid && j <= h)
    {
        if (a[i] <= a[j])
        {
            temp[k] = a[i];
            i++;
        } else {
            temp[k] = a[j];
            j++;
        }
        k++;
    }

    while (i <= mid) {
        temp[k] = a[i];
        i++;
        k++;
    }

    while (j <= h) {
        temp[k] = a[j];
        j++;
        k++;
    }

    for (k = l; k <= h; k++) {
        a[k] = temp[k];
    }
}

void mergeSort(int a[], int l, int h) {
    if (l < h) {
        int mid = (l + h) / 2;
        mergeSort(a, l, mid);
        mergeSort(a, mid + 1, h);
        merge(a, l, mid, h);
    }
}

int main()
{
    int n;
    cin>> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin>> arr[i];
    }

    mergeSort(arr, 0, n - 1);

        cout << "\nSorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
