#include <iostream>
#include "uiuc/Cube.h"

int changeittomain() {
    uiuc::Cube c(5, uiuc::HSLAPixel::BLUE);
    std::cout << c.getVolume() << std::endl;

    return 0;
}