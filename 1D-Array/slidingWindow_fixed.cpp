#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int arr[5] = {200, 100, 300, 10, 50};
    int low = 0;
    int high = 1;
    int sum = 0;
    int n = 5;
    for (int i = 0; i <= high; i++)
    {
        sum += arr[i];

        while (high < n)
        {
            int res = 0;
            res = max(res, sum);
            low++, high++;
            if (high == n)
                break;
            else
            {
                sum -= arr[low - i];
                sum+=arr[high];
            }
            cout<<res;

        }
    }
    return 0;
}