#include <iostream>
using namespace std;

// 动物类
class Animal{
public:
  int age;
};

/**
 * 利用虚继承 解决菱形继承的问题
 * 继承之前加上关键字 virtual 变成虚继承
 * Animal类成为 虚基类
 */
// 羊类
class Sheep : virtual public Animal{};
// 驼类
class Camel : virtual public Animal {};

// 羊驼类
class Alpaca : public Sheep, public Camel {};

void test01()
{
  Alpaca alpaca;
  alpaca.Sheep::age = 18;
  alpaca.Camel::age = 28;

  // 当菱形继承，两个父类拥有相同数据，需要加以作用域区分。
  cout << "alpaca.Sheep::age" << alpaca.Sheep::age << endl;
  cout << "alpaca.Camel::age" << alpaca.Camel::age << endl;
  cout << "alpaca.age" << alpaca.age << endl;
}
int main()
{
  test01();
  return 0;
}