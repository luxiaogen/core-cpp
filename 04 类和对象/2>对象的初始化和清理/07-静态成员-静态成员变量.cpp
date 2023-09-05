#include <iostream>

using namespace std;

/*
class Person
{
public:
  // 1、所有对象都共享同一份数据
  // 2、编译阶段就分配内存
  // 3、类内声明，类外初始化操作
  static int a;

  // 静态成员变零也是有访问权限的
private:
  static int b;
};

int Person::a = 100;
int Person::b = 200;

void test01()
{
  Person p;
  cout << p.a << endl; // 100

  Person p2;
  p2.a = 200;
  cout << p.a << endl; // 200
}

void test02()
{
  // 静态成员变量 不属于某个对象上，所有对象都共享同一份数据

  // 1、通过对象进行访问
  Person p;
  cout << p.a << endl;
  // 2、通过类名进行访问
  cout << Person::a << endl;
  // cout << Person::b << endl; 类外访问不到私有静态成员变量
}
*/

/*
 * 静态成员变量
 */
int main7()
{
  // test01();
  // test02();

  return 0;
}