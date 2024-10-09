//Task2
#include <iostream>

int countSetBits(int number) {
    int count = 0;
    while (number) {
        count += number & 1;
        number >>= 1;
    }
    return count;
}

int main2() {
    int number;
    std::cout << "Enter number: ";
    std::cin >> number;

    int result = countSetBits(number);
    std::cout << "The amount of single bits in the number: " << result << "\n";

    return 0;
}
