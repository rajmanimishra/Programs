#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter the size of the array : ";
    cin >> size;
    int arr[size];
    cout << "Enter the elements : ";
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    for (int i = 1; i < size; i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (arr[j] < arr[j - 1]) //
            {
                swap(arr[j], arr[j - 1]);
            }
            else
                break;
        }
    }
    cout<<"Sorted Array is: ";
    for (int i = 0; i < size; i++) // for each loop
    {
        cout << arr[i] << " ";
    }
}