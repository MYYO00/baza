#include <iostream>

int fibonacci(int n) {
    if (n <= 0) return 0;
    if (n == 1) return 1;
    
    int prev = 0;
    int current = 1;
    int next = 0;
    
    for (int i = 2; i <= n; ++i) {
        next = prev + current;
        prev = current;
        current = next;
    }
    
    return current;
}

int main() {
    int n;
    std::cout << "Podaj numer wyrazu w ciągu Fibonacciego: ";
    std::cin >> n;
    
    if (n < 0) {
        std::cout << "Podaj liczbę nieujemną." << std::endl;
    } else {
        int result = fibonacci(n);
        std::cout << "Wyraz o numerze " << n << " w ciągu Fibonacciego to: " << result << std::endl;
    }
    
    return 0;
}
