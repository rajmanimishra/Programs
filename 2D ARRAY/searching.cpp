#include <iostream>
using namespace std;
int main()
{

    // initialising the variables
    int m, n, i, j;
    cout << "Enter the value of the matrix :";
    cin >> m >> n;
    // taking the user input
    cout << "Enter the value of the matrix :";
    int arr[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    int target;
    cout << "target :";
    cin >> target;
    if (arr[i][j] == target)
    {
        cout << "target found ";
    }
    else
        cout << "not found ";

    return 0;
}