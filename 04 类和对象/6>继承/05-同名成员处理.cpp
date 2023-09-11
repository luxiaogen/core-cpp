#include <iostream>
using namespace std;

/*class Base
{
public:
  void func()
  {
    cout << "Base-func()" << endl;
  }
  void func(int a)
  {
    cout << "Base-func(int a)" << endl;
  }
  int a;
};

class Son : public Base
{
public:
  void func()
  {
    cout << "Son-func()" << endl;
  }
  int a;
};

void test01()
{
  Base b;
  b.a = 100;
  Son s;
  s.a = 200;
  cout << "s.a = " << s.a << endl;
  s.func(); // 直接调用 调用的子类中的同名成员属性

  // 如何调用到父类中同名成员函数
  s.Base::func();

  // 如果子类中出现和父类同名的成员函数，子类的同名会隐藏掉父类中所有同名成员函数
  // s.func(100);

  // 如果想访问到父类中北隐藏的同名成员函数，需要加作用于
  s.Base::func(100);

}*/
int main5()
{

  // test01();
  return 0;
}