#include <iostream>

int main(){
    int val1;
    int val2;
    std::cout<<"Enter the first number:";
    std::cin>>val1;
    std::cout<<"Enter the second number";
    std::cin>>val2;
    std::cout<< val1 << " + "<< val2 <<" = " <<val1+val2<<'\n';
    std::cout<<val1 << " - "<< val2 <<" = "  << val1-val2<<'\n';
    return 0;
}