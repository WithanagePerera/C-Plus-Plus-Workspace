// FIFO (first in first out)
// Elements are inserted at the back and are accessed from the front

#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<int> test;

    for (int i = 0; i < 25; i++)
        test.push(i);

    int i = 0;
    while (i != test.size())
    {
        cout << test.front() << " ";
        test.pop();
    }
}

// Standard Functions:
// empty() = tests whether contain is empty
// size() = returns size
// front() = access next element
// back() = access last element
// push() = insert element at front
// pop() = remove element at back
// swap() = swaps elements of two queues