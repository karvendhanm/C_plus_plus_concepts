#include "Shape.h"

Shape:Shape() {
    width_ = 1.0;
}

Shape:Shape(double width) {
    width_ = width;
}

double Shape::getWidth() const {
    return width_;
}