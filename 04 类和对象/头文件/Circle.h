#pragma once // 防止头文件重复包含
#include <iostream>
#include "point.h"
using namespace std;


class Circle
{
public:
  void setRadius(int radius);

  int getRadius();

  void setCenter(Point center);

  Point getCenter();

private:
  int radius; // 半径
  Point center; // 圆心

};