/*
 * CS106L Assignment 3: Make a Class
 * Created by Fabio Ibanez with modifications by Jacob Roberts-Baca.
 */

#include "class.h"
#include <iostream>

void sandbox() {
  // STUDENT TODO: Construct an instance of your class!
  Rectangle rectangle = Rectangle(1, 4);
  std::cout << rectangle.getArea() << '\n';
}