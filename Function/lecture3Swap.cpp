//swapping of the two numbers  BY Pass by reference
#include<iostream>
using namespace std;
 void Swap(int &a , int &b)
 {

    int c=a;
        a=b;
        b=c;

 }



int main()
{
    int a,b;
    cout<<"Enter the two numbers a and b :";
    cin>>a>>b;
    cout<<"Before swapping : ";
    cout<<a<<b<<endl;
    cout<<"After swapping : ";
    Swap(a,b);
    cout<<a<<b<< endl;

    return 0;
}
