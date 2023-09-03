#include <iostream>
#include <string>

using namespace std;

/*
 * 成员属性设置为私有
 * 1、可以自己控制读写权限
 * 2、对于写可以检测数据的有效性
 */
class Person
{
public:
  void setName(string name)
  {
    m_name = name;
  }

  string getName()
  {
    return m_name;
  }

  int getAge()
  {
    m_age = 0; // 初始化
    return m_age;
  }

  // 设置年龄
  void setAge(int age)
  {
    if (age < 0 || age > 150)
    {
      cout << "输入年龄有误" << endl;
      return;
    }
    m_age = age;
  }

  void setLover(string lover)
  {
    m_lover = lover;
  }

private:
  string m_name; // 可读可写
  int m_age; // 只读
  string m_lover; // 情人  只写

};

int main5()
{
  Person person;
  person.setName("张三");
  cout << "姓名为：" << person.getName() << endl;
  cout << "年龄为：" << person.getAge() << endl;
  person.setLover("冰冰");
//  cout << "情人为：" << person.getLover() << endl; 报错

  return 0;
}