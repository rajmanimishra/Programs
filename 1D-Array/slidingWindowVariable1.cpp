#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int arr[6] = {1, 3, 2, 1, 8, 2};
    int n = 6;
    int left = 0;
    int right = 0;
    int currSum = 0;
    int maxLen = 0;
    int target = 5;

    while (right < n)
    {
        currSum = currSum + arr[right]; // esko hmesa calculate karo, right ko add karo
        while (currSum > target)
        {
            currSum -= arr[left];
            left++;
        }

        maxLen = max(maxLen, right - left + 1);
        right++;
    }
    cout << maxLen;
    return 0;
}