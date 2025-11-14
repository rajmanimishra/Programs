#include <iostream>
using namespace std;
#include <vector>

int main()
{
    vector<int> v;
    v.push_back(5);
    v.push_back(7);
    v.push_back(6);
    v.push_back(8);
    v.push_back(2);
    v.push_back(1);
    v.push_back(3);

    // method 1 for printing
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }

    cout << endl;
    // method 2 for printing

    for (int i : v)
        cout << i << " ";
    cout << endl;

    v.pop_back();
    for (int i : v)
        cout << i << " ";

    cout << endl;
    cout << " The size of the vector is :" << v.size() << " " << "The capacity of the vector :" << v.capacity();
    cout << endl;
    cout << endl;

    // inserting the element into the vector
    v.insert(v.begin() + 2, 10);

    // modifying the existing element
    v[5] = 63;
    for (int i : v)
        cout << i << " ";

    cout << endl;
    cout << endl;

    cout << v.front() << " " << v.back();

    return 0;
}