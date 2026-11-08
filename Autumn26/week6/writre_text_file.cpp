#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <vector>

int main(){
    std::ifstream infile; 
    std::ofstream outfile;
    infile.open("input.txt");
    outfile.open("output.txt");

    std::vector<std::string> v;

    if(!infile.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    std::string tmp;

    while(infile >> tmp){
        v.push_back(tmp); 
        // instead of printing the values
        // as in the example above
        // first we store them in a vector
    }

    infile.close(); 

    for (int i = v.size()-1; i>=0; i--) {
        outfile<<v[i]<<std::endl;
    }

}