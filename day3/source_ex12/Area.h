#ifndef AREA_H
#define AREA_H
#include "Shapes.h"

class Area {
public:
    static double get_area(Circle *c) {
        return 3.1415 * c->get_radius()*c->get_radius();
    }
    static double get_area(Rectangle *r) {
        return r->get_width() * r->get_height();
    }
};

#endif