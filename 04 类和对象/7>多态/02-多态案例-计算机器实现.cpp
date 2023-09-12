#include <iostream>

/*using namespace std;
// 分别利用普通写法和多态技术实现计算器实现

// 普通写法
class Calculator
{
public:
  int getResult(char op)
  {
    switch (op)
    {
    case '+':
      return num1 + num2;
    case '-':
      return num1 - num2;
    case '*':
      return num1 * num2;
    case '/':
      return num1 / num2;
    }
    return EXIT_FAILURE;
  }

  int num1;
  int num2;
};

// 利用多态实现计算器
// 实现计算器抽象类
*//*
  多态的好处
    1、组织结构清晰
    2、可读性强
*//*
class AbstractCalculator
{
public:
  virtual int getResult()
  {
    return 0;
  }
  int num1;
  int num2;
};

// 加法计算器类
class AddCalculator : public AbstractCalculator
{
public:
  int getResult()
  {
    return num1 + num2;
  }
};
// 加法计算器类
class SubCalculator : public AbstractCalculator
{
public:
  int getResult()
  {
    return num1 - num2;
  }
};
// 乘法计算器
class MulitiCalculator : public AbstractCalculator
{
public:
  int getResult()
  {
    return num1 * num2;
  }
};

void test01()
{
  Calculator c;
  c.num1 = 10;
  c.num2 = 10;
  int result = c.getResult('+');
  cout << "result = " << result << endl;
}

void test02()
{
  // 多态使用条件
  // 父类指针或者引用指向子类对象
  // 加法运算
  AbstractCalculator *abc = new AddCalculator;
  abc->num1 = 10;
  abc->num2 = 10;
  int result = abc->getResult();
  cout << "result = " << result << endl;
  // 用完后记得销毁
  delete abc; // 堆区的数据释放掉了 指针的类型还在

  abc = new SubCalculator;
  abc->num1 = 100;
  abc->num2 = 10;
  result = abc->getResult();
  cout << "result = " << result << endl;

  delete abc; // 堆区的数据释放掉了 指针的类型还在

  abc = new MulitiCalculator;
  abc->num1 = 100;
  abc->num2 = 100;
  result = abc->getResult();
  cout << "result = " << result << endl;

  delete abc;
}*/

int main2()
{
  // test01();
  // test02();

  return EXIT_SUCCESS;
}