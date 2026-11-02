#include <iostream>
#include <vector>
#include <cmath>

bool digits_in_base(int n, int& base, std::vector<int>& digits) {
    int fraction, remainder;
    do {
        fraction = n / base;
        remainder = n % base;
        digits.insert(digits.begin(), remainder);
        n = fraction;
    } while (n!=0);
    return (base>=2)&&(base<=16);
}

void print_digits_as_number(std::vector<int>& digits) {
    char digit_chars[16] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    for (int i = 0; i<digits.size(); i++) {
        std::cout<<digit_chars[digits[i]];
    }
    std::cout<<std::endl;
}

int digits_to_decimal(std::vector<int>& digits, int& base) {
    int output = 0, i = 0, power = digits.size()-1;
    while (i<digits.size()) {
        output+=digits[i]*pow(base, power);
        i++;
        power--;
    }
    return output;
}

int main() {
    int num = 250;
    int base = 16;
    std::vector<int> digits;

    if (digits_in_base(num, base, digits)) {
        print_digits_as_number(digits);

        int decimal = digits_to_decimal(digits, base);
        std::cout << "Decimal number restored from digits: " << decimal << std::endl;
    } else {
        std::cout << "Invalid base" << std::endl;
    }

    return 0;
}