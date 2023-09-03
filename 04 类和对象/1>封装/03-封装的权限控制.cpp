#include <iostream>
using namespace std;

/*
 * 三种访问权限
 * public 公共权限      成员 类内可以访问 类外可以访问
 * protected 保护权限   成员 类内可以访问 类外不可以访问  儿子也可以访问父亲中的保护内存
 * private 私有权限     成员 类内可以访问 类外不可以访问  儿子不可以访问父亲的私有内容
 */
class Person
{
public:
  // 公共权限
  string m_name;
protected:
  // 保护权限
  string m_car;
private:
  // 私有权限
  int m_password; // 银行卡密码
public:
  void func()
  {
    m_name = "张三";
    m_car = "拖拉机";
    m_password = 123456;
  }
};
int main3()
{
  Person person;
  person.m_name = "李四";
  // person.m_car = "极氪001fr"; // 保护权限内容，在类外访问不到
  // person.m_passwrod = 123; // 私有权限内容，在类外访问不到
  person.func();
  return 0;
}