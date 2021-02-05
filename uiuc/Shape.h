#ifndef C_PLUS_PLUS_CONCEPTS_SHAPE_H
#define C_PLUS_PLUS_CONCEPTS_SHAPE_H

#endif //C_PLUS_PLUS_CONCEPTS_SHAPE_H

#pragma once

class Shape{
    public:
        Shape();
        Shape(double width);
        double getWidth() const;
    private:
        double width_;
        double height_;
};