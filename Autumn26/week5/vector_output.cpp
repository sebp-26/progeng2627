#include <iostream>
#include <vector>

void append_vectors(const std::vector<int>& vin1, const std::vector<int>& vin2, std::vector<int>& vout) {
    for (int i = 0; i<vin1.size(); i++) vout.push_back(vin1[i]);
    for (int i = 0; i<vin2.size(); i++) vout.push_back(vin2[i]);
}

void filter_v(const std::vector<double>& vin, double t, std::vector<double>& vout) {
    for (int i = 0; i<vin.size(); i++) if (vin[i]<t) vout.push_back(vin[i]);
}

int main(){
    std::vector<int> test1{1,2,3};
    std::vector<int> test2{4,5,6};
    std::vector<double> test3{1,2,3,3.5,6,7,10};
    std::vector<int> vout1;
    std::vector<double> vout2;
    append_vectors(test1, test2, vout1);
    filter_v(test3, 5, vout2);

    std::cout<<"Appending test: "<<std::endl;
    for (int i = 0; i<vout1.size(); i++) std::cout<<vout1[i]<<std::endl;
    std::cout<<"Filtering test: "<<std::endl;
    for (int i = 0; i<vout2.size(); i++) std::cout<<vout2[i]<<std::endl;
}