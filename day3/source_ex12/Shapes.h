#ifndef SHAPES_H
#define SHAPES_H

#include <iostream>

class Shape;
class Rectangle;
class Circle;


class Shape
{
private:
    double x;
    double y;
public:
    Shape(double argx, double argy): x{argx}, y{argy} {}
    virtual void draw() = 0;
    virtual double get_area() = 0;
    double get_x() {return x;}
    void set_x(double x_) {x = x_;}
    double get_y() {return y;}
    void set_y(double y_) {y = y_;}

};

class Rectangle: public Shape
{
private:
    double width;
    double height;
public:
    Rectangle(double argx, double argy, double argw, double argh): 
    Shape{argx, argy}, width{argw}, height{argh}
    {}
    double get_width() {return width;}
    double get_height() {return height;}
    void set_width(double w_) {width=w_;}
    void set_height(double h_) {height=h_;}
    void draw();
    double get_area();
};

class Circle: public Shape
{
private:
    double radius;
public:
    Circle(double argx, double argy, double argr): Shape{argx, argy}, radius{argr}
    {}
    double get_radius() {return radius;}
    void set_radius(double r) {radius=r;}
    void draw();
    double get_area();
};

#include "Draw.h"
#include "Area.h"

void Circle::draw() {Draw::draw(this);}
double Circle::get_area() {return Area::get_area(this);}
void Rectangle::draw() {Draw::draw(this);}
double Rectangle::get_area() {return Area::get_area(this);}

#endif