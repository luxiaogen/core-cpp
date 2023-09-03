#include <iostream>
using namespace std;

// 设计一个圆类，求圆的周长
const double PI = 3.14;
// class 代表一个一个类，类后面紧跟着的就是类名称
class Circle
{
  // 访问权限
public: // 公共权限
  // 属性
  int radius; // 半径
  // 行为

  /**
   * 获取圆的周长
   * @return 圆的周长
   */
  double calculate_zc()
  {
    return 2 * PI * radius;
  }
};


int main1()
{
  // 通过圆类 创建具体的圆(对象)
  Circle c; // 实例化：通过一个类 创建一个对象的过程
  c.radius = 3;
  cout << "圆的周长为：" <<  c.calculate_zc() << endl;
  return 0;
}