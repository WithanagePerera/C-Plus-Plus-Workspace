#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    cout << (b-a) + (d-c) - max(0, (min(b, d) - max(a, c)));
}