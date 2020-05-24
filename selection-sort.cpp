#include<iostream>
#include<vector>

using namespace std;

void swap(vector<int>& arr, int a, int b)
{
    int tmp = arr[a];
    arr[a] = arr[b];
    arr[b] = tmp;
}

void selectionSort(vector<int>& arr)
{
    int i, k=0, minIndex, min;
    while(k<arr.size())
    {
        min = arr[k];
        minIndex = k;
        for(i=k; i<arr.size(); i++) /* Loop to choose minimal element */
        {
            if(arr[i]<min)
            {
                min = arr[i];
                minIndex = i;
            }
        }
        swap(arr, k, minIndex); /* Insert minimal element to array */
        k++;
    }
}

int main()
{
    vector<int> arr;
    int n, a, i;

    /* Input */
    cout << "Number of elements in array: ";
    cin >> n;
    for(i=0; i<n; i++)
    {
        cin >> a;
        arr.push_back(a);
    }

    /* Sorting algorithm */
    selectionSort(arr);

    /* Output */
    for(i=0; i<n; i++)
        cout << arr[i] << " ";
    return 0;
}
