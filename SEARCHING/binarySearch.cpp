#include <iostream>
using namespace std;
int binarySearch(int arr[], int size, int target)
{
    int start = 0, end = size - 1;

    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else
            end = mid - 1;
    }
    return -1;
}
int main()
{
    int size;
    cout << "Enter the size of the array : ";
    cin >> size;
    int arr[size];
    cout << "Enter the elements : ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int target;
    cout<<"Enter the target element : ";
    cin>>target;
   

    // function call
    int result = binarySearch(arr, size, target);
    if (result != -1)
    {
        cout << "Element is found at index : " << result;
    }
    else
        cout << "Element is not found array";

    return 0;
}