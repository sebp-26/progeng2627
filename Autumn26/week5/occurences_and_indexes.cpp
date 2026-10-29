#include <iostream>
#include <vector>

int main() {
    int n, s, input;
    int count = 0;
    std::cout<<"n= ";
    std::cin>>n;
    std::vector<int> v;
    std::vector<int> indices;

    for (int i = 0; i<n; i++) {
        std::cin>>input;
        v.push_back(input);
    }

    std::cout<<"s= ";
    std::cin>>s;
    for (int i = 0; i<n; i++) {
        if (v[i]==s) {
            count++;
            indices.push_back(i);
        }
    }

    std::cout<<"There are "<<count<<" occurances of "<<s<<" at indices:"<<std::endl;
    for (int i = 0; i<count; i++) {
        std::cout<<indices[i]<<std::endl;
    }
}