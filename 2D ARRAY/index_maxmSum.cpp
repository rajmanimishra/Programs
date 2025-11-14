// print the index of the maximum sum index of the array
#include <iostream>
using namespace std;
int main()
{

    int sum = INT16_MIN;
    int row = 3;
    int col = 4;
    int index = -1;
    int arr1[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

    for (int i = 0; i < row; i++)
    {
        int total = 0;
        for (int j = 0; j < col; j++)
            total += arr1[i][j];
        if (sum < total)
        {
            sum = total;
            index = i;
        }
    }
    cout << index << endl;

    return 0;
}