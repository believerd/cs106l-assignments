#include "class.h"
#include <iostream>

Rectangle::Rectangle() : width(1), length(1) {}

Rectangle::Rectangle(const double &w, const double &l) : width(w), length(l) {}

void Rectangle::setWidth(const double &width) { this->width = width; }
void Rectangle::setLength(const double &length) { this->length = length; }
double Rectangle::getArea() const { return width * length; }
double Rectangle::getWidth() const { return width; }
double Rectangle::getLength() const { return length; }

void Rectangle::hello() const { std::cout << "hello\n"; }