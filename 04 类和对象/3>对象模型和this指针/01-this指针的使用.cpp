#include <iostream>

using namespace std;

/*class Person
{
public:
  Person(int age)
  {
    // this 指针指向 被调用的成员函数，所属的对象
    this->age = age;
  }

  // 链式编程思想
  // 通过值的方式返回 会返回新的对象
  // 通过引用(指针常量)的方式返回 只会返回原来的对象
  Person& PersonAddAge(Person &p)
  {
    this->age += p.age;
    return *this;
  }

  int age;
};

// 1. 解决名称冲突
void test01()
{
  Person p1(18);
  cout << "age = " << p1.age << endl;
}

// 2. 返回对象本身用*this
void test02()
{
  Person p1(10);

  Person p2(20);

  p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);
  cout << "p2--age = " << p2.age << endl;
}*/

int main1()
{
  // test01();
  // test02();
  return 0;
}