#include <iostream>
using namespace std;

int main1()
{
  // 引用基本语法
  // 数据类型 &别名 = 原名
  int a = 10;
  int &b = a;
  cout << a << endl;
  cout << b << endl;
  b = 20;
  cout << a << endl; // 20
  return 0;
}