#include<iostream>
#include<vector>

using namespace std;

void insertSort(vector<int>& arr, int n)
{
    int a=0, i, toCompare, place;
    while(a<n)
    {
        /* Getting element to compare with sorted array */
        toCompare = arr[a];
        place = a;

        /* Finding place for new element */
        for(i=a-1; i>=0; i--)
        {
            if(arr[i]>toCompare) place--;
            else break;
        }

        /* Insert new element in proper place */
        arr.insert(arr.begin()+place, toCompare);
        a++;
        arr.erase(arr.begin()+a);
    }
}

int main()
{
    vector<int> arr;
    int n, i, a;

    /* Input */
    cout << "Number of elements in array:";
    cin >> n;
    for(i=0; i<n; i++)
    {
        cin >> a;
        arr.push_back(a);
    }

    /* Sorting function */
    insertSort(arr, n);

    /* Output */
    for(i=0; i<n; i++) cout << arr[i] << " ";

    return 0;
}
