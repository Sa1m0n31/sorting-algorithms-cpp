#include<iostream>
#include<vector>

using namespace std;

void bubbleSort(vector<int>& arr, int n)
{
    int a=n, i, x, y;
    while(a>0)
    {
        for(i=0; i<a-1; i++)
        {
            /* Getting two elements to compare */
            x = arr[i];
            y = arr[i+1];

            /* If first is greater than second - swap */
            if(x>y)
            {
                arr[i] = y;
                arr[i+1] = x;
            }
        }
        a--;
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
    bubbleSort(arr, n);

    /* Output */
    for(i=0; i<n; i++) cout << arr[i] << " ";

    return 0;
}
