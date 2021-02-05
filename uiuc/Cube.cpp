#include "Cube.h"

namespace uiuc {
    Cube::Cube(double width, uiuc::HSLAPixel color) : Shape(width) {
        color_ = color;
    }

    double Cube::getVolume() const {
        double width = this->getWidth();
        return width * width * width;
    }
}