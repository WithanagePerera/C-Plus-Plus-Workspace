#include <iostream>
#include <cmath>

using namespace std;

struct Rectangle(int a, int b, int c, int d)
{
    int blx = a;
    int bly = b;
    int trx = c;
    int trY = d;

    int area()
    {
        return ((trx-blx) * (try-bly));
    }
}

int intersect(Rectangle a, Rectangle b)
{
    int length, height;

    length = max(0, (min(a.trx, b.trx) - max(a.blx, b.blx)));
    height = max(0, (min(a.try, b.trY) - max(a.bly, b.bly)));

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