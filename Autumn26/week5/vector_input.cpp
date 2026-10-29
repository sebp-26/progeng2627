#include <iostream>
#include <vector>

int search_vector(int n, const std::vector<double>& vin){
    for (int i = 0; i<vin.size(); i++) {
        if (vin[i]==n) {
            return i;
        }
    }
    return -1;
}

int min_vector_element(const std::vector<double>& vin) {
    int length = vin.size();
    if (length==0) return -1;
    int min_value = vin[0];
    for (int i = 1; i<length; i++) {
        if (vin[i]<min_value) min_value=vin[i];
    }
    return min_value;
}

int main() {
    std::vector<double> test_vector{5,4,3,6,1};
    std::cout<<search_vector(3,test_vector)<<std::endl;
    std::cout<<search_vector(4,test_vector)<<std::endl;
    std::cout<<search_vector(8,test_vector)<<std::endl;
    std::cout<<std::endl<<min_vector_element(test_vector);
}