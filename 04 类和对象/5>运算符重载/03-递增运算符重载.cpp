#include <iostream>
using namespace std;

/*class MyInteger
{
  friend ostream& operator<<(ostream &cout, MyInteger myInteger);
public:
  MyInteger()
  {
    num = 0;
  }
  // 重载 ++ 运算符
  // 前置 ++
  MyInteger& operator++() // 返回引用是为了一直对一个对象进行操作
  {
    // 先进行++运算
    this->num++;
    return *this; // 返回自身
  }
  // 后置++
  // void operator++(int) int代表占位参数，可以用于区分前置和后置递增
  MyInteger operator++(int)
  {
    // 先  记录当时结果
    MyInteger temp = *this;
    // 后  递增
    this->num++;
    // 最后将记录的结果做返回
    return temp;
  }
private:
  int num;
};

// 重载一下左移运算符
ostream& operator<<(ostream &cout, MyInteger myInteger)
{
  cout << myInteger.num;
  return cout;
}

void test01()
{
  MyInteger myInteger;
  cout << ++myInteger << endl;
}

void test02()
{
  MyInteger myInteger;
  cout << myInteger++ << endl;
  cout << myInteger << endl;
}*/
int main3()
{
//   test01();
//  test02();
  return 0;
}