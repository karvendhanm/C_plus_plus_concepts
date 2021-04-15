#include <iostream>
#include "arrays.h"

void arrays_construct() {
    int values[10] = {2, 3, 5, 7, 11, 13, 15, 17, 23, 29};
    for(unsigned i=0; i<10; i++) {
        std::cout << "the address values are: " << &values[i] << std::endl;
    }
    std::cout << "the size is: " << sizeof(values) << std::endl;
}