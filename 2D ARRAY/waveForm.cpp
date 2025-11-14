#include <iostream>
using namespace std;
int main()
{ // creating the 2d array !!
    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int row = 3;
    int col = 3;
    for (int j = 0; j < col; j++)
    {
        if (j % 2 == 0)
        {
            for (int i = 0; i < row; i++)
            {
                cout << arr[i][j] << " " << endl;
            }
        }
        else
            for (int i = row - 1; i >= 0; i--)
            {
                cout << arr[i][j] << " " << endl;
            }
    }
    return 0;
}