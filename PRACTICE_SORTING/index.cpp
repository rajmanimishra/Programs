#include <iostream>
using namespace std;

int main()
{
    int arr[] = {9, 8, 7, 6, 5, 4, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = n - 2; i >= 0; i++)
    {
        int swapped = 0;
        for (int j = 0; j <= i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swapped++;
                swap(arr[j], arr[j + 1]);
            }
        }
        if (swapped == 0)
            break;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
