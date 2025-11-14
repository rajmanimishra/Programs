//USING LINEAR SEARCH

#include<iostream>
using namespace std;
int main ()
{
    int n ;
    cout<<"Enter the size of the element : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the element : ";
    for( int i=0; i<n;i++)
    {
        cin>>arr[i];
    }
int maxElement=0;
    for( int i=0;i<n;i++)
    {
        if(arr[i]>arr[maxElement])
        {
            maxElement=i;
        }
    }

    cout<<"Maximum element Index is :";
    cout<<maxElement<<endl;







return 0;
}