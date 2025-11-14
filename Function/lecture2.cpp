#include<iostream>
using namespace  std;
void sum( int a , int b)
{
    int result=a+b;
   cout<<result<< endl;;
}
int main()
{
    int a,b;
    cout<<"Enter two numbers :";
    cin>>a>>b;
 sum(a,b);

    return 0;
}
