//Task3
#include <iostream>

bool isBitSet(int number, int position) {
    return (number & (1 << position)) != 0;
}

int main() {
    int number, position;
    std::cout << "Enter number: ";
    std::cin >> number;
    std::cout << "Enter the bit position (numbering from 0): ";
    std::cin >> position;

    if (isBitSet(number, position)) {
        std::cout << "Bit in position " << position << " established\n";
    }
    else {
        std::cout << "Bit in position " << position << "not established\n";
        
    }

    return 0;
}