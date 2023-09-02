#include <iostream>
using namespace std;

/*
 *  函数重载
 *    可以让函数名形同，提高复用性
 *  重载满足的条件
 *    1.同一个作用域下
 *    2.函数名称相同
 *    3.函数参数类型不同，或者个数不同，顺序不同
 *  注意事项
 *    函数的返回值不可以作为函数重载条件
 */
void func()
{
  cout << "func() 的调用" << endl;
}

void func(int a)
{
  cout << "func(int a) 的调用" << endl;
}

void func(double a)
{
  cout << "func(double a)的调用" << endl;
}
int main3()
{
  func();
  func(1);
  func(1.1);
  return 0;
}