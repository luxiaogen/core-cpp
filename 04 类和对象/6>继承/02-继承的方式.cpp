#include <iostream>

using namespace std;

/*class Father1
{
public:
  int a;
protected:
  int b;
private:
  int c;
};

// 公共继承
class Son1 : public Father1
{
public:
  void func()
  {
    this->a = 10; // 父类中公共权限成员 子类中依然是公共的权限
    this->b = 10; // 父类中保护权限成员 子类中依然是保护的权限
    // this->c = 10; // 父类中私有权限成员 子类访问不到
  }
};

class Father2
{
public:
  int a;
protected:
  int b;
private:
  int c;
};

// 保护继承
class Son2 : protected Father2
{
public:
  void func()
  {
    this->a = 10; // 父类中公共权限成员 子类中是保护的权限
    this->b = 10; // 父类中保护权限成员 子类中依然是保护的权限
    // this->c = 10; // 父类中私有权限成员 子类访问不到
  }
};

class Father3
{
public:
  int a;
protected:
  int b;
private:
  int c;
};

// 私有继承
class Son3 : private Father3
{
public:
  void func()
  {
    this->a = 10; // 父类中公共权限成员 子类中是私有的权限
    this->b = 10; // 父类中保护权限成员 子类中是私有的权限
    // this->c = 10; // 父类中私有权限成员 子类访问不到
  }
};

void test01()
{
  Son1 son1;
  son1.a = 100;
  // son1.b = 200; 类外不可以访问
  son1.func();

  Son2 son2;
  // son2.a = 100; 保护权限 类外不可以访问

  Son3 son3;
  // son3.a = 100; // 私有权限 类外不可以访问
}*/

/*
class GrandSon3 : public Son3
{
public:
  void func()
  {
    // this->a = 100; 到Son3中a变成了私有，及时是儿子也访问不到
    // this->b = 100; 到Son3中b变成了私有，及时是儿子也访问不到
  }
};
*/



int main2()
{
  // test01();
  return 0;
}