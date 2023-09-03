#include <iostream>
#include "../头文件/Circle.h"
#include "../头文件/Point.h"

using namespace std;

// 判断点和圆的关系
void isInCircle(Circle &circle, Point &point)
{
  // 计算机两点之间距离的平方
  int distance =
          (circle.getCenter().getX() - point.getX()) * (circle.getCenter().getX() - point.getX()) +
  (circle.getCenter().getY() - point.getY()) * (circle.getCenter().getY() - point.getY());
  // 计算机半径的平方
  int r_distance = circle.getRadius() * circle.getRadius();
  // 判断关系
  if (distance == r_distance)
    cout << "点在圆上" << endl;
  else if (distance > r_distance)
    cout << "点在圆外" << endl;
  else
    cout << "点在圆内" << endl;
}

int main()
{
  Circle circle;
  circle.setRadius(10);
  Point center;
  center.setX(10);
  center.setY(0);
  circle.setCenter(center);
  Point p;
  p.setX(10);
  p.setY(10);
  isInCircle(circle, p);
  return 0;
}