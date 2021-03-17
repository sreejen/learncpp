#include "io.h"
#include <iostream>

int readNumber(){
    int x;
    std::cout<<"Enter the number: ";
    std::cin>>x;
    return x;
}

void writeAnswer(int x){
    std::cout<<x<<"\n";
}