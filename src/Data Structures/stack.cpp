// LIFO (last in first out)
// New elements are removed first

#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<int> test;
    for (int i = 0; i < 25; i++)
        test.push(i);

    int i = 0;
    while (i != test.size())
    {
        cout << test.top() << " ";
        test.pop();
    }
}

// Standard Functions:
// empty() = tests whether stack
// size() = returns size
// top() = returns last element
// push() = inserts element at top
// pop() = removes top element
// swap() = swap elements from 2 stacks