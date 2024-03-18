#include <iostream>
using namespace std ;
int main() {
    int rows = 4;
    int number = 1;

    for (int i = 1; i <= rows; i++) {
        // Print spaces
        for (int space = 1; space <= rows - i; space++) {
            std::cout << "  ";
        }

        // Print numbers
        for (int j = 1; j <= i; j++) {
            std::cout << number << " ";
            number++;
        }

        std::cout << std::endl;
    }

    return 0;
}