#include <iostream>
#include <string>

int main() {
    int year;
    std::cout<<"Type your year: ";
    std::cin>>year;
    std::cout<<(((year%4==0)&&((year%100!=0)||year%400==0))?"Leap year!":"Not a leap year");
}