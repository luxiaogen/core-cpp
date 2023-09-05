#include <iostream>

using namespace std;

/*
 * 拷贝构造函数调用时机
 *  1、使用一个已经创建完毕的对象来初始化一个新对象
 *  2、值传递的方式给函数参数传值
 *  3、值方式返回局部对象
 */

/*class Person3
{
public:
  Person3()
  {
    cout << "Person3 默认构造函数调用" << endl;
  }

  Person3(int age)
  {
    this->age = age;
    cout << "Person3 有参构造函数调用" << endl;
  }

  ~Person3()
  {
    cout << "Person3 析构构造函数调用" << endl;
  }

  Person3(const Person3 &p)
  {
    this->age = p.age;
    cout << "Person3 拷贝构造函数调用" << endl;
  }

  int age;
};

void test01()
{
  Person3 p1(20);
  Person3 p2(p1);
}

void do_work(Person3 p)
{

}

void test02()
{
  Person3 p;
  do_work(p);
}

Person3 do_work2()
{
  Person3 p1;
  cout << (long *) &p1 << endl;
  return Person3(p1);
}

void test03()
{
  Person3 p = do_work2();
  cout << (long *) &p << endl;
}*/



int main3()
{
  // test01();
  // test02();
//  test03();
  return 0;
}