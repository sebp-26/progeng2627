#include <iostream>

int smallest_factor(int n) {
    for (int i = 2; i<=n; i++) {
        if (n%i==0) {
            return i;
        }
    }
    return n;
}

void primes_in_range(int start, int end) {
    std::cout<<std::endl;
    for (int i = start; i <= end; i++) {
        if (smallest_factor(i)==i) {
            std::cout<<i<<std::endl;
        }
    }
}

int main() {
    int n1, n2;
    std::cout<<"Please input a range of 2 integers: ";
    std::cin>>n1>>n2;
    primes_in_range(n1, n2);
}