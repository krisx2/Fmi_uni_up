#include <iostream>

long long reverseNum(long long x) {
    long long reversed = 0;
    while (x > 0) {
        reversed = reversed * 10 + (x % 10);
        x /= 10;
    }
    return reversed;
}

int main() {
    long long x;
    std::cin >> x;

    long long rev = reverseNum(x);

    long long max_number = 0;
    int max_sequence = 0;

    long long current_number = 0;
    int current_length = 0;
    int prev_digit = -1;

    while (rev != 0) {
        int current_digit = rev % 10;

        if (prev_digit != -1 && current_digit < prev_digit) {
            current_number = current_number * 10 + current_digit;
            current_length++;
        } else {
            current_number = current_digit;
            current_length = 1;
        }

        if (current_length > max_sequence) {
            max_sequence = current_length;
            max_number = current_number;
        }

        prev_digit = current_digit;
        rev /= 10;
    }

    std::cout << "Максимална дължина: " << max_sequence << std::endl;
    std::cout << "Подчисло: " << max_number << std::endl;

    return 0;
}