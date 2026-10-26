#include <iostream>

int gcd(int a, int b) {
    int numerator, divisor, remainder = 1;
    if (a==b) {
        return a;
    } else if (a>b)
    {
        numerator=a;
        divisor=b;
    } else {
        numerator=b;
        divisor=a;
    }
    //std::cout<<numerator<<","<<divisor<<","<<remainder<<std::endl;
    while (remainder!=0) {
        remainder = numerator%divisor;
        numerator=divisor;
        divisor=remainder;
        //std::cout<<numerator<<","<<divisor<<","<<remainder<<std::endl;
    }

    return numerator;
    
}

int euler_totient(int n) {
    int output = 0;
    for (int i = 1; i<n; i++) {
        if (gcd(i,n)==1) {
            output++;
        }
    }
    return output;
}

int main() {
    while (true) {
        int number;
        std::cin>>number;
        std::cout<<euler_totient(number)<<std::endl<<std::endl;
    }
}