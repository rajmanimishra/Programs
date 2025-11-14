#include <iostream>
using namespace std;

void selectionSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int index = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[index])
                index = j;
        }
        swap(arr[i], arr[index]);
    }
}
int main()
{
    int arr[8] = {9, 8, 7, 5, 4, 6, 3, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Original Array : ";
    for (int x : arr)
        cout << x << " " <<endl;
    selectionSort(arr, size);
    cout << "Swapped Array :";
    for (int x : arr)
        cout << x << " ";

    return 0;
}