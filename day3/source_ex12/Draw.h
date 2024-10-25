#ifndef DRAW_H
#define DRAW_H

#include <string>

#include "Shapes.h"

class Draw {
public:
    static void draw(Rectangle* r) {
        std::cout << "Rectangle at " << 
        "(" << r->get_x() << ", " << r->get_y() << ")"
        << " of dimensions (" << r->get_width() << ", " << r->get_height() << ")\n";
    }

    static void draw(Circle* c) {
        std::cout << "Circle at " << 
        "(" << c->get_x() << ", " << c->get_y() << ")"
        << " of radius " << c->get_radius() << "\n";
    }
};

#endif