#include <iostream>


void swap(double& s1, double& s2) {
    double tmp;
    tmp=s1;
    s1=s2;
    s2=tmp;
}
void sort_three_numbers(double& s1, double& s2, double& s3) {
    if (s1>s2) {
        swap(s1,s2);
    }
    if (s2>s3) {
        swap(s2,s3);
    }
    if (s1>s2) {
        swap(s1,s2);
    }
}

int main() {
    double n1, n2, n3;
    std::cout<<"Input 3 numbers: "<<std::endl;
    std::cin>>n1>>n2>>n3;
    sort_three_numbers(n1,n2,n3);
    std::cout<<n1<<","<<n2<<","<<n3;
}