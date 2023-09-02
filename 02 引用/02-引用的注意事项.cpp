#include <iostream>

using namespace std;


/*
 * 1. 引用必须要初始化
 * 2. 引用一旦初始化后，就不可以更改了
 */
int main2()
{
  int a = 10;
  int c = 20;
//  int &b; 错误 必须要初始化
  int &b = a;
  b = c; // 赋值操作，而不是更改引用
  cout << "a = " << a << endl; // 20
  cout << "b = " << b << endl; // 20
  cout << "c = " << c << endl; // 20


  return 0;
}