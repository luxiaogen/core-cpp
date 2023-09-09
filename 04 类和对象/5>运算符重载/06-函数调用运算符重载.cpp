#include <iostream>
#include <string>
using namespace std;

/**
 * 函数调用运算符重载
 */

// 打印输出类
class MyPrint
{
public:
  void operator()(string test)
  {
    cout << test << endl;
  }
};

void MyPrint2(string test)
{
  cout << test << endl;
}

void test01()
{
  MyPrint myPrint;
  myPrint("hello World"); // 由于使用起来非常类似于函数调用，因此称为仿函数
  MyPrint2("Hello World");
}
// 仿函数非常灵活，没有固定的写法
// 加法类
class MyAdd
{
public:
  int operator()(int num1, int num2)
  {
    return num1 + num2;
  }
};
void test02()
{
  MyAdd myAdd;
  int result = myAdd(100, 100);
  cout << "result = " << result << endl;

  // 匿名函数对象
  cout << MyAdd()(100, 100) << endl;
}
int main()
{
  //  test01();
  test02();
  return 0;
}