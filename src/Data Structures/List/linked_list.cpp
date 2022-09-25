#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

int main()
{
    list<int> test;

    for (int i = 0; i < 25; i++)
        test.push_back(i);

    for (int pass : test)
        cout << pass << " ";

    cout << endl << "Size of list: " << test.size() << "\n\n";

    test.pop_back();

    cout << "Removed last element." << endl;

    for (int pass : test)
        cout << pass << " ";

    test.pop_front();

    cout << "\n\n" << "Removed first element." << endl;
    
    for (int pass : test)
        cout << pass << " ";

    cout << "\n\n";

    cout << "Resized list to first 5 elements." << endl;
    test.resize(5);

    for (int pass : test)
        cout << pass << " ";

    cout << "\n\n";
}