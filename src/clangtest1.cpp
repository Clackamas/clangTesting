#include <iostream>


int
main(int argc, char **argv) {
    int aBogusValue1 = 1;
    int aBogusValue2 = 2;

    aBogusValue1 += aBogusValue2++;

    std::cout << "Hello, World!" << std::endl;
}
