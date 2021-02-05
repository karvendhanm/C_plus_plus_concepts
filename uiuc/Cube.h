#ifndef C_PLUS_PLUS_CONCEPTS_CUBE_H
#define C_PLUS_PLUS_CONCEPTS_CUBE_H

#endif //C_PLUS_PLUS_CONCEPTS_CUBE_H

#pragma once

#include "Shape.h"
#include "HSLAPixel.h"

namespace uiuc {
    class Cube : public Shape{
        public:
            Cube(double width, uiuc::HSLAPixel color);
            double getVolume() const;
        private:
            uiuc::HSLAPixel color_;
    };
}
