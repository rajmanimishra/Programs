#include <iostream>
#include <algorithm>
#include<vector>
using namespace std;
int main()
{
    int arr[9] = {1,3,2,6,-1,4,1,8,2};
   int n=9;
   int left=0;
   int right=0;
   float currSum=0;
   float currAvg=0;
   float k=5;
   vector<double>v;


   while(right<n)
   {
    currSum=currSum+arr[right];//esko hmesa calculate karo, right ko add karo
   
    if(right-left+1==k)
    {
      currAvg=currSum/k;
      v.push_back(currAvg);
      currSum=currSum-arr[left];
       left++;
    }
    right++;
   }
   for( float c:v)
   {
    cout<<c<<endl;
   }

        
    
    return 0;
}