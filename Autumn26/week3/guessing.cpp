#include <iostream>

int main() {
    int lower = 0;
    int upper = 100;
    int guess, steps;
    std::string response = "equal";
    std::cout<<"Think of an integer between 0-100";
    while (true) {
        steps++;
        int guess = (lower+upper)/2;
        std::cout<<"Is your number \"less\", \"equal\", or \"more\" than "<<guess<<"? ";
        std::cin>>response;
        std::cout<<std::endl;
        if (response=="less") {
            upper=guess;
        } else if (response=="more")
        {
            lower=guess;
        } else {
            std::cout<<"Finished in "<<steps<<" steps!";
            return 0;
        }
        
    }
}