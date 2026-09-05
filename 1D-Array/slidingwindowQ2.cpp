#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int arr[6] = {2,1,5,1,3,2};
   int n=6;
   int left=0;
   int right=0;
   int currSum=0;
   int maxSum=0;
   int k=3;

   while(right<n)
   {
    currSum=currSum+arr[right];//esko hmesa calculate karo, right ko add karo
   
    if(right-left+1==k)
    {
       maxSum=max(currSum,maxSum);
       currSum=currSum-arr[left];
       left++;
    }
    right++;
   }
   cout<<maxSum<<endl;

        
    
    return 0;
}