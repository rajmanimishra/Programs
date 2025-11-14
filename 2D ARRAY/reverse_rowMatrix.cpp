#include <iostream>
using namespace std;
int main()
{

    int i, j;
    int row = 3;
    int cols = 4;
    int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int start = 0;
    int end = cols - 1;
    for (int i = 0; i < row; i++)
    {
        while (start < end)
        {
            swap(arr[i][start], arr[i][end]);
            start++, end--;
        }
    }

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < cols; j++)
        {
            cout << arr[i][j] << endl; // printing the entire array
        }
    }
    return 0;
}