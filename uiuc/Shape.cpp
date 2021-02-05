#include "Shape.h"

//Shape::Shape() {
//    width_ = 1.0;
//}

Shape::Shape() : Shape(1.0) {
    // Nothing.
}

//Shape::Shape(double width) {
//    width_ = width;
//}

Shape::Shape(double width) : width_(width) {
    // Nothing.
}

double Shape::getWidth() const {
    return width_;
}