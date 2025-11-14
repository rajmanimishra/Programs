#include <iostream>
using namespace std;
int main()
{ // creating the 2d array !!
    int i, j;
    int arr1[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int arr2[3][4] = {2, 1, 4, 5, 8, 7, 9, 6, 3, 5, 4, 11}; // taking the input of the array
    int ans[3][4];

    // sum ka code hai ye
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            ans[i][j] = arr1[i][j] + arr2[i][j]; // printing the entire array
        }
    }

    // print ka code hai ye

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            cout << ans[i][j] << endl; // printing the entire array
        }
    }
    return 0;
}