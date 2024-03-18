#include <iostream>
using namespace std;

int main() {
    int l, b;
    char shape;

    cout << "Enter length and breadth: ";
    cin >> l >> b;

    if (l == b) {
        // shape is square
        shape = 'S';
    } else {
        // shape is rectangle
        shape = 'R';
    }

    cout << "The shape: " << shape << endl;
    return 0;
}