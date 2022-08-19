#include <iostream>
#include <algorithm>

using namespace std;

struct Rectangle
{
    int blx, bly, trx, trY;

    int area()
    {
        return ((trx-blx) * (trY-bly));
    }
};

int intersect(Rectangle a, Rectangle b)
{
    int length, height;

    length = max(0, (min(a.trx, b.trx) - max(a.blx, b.blx)));
    height = max(0, (min(a.trY, b.trY) - max(a.bly, b.bly)));

    return length*height;
}


int main()
{
    Rectangle left, right, truck;

    cin >> left.blx >> left.bly >> left.trx >> left.trY;
    cin >> right.blx >> right.bly >> right.trx >> right.trY;
    cin >> truck.blx >> truck.bly >> truck.trx >> truck.trY;

    cout << left.area() + right.area() - intersect(left, truck) - intersect(truck, right);
}