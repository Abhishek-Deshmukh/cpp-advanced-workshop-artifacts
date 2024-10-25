#include <iostream>
#include <vector>

#include "Shapes.h"
int main() 
{
    Circle c{0, 0, 3};
    std::cout << c.get_area() << "\n";
    c.draw();

    std::vector<Shape*> vs;

    for (double i = 0; i < 10; i++) {
        vs.emplace_back(new Rectangle{1, i+2, 3, i});
        vs.emplace_back(new Circle{1-i, i+2, i*3});
    }

    for (auto el: vs ) {
        el->draw();
        std::cout << "Area: " << el->get_area() << "\n"; // how do I get this to work?
    }

}