#include <iostream>
using namespace std;

/* class Animal
{
public:
  virtual void speak()
  {
    cout << "动物在说话" << endl;
  }
};

class Cat : public Animal
{
public:
  // 虚函数
  // 重写：函数返回值类型  函数名 参数列表 完全一致称为重写
  void speak()
  {
    cout << "猫在说话" << endl;
  }
};

class Dog : public Animal
{
public:
  // 重写 函数返回值类型 函数名 参数列表 完全相同
  void speak()
  {
    cout << "狗在说话" << endl;
  }
}; */

// 执行说话的函数
// 地址早绑定 在编译阶段确定函数地址
// 如果想执行让猫说话，那么这个函数地址就不能提前绑定，需要在运行阶段进行绑定，地址晚绑定

/**
 * 动态多态满足条件
 * 1、有继承关系
 * 2、子类重写父类的虚函数
 *
 * 动态多态使用
 *  父类的指针或者引用 指向子类对象
 */
// Animal temp = cat const Animal &animal = temp;

// 形参(引用变量)指向实参变量单元。这种通过形参引用可以改变实参的值。
/* void doSpeak(Animal &animal) // Animal &animal = cat;
{
  animal.speak();
}

void test01()
{
  Cat cat;
  Dog dog;
  doSpeak(cat);
  doSpeak(dog);
} */
int main1()
{
  // test01();

  return EXIT_SUCCESS;
}