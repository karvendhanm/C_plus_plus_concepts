#include "Shape.h"

//Shape::Shape() {
//    width_ = 1.0;
//}

// custom default constructor is calling the 1 parameter constructor.
Shape::Shape() : Shape(1.0) {
    // Nothing.
}

//Shape::Shape(double width) {
//    width_ = width;
//}

// assigning the value of private member.
Shape::Shape(double width) : width_(width) {
    // Nothing.
}

double Shape::getWidth() const {
    return width_;
}