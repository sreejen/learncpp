#include "io.h"


int main(){
    int x1 { readNumber() };
    int x2 { readNumber() };
    writeAnswer(x1+x2);
    return 0;

}