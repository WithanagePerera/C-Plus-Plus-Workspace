#include <iostream>

using namespace std;

enum sample
{
    A = 10, B, C, D
};

int main()
{
    for (int i = A; i != D; i++)
    {
        cout << static_cast<sample>(i) << "\n";
    }
}