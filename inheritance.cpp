#include <iostream>

using namespace std;

class parentClass
{
    public:
        int x = 5;
        int y = 10;

        int math()
        {
            return x+y;
        }
};

class childClass : public parentClass
{
    public:
    int subtraction(int x, int y)
    {
        return y-x;
    }
}

int main()
{
    childClass test;
    cout << test.math();
}