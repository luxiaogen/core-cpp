#include <iostream>
#include <string>

using namespace std;

// 类对象作为类成员
/*class Phone
{
public:
  Phone(string name)
  {
    cout << "Phone的构造函数调用" << endl;
    this->name = name;
  }

  ~Phone()
  {
    cout << "Phone的析构函数调用" << endl;
  }

  string name; // 品牌名

};

class Person
{
public:
  // Phone phone = p_name;
  Person(string name, string phone_name) : name(name), phone(phone_name)
  {
    cout << "Person的构造函数调用" << endl;
  }

  ~Person()
  {
    cout << "Person的析构函数的调用" << endl;
  }

  // 姓名
  string name;
  // 手机
  Phone phone;
};

void test01()
{
  Person person("张三", "霉用手机");
  cout << person.name << "拿着：" << person.phone.name << endl;

}*/

/*
 * 当其他类对象作为本类成员，构造时先构造类对象，再构造自身
 * 析构的顺序与构造相反
 */
int main6()
{

  // test01();
  return 0;
}