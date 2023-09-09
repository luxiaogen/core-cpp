#include <iostream>
using namespace std;

/**
 * 加号运算符重载
 */
/*class Person
{
public:
  // 1.通过成员函数重载+号
  *//*Person operator+(Person &p)
  {
    Person temp;
    temp.a = this->a + p.a;
    temp.b = this->b + p.b;
    return temp;
  }*//*
  // 成员函数重载调用
  // Person p3 = p1.operator+(p2);
  int a;
  int b;
};
// 2.通过全局函数的重载
// 本质调用
// Person p3 = operator+(p1,p2);


Person operator+(Person &p1, Person &p2)
{
  Person temp;
  temp.a = p1.a + p2.a;
  temp.b = p1.b + p2.b;
  return temp;
}

Person operator+(Person &p1, int num){
  Person temp;
  temp.a = p1.a + num;
  temp.b = p1.b + num;
  return temp;
}
void test01()
{
  Person p1;
  p1.a = 10;
  p1.b = 10;
  Person p2;
  p2.a = 10;
  p2.b = 10;
  Person p3 = p1 + p2;
  // 运算符重载 也可以发生函数重载
  Person p4 = p1 + 100;
  cout << "p3.a = " << p3.a << ",p3.b = " << p3.b << endl;
  cout << "p4.a = " << p4.a << ",p4.b = " << p4.b << endl;
}*/

int main1()
{
  // test01();
  return 0;
}