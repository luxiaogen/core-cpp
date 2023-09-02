#include <iostream>
using namespace std;

// 引用做函数的返回值
// 1、不要返回局部变量的引用
// 2、函数的调用可以作为左值
int& test01()
{
  int a = 10; // 局部变量放在四区中的 栈区
  return a;
}

int& test02()
{
  static int a = 10; // 静态变量，存放在全局区，全局区上的数据在程序结束后系统释放
  return a;
}

int main4()
{
//  int &ref = test01();
//  cout << "ref = " << ref << endl; // 第一次结果正确，编译器做了保留
//  cout << "ref = " << ref << endl; // 第二次结果错误，因为a的内存已经释放
  int &ref2 = test02();
  cout << "ref2 = " << ref2 << endl;
  test02() = 1000;
  cout << "ref2 = " << ref2 << endl;
  return 0;
}