#include <iostream>
#include <fstream>

int main(int argc, char* argv[]){

    std::ifstream file_to_print;
    file_to_print.open(argv[argc-1]);
    if (!file_to_print.is_open()) {
        std::cout << "error opening file"<<std::endl;
        std::exit(EXIT_FAILURE);
    }

    std::string output;
    while (std::getline(file_to_print, output)) {
        std::cout<<output<<std::endl;
    }



}