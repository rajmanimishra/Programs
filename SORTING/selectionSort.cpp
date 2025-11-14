#include <iostream>
using namespace std;
#include<algorithm>
int main()
{
    int arr[8] = {2, 6, 5, 4, 7, 1, 9, 10};
    for (int i = 0; i < 8; i++)
    {
        int index = i;
        for (int j = i + 1; j < 8; j++)
        {
            if (arr[j] < arr[index])
            {
                index = j;
            }
        
        // swapping of the two numbers !!!
        swap(arr[i],arr[index]);
       }
        
    }
    for (int i = 0; i < 8; i++)
    {
        cout << arr[i] << " " << endl;
    } 
}