#include<iostream>
#include<vector>

using namespace std;

/* Function that return pivot (which is last element of divided array)
 * and place elements before and after pivot considering if they're smaller or greater than pivot */
int partition(vector<int>& arr, int start, int end)
{
    int pivot, i, k, tmp;

    /* Choose pivot - we take last element of array */
    pivot = arr[end];
    k = start - 1;

    for(i=start; i<end; i++)
    {
        if(arr[i]<pivot)
        {
            k++;
            tmp = arr[i];
            arr[i] = arr[k];
            arr[k] = tmp;
        }
    }
    tmp = arr[k+1];
    arr[k+1] = arr[end];
    arr[end] = tmp;

    return k+1;
}

void quickSort(vector<int>& arr, int start, int end)
{
    if(start<end)
    {
        int pivot = partition(arr, start, end); // Get pivot
        quickSort(arr, start, pivot-1); // Elements before pivot
        quickSort(arr, pivot+1, end); // Elements after pivot
    }
}

int main()
{
    vector<int> arr;
    int i, n, a;

    /* Input */
    cout << "Number of elements in array:";
    cin >> n;
    for(i=0; i<n; i++)
    {
        cin >> a;
        arr.push_back(a);
    }

    /* Sorting function */
    quickSort(arr, 0, n);

    /* Output */
    for(i=0; i<n; i++) cout << arr[i] << " ";

    return 0;
}
