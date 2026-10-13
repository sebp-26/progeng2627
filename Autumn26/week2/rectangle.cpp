#include <iostream>

int main() {
    float width, height, perimeter, area;
    std::cout<<"Input a width: ";
    std::cin>>width;
    std::cout<<"Input a height: ";
    std::cin>>height;
    perimeter = 2*(width+height);
    area = width*height;
    std::cout<<"Perimeter: "<<perimeter<<" Area: "<<area;
}