#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <vector>

int search_vector(std::string s, const std::vector<std::string>& vin) {
    for (int i = 0; i<vin.size(); i++) {
        if (s==vin[i]) return i;
    }
    return -1;
}

void intersection_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout) {
    for (int i = 0; i<vin1.size(); i++) {
        int index = search_vector(vin1[i], vin2);
        if (index!=-1) vout.push_back(vin1[i]);
    }
}

void union_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout) {
    for (int i = 0; i<vin1.size(); i++) {
        int index = search_vector(vin1[i], vin2);
        if (index==-1) vout.push_back(vin1[i]);
    }
    for (int i = 0; i<vin2.size(); i++) vout.push_back(vin2[i]);
}

int main(){
    std::ifstream infile1, infile2;
    std::ofstream outfile1, outfile2;
    infile1.open("warehouse1.txt");
    infile2.open("warehouse2.txt");
    outfile1.open("union.txt");
    outfile2.open("intersection.txt");

    // TODO

    std::vector<std::string> house1, house2, union_v, intersection_v;

    if(!infile1.is_open() || !infile2.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    std::string tmp;

    while(infile1 >> tmp){
        house1.push_back(tmp);
    }

    while (infile2 >> tmp) {
        house2.push_back(tmp);
    }

    union_vector(house1, house2, union_v);
    intersection_vector(house1, house2, intersection_v);

    infile1.close();
    infile2.close();

    for (int i = 0; i<union_v.size(); i++) {
        outfile1<<union_v[i]<<std::endl;
    }

    for (int i = 0; i<intersection_v.size(); i++) {
        outfile2<<intersection_v[i]<<std::endl;
    }
    
    outfile1.close();
    outfile2.close();
}