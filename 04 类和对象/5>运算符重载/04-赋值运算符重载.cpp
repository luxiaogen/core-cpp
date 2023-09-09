#include <iostream>
using namespace std;

/**
 * 赋值运算符重载
 */
/*class Person
{
public:
  Person(int age)
  {
    this->age = new int(age);
  }
  ~Person()
  {
    if (this->age != NULL)
    {
      delete this->age;
      this->age = NULL;
    }
  }
  // 重载赋值运算符
  // 如果不是引用 就会调用拷贝函数 创建一个新的副本 返回新的对象
  Person& operator=(Person &p)
  {
    // 编译器是提供浅拷贝
    // this->age = p.age;
    // 应该先判断是否有属性在堆区，如果有先释放干净，然后再深拷贝
    if (this->age != NULL)
    {
      delete this->age;
      this->age = NULL;
    }
    this->age = new int(*p.age);
    return *this; // 返回对象本身
  }
  int *age;
};
void test01()
{
  Person p1(18);
  Person p2(20);

  Person p3(30);
  p2 = p1; // 赋值操作
  p3 = p2 = p1;
  cout << "p1 的年龄:" << *p1.age << endl;
  cout << "p2 的年龄:" << *p2.age << endl;
  cout << "p3 的年龄:" << *p3.age << endl;
}*/
int main4()
{
  // test01();
  return 0;
}