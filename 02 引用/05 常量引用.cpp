#include <iostream>
using namespace std;

// 打印数据的函数
void show_value(const int &val)
{
  // val = 1000;
  cout << "val = " << val << endl;
}

int main()
{
  // 常量引用
  // 适用场景：用来修饰形参，防止误操作

  // int a = 10;
  // 加上 const 之后，编译器将代码修改成 int temp = 10; const int &ref = temp;
  // const int &ref = 10; // 引用必须引用一块合法的内存空间
  // ref = 20; 错误 加入const之后变为只读，不可以修改
  int a = 100;

  show_value(a); // val = 100
  cout << "a = " << a << endl; // a = 100

  return 0;
}