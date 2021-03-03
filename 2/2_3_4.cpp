#include <iostream>

int doubleNumber(int x){
    return x*2;
}

int main(){
    int num;
    std::cout<<"Enter the number you want to double: \n";
    std::cin>>num;
    std::cout<<"Doubled number is: "<<doubleNumber(num)<<"\n";
    return 0;
}