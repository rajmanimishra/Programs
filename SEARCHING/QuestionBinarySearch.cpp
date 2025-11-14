#include <iostream>
using namespace std;
int BinarySearch(int arr[], int n, int target)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] > target)
        {
            start = mid +1;
        }
        else
        end=mid-1;
    }
    return -1;
}

int main()
{
    int arr[5] = {30, 28, 20, 16, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    int target = 30;

    cout << BinarySearch(arr, n, target);

    return 0;
}