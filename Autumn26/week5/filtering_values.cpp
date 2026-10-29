#include <iostream>
#include <vector>

int main() {
    int n, t, input;
    std::cout<<"n= ";
    std::cin>>n;
    std::vector<int> v;
    for (int i = 0; i<n; i++) {
        std::cin>>input;
        v.push_back(input);
    }
    std::cout<<"t= ";
    std::cin>>t;
    for (int i = 0; i<n; i++) {
        if (v[i]>t) {
            std::cout<<v[i]<<std::endl;
        }
    }
}