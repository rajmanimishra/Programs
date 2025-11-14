#include <iostream>
using namespace std;
int main()
{
    int n ,start = 0, end = n - 1,First=-1,Last=-1;
    cout << "Enter the size of the element : ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int target;
    cout << "Enter the target : ";
    cin >> target;

    // applying binary search algo
    while (start <= end)

    {
       
        int mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            First=mid;
            end=mid-1;
            

        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else
            end = mid - 1;
    }
    cout<<First;
    return 0;
}
