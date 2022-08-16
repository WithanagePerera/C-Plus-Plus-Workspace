#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("paint.in", "r", stdin);
    freopen("paint.out", "w", stdout);

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int range = (b - a) + (d - c);
    int max, min;
    if (b > d)
        min = d;
    else
        min = b;

    if (a > c)
        max = a;
    else
        max = c;
    
    int intersection = min - max;

    if (intersection < 0)
        intersection = 0;

    cout << range - intersection;
    return (range - intersection);
}