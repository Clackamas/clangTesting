#include <iostream>


int main() {
    int aBogusValue1 = 1;
    int aBogusValue2 = 2;

    aBogusValue1 += aBogusValue2++;

    std::cout << "Hello, World!" << std::endl;

    return 0;
}
