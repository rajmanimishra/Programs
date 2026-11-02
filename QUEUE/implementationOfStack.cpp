#include <iostream>
using namespace std;
class Queue
{
    int *arr;
    int front;
    int rear;
    int size;

public:
    Queue(int n)
    {
        arr = new int[n];
        front = -1;
        rear = -1;
        size = n;
    }
    // push operation
    void push(int x)
    {
        // check the array , ki wo ful to nahi hai
        if (rear == size - 1)
            return;

        if (front == -1)
            front = 0;

        rear++;
        cout << " The element : " <<  ( arr[rear] = x) << " added to the queue\n";
    }
};

int main()
{
    Queue q(5);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);

    return 0;
}