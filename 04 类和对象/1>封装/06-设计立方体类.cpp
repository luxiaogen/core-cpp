#include <iostream>

using namespace std;

class Cube
{
public:
  // 设置长宽高
  void setL(int l)
  {
    m_l = l;
  }

  int getL()
  {
    return m_l;
  }

  void setW(int w)
  {
    m_w = w;
  }

  int getW()
  {
    return m_w;
  }

  void setH(int h)
  {
    m_h = h;
  }

  int getH()
  {
    return m_h;
  }

  // 获取立方体面积
  int getArea()
  {
    return 2 * m_l * m_w + 2 * m_l * m_h + 2 * m_w * m_h;
  }

  // 获取立方体体积
  int getValue()
  {
    return m_l * m_w * m_h;
  }

  // 利用成员函数判断两个立方体是否相等
  bool is_same_class(Cube &cube)
  {
    if (m_l == cube.getL() && m_w == cube.getW()
        && m_h == cube.getH())
      return true;
    return false;
  }

private:
  int m_l;
  int m_w;
  int m_h;
};

// 利用全局函数判断 两个立方体是否相等
// 使用引用就不要使用原来的数据，拷贝一份出来
bool isSame(Cube &cube1, Cube &cube2)
{
  if (cube1.getL() == cube2.getL() &&
      cube1.getW() == cube2.getW() && cube1.getH() == cube2.getH())
    return true;
  return false;
}

int main6()
{
  Cube cube1;
  cube1.setL(10);
  cube1.setW(10);
  cube1.setH(10);
  cout << "cube的面积为：" << cube1.getArea() << endl;
  cout << "cube的体积为：" << cube1.getValue() << endl;


  Cube cube2;
  cube2.setL(10);
  cube2.setW(10);
  cube2.setH(10);
  cout << "cube的面积为：" << cube2.getArea() << endl;
  cout << "cube的体积为：" << cube2.getValue() << endl;

  bool result = isSame(cube1, cube2);
  if (result)
    cout << "相等" << endl;
  else
    cout << "不相等" << endl;

  result = cube1.is_same_class(cube2);
  if (result)
    cout << "相等" << endl;
  else
    cout << "不相等" << endl;

  return 0;
}