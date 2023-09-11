#include <iostream>
using namespace std;
/*class Base
{
public:
  static void func()
  {
    cout << "Base-static void func()" << endl;
  }
  static void func(int a)
  {
    cout << "Base-static void func(int a)" << endl;
  }
  static int a;

};
int Base::a = 100;

class Son : public Base
{
public:
  static void func()
  {
    cout << "Son-static void func()" << endl;
  }
  static int a;
};
int Son::a = 200;

// 同名成员属性
void test01()
{
  // 通过对象访问
  cout << "通过对象访问：" << endl;
  Son s;
  cout << "Son.a = " << s.a << endl;
  cout << "Base.a = " << s.Base::a << endl;
  // 通过类名访问
  cout << "通过类名访问：" << endl;
  cout << "Son.a = " << Son::a << endl;
  cout << "Base.a = " << Son::Base::a << endl;
}

// 同名成员函数
void test02()
{
  // 通过对象访问
  cout << "通过对象访问：" << endl;
  Son s;
  s.func();
  s.Base::func();
  // 通过类名访问
  cout << "通过类名访问：" << endl;
  Son::func();
  Son::Base::func();
  // 出现同名，子类会隐藏掉父类中所有同名成员函数，需要加作用域
  Son::Base::func(100);

}*/

int main6()
{
  // test01();
  // test02();

  return 0;
}