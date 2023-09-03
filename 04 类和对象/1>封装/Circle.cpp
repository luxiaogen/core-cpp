#include "../头文件/Circle.h"

void Circle::setRadius(int radius)
{
  this->radius = radius;
}

int Circle::getRadius()
{
  return this->radius;
}

void Circle::setCenter(Point center)
{
  this->center = center;
}

Point Circle::getCenter()
{
  return this->center;
}
