#include <iostream>
using namespace std;

int g_a = 10;
int g_b = 10;

// 全局常量
const int c_g_a = 10;
const int c_g_b = 10;
int main1()
{
  // 全局区

  // 全局变量、静态变量、常量、

  // 创建普通局部变量
  int a = 10;
  int b = 10;

  cout << "局部变量a的地址为：" << (long)&a << endl;
  cout << "局部变量b的地址为：" << (long)&b << endl;
  cout << "全局变量a的地址为：" << (long)&g_a << endl;
  cout << "全局变量b的地址为：" << (long)&g_b << endl;

  // 静态变量  在普通变量前面加static，属于静态变量
  static int s_a = 10;
  static int s_b = 10;
  cout << "静态变量a的地址为：" << (long)&s_a << endl;
  cout << "静态变量b的地址为：" << (long)&s_b << endl;

  // 常量
  // 字符串常量
  cout << "字符串常量的地址为:" << (long)&"Hello World" << endl;
  //const 修饰的变量
  // const 修饰的全局变量，const修饰idea局部变量
  cout << "全局常量 c_g_a的地址为:" <<  (long)&c_g_a << endl;
  cout << "全局常量 c_g_b的地址为:" <<  (long)&c_g_b << endl;

  const int c_l_a = 10;
  const int c_l_b = 10;
  cout << "局部常量 c_l_a的地址为:" << (long)&c_l_a << endl;
  cout << "局部常量 c_l_b的地址为:" << (long)&c_l_b << endl;

  return 0;
}