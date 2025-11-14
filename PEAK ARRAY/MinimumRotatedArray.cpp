#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;
    int arr[n];
    cout << "Enter the element in the sorted form of one side  : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans, start = 0, end = n - 1, mid;
    while (start <= end)
    {
        mid = end + (start - end) / 2;
        // left side sorted
        if (arr[mid] >= arr[0])
        {
            start = mid + 1;
        }
        //right side sorted 
        else if (arr[mid] < arr[0])
        {
            ans = arr[mid];
            end = mid - 1;
        }
    }

    cout<<ans;
    return 0;
}