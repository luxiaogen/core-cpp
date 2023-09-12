#include <iostream>
using namespace std;

class Base
{
public:
  /*
    纯虚函数
      主要有一个纯虚函数，这个类成为抽象类
      抽象类特点：
        1、无法实例化
        2、抽象类的子类，必须要重写父类中的纯虚函数，否则也属于抽象列
  */
  virtual void func() = 0;
};

class Son : public Base
{
public:
  void func()
  {
    cout << "Son-func()" << endl;
  }
};
/*void test01()
{
  // Base b; 抽象类是无法实例化对象
  // new Base;
  Son s;
  s.func();

  Base *base = new Son;
  base->func();
}*/
int main3()
{
  // test01();
  return EXIT_SUCCESS;
}