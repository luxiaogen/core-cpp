#include <iostream>

using namespace std;

/*
 * 深拷贝与浅拷贝
 *
 */
/*class Person
{
public:
  Person()
  {
    cout << "Person的默认构造函数调用" << endl;
  }

  Person(int age, int height)
  {
    this->age = age;
    this->height = new int(height); // 创建在堆区
    cout << "Person的有参构造函数调用" << endl;
  }

  ~Person()
  {
    // 析构代码，将堆区开辟数据做释放操作
    if (this->height != NULL)
    {
      delete this->height; // 释放堆区内存
      this->height = NULL;
    }
    cout << "Person的析构函数调用" << endl;
  }

  // 自己实现拷贝构造函数 解决浅拷贝带来的问题
  Person (const Person &person)
  {
    cout << "Person 拷贝函数的调用" << endl;
    this->age = person.age;
    // this->height = person.height; 编译器默认实现是这行代码
    this->height = new int(*person.height);
  }

  int age;
  int *height;
};*/

/*void test01()
{
  Person person1(18, 160);
  // . 优先级 > *
  cout << "person1的年龄为：" << person1.age << "，身高为：" << *person1.height << endl;
  Person person2(person1);
  cout << "person2的年龄为：" << person2.age << "，身高为：" << *person2.height << endl;
}*/

int main4()
{

  // test01();
  return 0;
}