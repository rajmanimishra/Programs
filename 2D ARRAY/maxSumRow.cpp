#include <iostream>
using namespace std;
int main()
{ // creating the 2d array !!
    int i, j;
    int index = -1;
    int sum = INT16_MIN;

    int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    for (int i = 0; i < 3; i++)
    {
        int total = 0;
        for (int j = 0; j < 4; j++)
        {
            total += arr[i][j];
        }
        if (sum < total)
        {
            sum = total;
            index = i;
        }
    }
    cout << sum << " " << index;

    return 0;
}