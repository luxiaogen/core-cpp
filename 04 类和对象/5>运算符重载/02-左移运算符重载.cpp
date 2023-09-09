#include <iostream>
using namespace std;

/**
 * 左移运算符重载
 */
/*class Person
{
  friend ostream& operator<<(ostream &cout, Person &p);
public:
  Person(int a, int b)
  {
    this->a = a;
    this->b = b;
  }
private:
  // p.operator<<(cout) --- p << cout
  // 通常 不会利用成员函数重载 << 运算符，因为无法实现 cout <<
  *//*void operator<<(){}*//*
  int a;
  int b;
};
// cout 全局只有一个 所以要用引用的方式
ostream& operator<<(ostream &cout, Person &p) // 本质 operator<<(cou{t,p) cout << p
{
  cout << "a = " << p.a << ",b = " << p.b;
  return cout;
}
void test01()
{
  Person p(10,10);
  // 链式编程
  cout << p << endl;
}*/
int main2()
{
  //test01();
  return 0;
}