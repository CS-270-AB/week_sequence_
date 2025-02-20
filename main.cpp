#include "sequence.h"
#include <iostream>
int main(){
    sequence sq;
    sq.insert(20.0);
    sq.insert(30.0);
    std::cout << sq.size() << std::endl;
    sq.remove_current();
    std::cout << sq.size() << std::endl;
    return 0;
}