#include <iostream>
using namespace std;
int main()
{
    int n;

    cout << "Enter the size of the array :";
    cin >> n;
    int arr[n];
    cout << "Enter the list of the array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // outer loop
    for (int i = n - 2; i >= 0; i++)
    {
        int swapped = 0;

        // inner loop decide the printing
        for (int j = 0; j <= i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swapped = 1;
                swap(arr[j], arr[j + 1]);
            }
        }
        if (swapped == 0)
        {
            break;
        }
    }
    cout << "The sorted array is :";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}