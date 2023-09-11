#include <iostream>

using namespace std;

/*class Base1
{
public:
  Base1()
  {
    this->a = 100;
  }
  int a;
};

class Base2
{
public :
  Base2()
  {
    this->a = 200;
  }
  int a;
};

class Son : public Base1, public Base2
{
public:
  Son()
  {
    this->c = 300;
    this->d= 400;
  }
  int c;
  int d;
};
*//*
 * 多继承容易产生成员同名的情况
 * 通过使用类名作用域可以区分调用哪一个基类的成员
 *//*
void test01()
{
  Son s;
  cout << "sizeof(Son) = " << sizeof(s) << endl;
  cout << s.Base1::a << endl;
  cout << s.Base2::a << endl;
}*/

int main7()
{

  // test01();

  return 0;
}