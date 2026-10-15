#include <iostream>

int main() {
    int n;
    int steps = 0;
    std::cout<<"Input the starting integer: ";
    std::cin>>n;
     while (n>1) {
        std::cout<<n<<std::endl;
        n=((n%2==0)?n/2:3*n+1);
        steps++;
    };
    std::cout<<n<<std::endl<<"Number of steps: "<<steps;
}