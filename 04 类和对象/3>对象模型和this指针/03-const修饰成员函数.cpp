#include <iostream>
using namespace std;

// 常函数
class Person
{
public:
  // 属性就不能修改了
  // this指针的本质 是指针常量 指针的指向是不可以修改的
  // Peroson * const this; 成员函数加了const --> const Person *const this;
  // 在成员函数后面加 const ,修饰的是this指向，让指针指向的值也不可以修改
  Person()
  {

  }
  void showPerson() const
  {
    // this->a = 100;
    // this = NULL;
    this->b = 100;
  }

  void func()
  {

  }
  int a;
  mutable int b; // 加关键字 mutable 在常函数也可以修改这个值
};

// 常对象
void test02()
{
  const Person p; // 在对象前加const,变为常对象
  // p.a = 100;
  p.b = 100; // 都可以修改

  // 常对象只能调用常函数
  p.showPerson();
  // p.func(); // 常对象不可以调用普通成员函数，因为普通成员函数可以修改属性
}

void test01()
{
  Person p;
  p.showPerson();
}
int main3()
{
  // test01();
  test02();
  return 0;
}