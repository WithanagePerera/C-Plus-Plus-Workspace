// Allows us to write an inline function for snippets of code
// that are not going to be reused and aren't worth naming

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> test;

    for (int i = 0; i < 25; i++)
        test.push_back(i);

    // Lambda to count count numbers greater than 15
    int number = coutn_if(test.begin(), test.end(), [])
}