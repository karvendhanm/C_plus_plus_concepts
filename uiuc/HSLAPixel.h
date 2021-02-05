#ifndef C_PLUS_PLUS_CONCEPTS_HSLAPIXEL_H
#define C_PLUS_PLUS_CONCEPTS_HSLAPIXEL_H

#endif //C_PLUS_PLUS_CONCEPTS_HSLAPIXEL_H

#pragma once

namespace uiuc {
    class HSLAPixel {
        public:
            HSLAPixel();
            HSLAPixel(double hue, double saturation, double luminance);
            HSLAPixel(double hue, double saturation, double luminance, double alpha);

            static HSLAPixel BLUE;
            static HSLAPixel YELLOW;
            static HSLAPixel ORANGE;
            static HSLAPixel PURPLE;

        private:
            double h;
            double s;
            double l;
            double a;
    };
}
