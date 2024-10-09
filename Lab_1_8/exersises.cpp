//Task1
#include <iostream>

bool isEven(int number) {
    return (number & 1) == 0;
}

int main() {
    int number;
    std::cout << "Enter number: ";
    std::cin >> number;

    if (isEven(number)) {
        std::cout << number << " is even\n";
    }
    else {
        std::cout << number << " is odd\n";
    }

    return 0;
}