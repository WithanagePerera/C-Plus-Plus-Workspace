#include <iostream>

using namespace std;

int main()
{
    array <int,  25> test;
    for (int i = 0; i < 25; i++)
    {
        test[i] = i;
    }

    for (int pass : test)
    {
        cout << pass <<endl;
    }

    // Different array instantiation

    int [25] testTwo = {};
    for (int i = 24; i >= 0; i--)
    {
        testTwo[i] = i;
    }

    for (int pass : testTwo)
    {
        cout << pass << endl;
    }
}