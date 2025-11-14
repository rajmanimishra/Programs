#include <iostream>
using namespace std;
int main()
{ // creating the 2d array !!
    int i, j;
    int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12}; // taking the input of the array
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << endl; // printing the entire array
        }
    }

    return 0;
}