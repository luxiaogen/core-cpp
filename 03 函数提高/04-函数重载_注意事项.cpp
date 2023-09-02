#include <iostream>
using namespace std;

/*
 * 函数重载的注意事项
 *  1、引用作为重载的条件
 *  2、函数重载碰到默认参数
 */
void fun(int &a) // int &a = 10; // 不合法
{
  cout << "func(int &a) 调用" << endl;
}

void fun(const int &a) // int temp = 10; const int &a = temp; 合法
{
  cout << "func(const int &a) 调用" << endl;
}

void fun2(int a)
{
  cout << "func2(int a) 调用" << endl;
}

void fun2(int a, int b = 10)
{
  cout << "func2(int a, int b = 10) 调用" << endl;
}
int main()
{
  int a = 10;
  fun(a); // func(int &a) 调用
  fun(10); // func(const int &a) 调用
  // fun2(10); // 当函数重载碰到默认参数，出现二义性，尽量避免这种情况
  return 0;
}