#include <iostream>
using namespace std;

// 静态成员函数
// 所有对象共享同一个函数
// 静态成员函数只能访问静态成员变量
/*class Person
{
public:
  // 静态成员函数
  static void func()
  {
    a = 100; // 静态成员内函数可以访问 静态成员变量
    // b = 100; // 静态成员函数不可以访问 非静态成员变量，无法区分到底是哪个对象的属性
    cout << "static void func()调用" << endl;
  }
  //
  static int a; // 静态成员变量
  int b;

  // 静态成员函数也是有访问权限的
private:
  static void fun2()
  {
    cout << "static void func()2调用" << endl;
  }
};

void test01()
{
  // 1、通过对象访问
  Person p;
  p.func();
  // 2、通过类名访问
  Person::func();
  // Person::func2(); // 类外访问不到
}*/
int main8()
{

  // test01();

  return 0;
}