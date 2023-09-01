#include <iostream>
using namespace std;

int *func()
{
  // 利用new关键字 可以讲数据开辟到堆区
  // 指针 本质也是局部变量，放在栈上，
  int *p = new int(10);
  return p;
}
int main3()
{
  // 在堆区开辟数据
  int *p = func();
  cout << *p << endl;
  return 0;
}