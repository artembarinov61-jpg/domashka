#include <iostream>

long long fib_naive(int n) {
    if (n <= 1) return n;
    return fib_naive(n-1) + fib_naive(n-2);
}

int main() {
    int n = 10;
    for (int i = 0; i <= n; ++i)
        std::cout << "F(" << i << ") = " << fib_naive(i) << '\n';
    return 0;
}