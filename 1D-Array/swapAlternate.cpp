#include <iostream>
using namespace std;

int main()
{
    int arr[6] = {1,2,3,4,5,6};
    int n = 6;
    for (int i = 0; i <=n; i+=2)
    {
        swap(arr[i], arr[i + 1]);
    }
    cout << "Array after swapping :" << endl;
    for (int x : arr)

    {
        cout << x << endl;
    }

    return 0;
}