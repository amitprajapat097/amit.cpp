#include <iostream>
#include <vector>

bool isPrime(int num) {
    if (num < 2) {
        return false;
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

std::vector<int> getAlternativePrimes(int n) {
    std::vector<int> result;
    if (n <= 0) {
        std::cout << "Please provide a positive value for n." << std::endl;
        return result;
    }

    int num = 2; // Start with the first prime number
    int count = 0;

    while (count < n) {
        if (isPrime(num)) {
            result.push_back(num);
            count++;
        }
        num++;
    }

    return result;
}

int main() {
    int n = 4; // You can change the value of n
    std::vector<int> alternativePrimes = getAlternativePrimes(n);

    std::cout << "First " << n << " alternative prime numbers: ";
    for (int prime : alternativePrimes) {
        std::cout << prime << " ";
    }
    std::cout << std::endl;

    return 0;
}
