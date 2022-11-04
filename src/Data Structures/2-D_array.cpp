#include <iostream>
#include <array>

using namespace std;

int main()
{
    // Instantiation Method 1:
    const uint ROWS = 5;
    const uint COLUMNS = 2;
    
    int test[ROWS][COLUMNS] = {{0, 1}, {2, 3}, {4, 5}, {6, 7}, {8, 9}};

    for (uint x = 0; x < ROWS; x++)
        for (uint y = 0; y < COLUMNS; y++)
            cout << test[x][y] << " ";

    cout << endl;

    // Instantiation Method 2:
    int test2[ROWS][COLUMNS] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (uint x = 0; x < ROWS; x++)
        for (uint y = 0; y < COLUMNS; y++)
            cout << test[x][y] << " ";

    cout << endl;

    // Instantiation Method 3:
    int test3[ROWS][COLUMNS];
    for (int x = 0; x < ROWS; x++)
        for (int y = 0; y < COLUMNS; y++)
            test3[x][y] = test2[x][y];

    for (uint x = 0; x < ROWS; x++)
        for (uint y = 0; y < COLUMNS; y++)
            cout << test[x][y] << " ";

    cout << endl;
}