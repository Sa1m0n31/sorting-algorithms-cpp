#include<iostream>
#include<vector>

using namespace std;

void swap(vector<int>& arr, int a, int b)
{
    int tmp = arr[a];
    arr[a] = arr[b];
    arr[b] = tmp;
}

/* Heapify - function which brings back heap after remove first element from it */
void Heapify(vector<int>& arr, int i, int n)
{
    int leftChild, rightChild, max;
    leftChild = 2*i + 1;
    rightChild = 2*i + 2;

    if((leftChild < n)&&(arr[leftChild]>arr[i]))
        max = leftChild;
    else
        max = i;
    if((rightChild < n)&&(arr[rightChild] > arr[max]))
        max = rightChild;
    if(max != i)
    {
        swap(arr, i, max);
        Heapify(arr, max, n);
    }
}

/* Create Heap */
void BuildHeap(vector<int>& arr)
{
    int i, n = arr.size();
    for(i=n/2; i>=0; i--)
        Heapify(arr, i, n);
}

/* Heap sort - we take first element from heap and place it at the end of array */
void HeapSort(vector<int>& arr)
{
    int sortedArr = 1, n = arr.size() - 1, size = n;
    BuildHeap(arr);
    while(sortedArr<=size)
    {
        swap(arr, 0, n);
        sortedArr++;
        Heapify(arr, 0, n--);
    }
}

int main()
{
    int n, i, a;
    vector<int> arr;
    
    /* Input */
    cin >> n;
    for(i=0; i<n; i++)
    {
        cin >> a;
        arr.push_back(a);
    }
    
    /* Sorting function */
    HeapSort(arr);

    /* Output */
    for(i=0; i<n; i++)
        cout << arr[i] << " ";

    return 0;
}
