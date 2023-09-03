#include <iostream>
using namespace std;

class C1
{
  int m_a; // 默认权限是 私有
};

struct C2
{
  int m_b; // 默认权限是 公共
};



int main4()
{
  // struct 和 class 区别
  // struct 默认权限是 公共 public
  // class 默认权限是 私有 private
  C1 c1;
  // c1.m_a = 123; 报错
  C2 c2;
  c2.m_b = 10; // 正确
  return 0;
}