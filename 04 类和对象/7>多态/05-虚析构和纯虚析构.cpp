 #include <iostream>
#include <string>
using namespace std;

// 虚析构和纯虚析构

class Animal
{
public:
  // 纯虚函数
  Animal()
  {
    cout << "Animal构造函数" << endl;
  }
  // 利用虚析构可以解决 父类指针释放子类对象时不干净的问题
  /*virtual ~Animal()
  {
    cout << "Animal虚析构函数" << endl;
  }*/
  // 纯虚析构
  // 有了纯虚析够之后，这个类就变成抽象类，不可以实例化
  virtual ~Animal() = 0;
  virtual void speak() = 0;
};

Animal::~Animal()
{
  cout << "Animal纯虚析构函数" << endl;
}

class Cat : public Animal
{
public:
  Cat(string name)
  {
    cout << "Cat构造函数" << endl;
    this->name = new string(name);
  }
  ~Cat()
  {
    if (this->name != NULL)
    {
      cout << "Cat析构函数" << endl;
      delete this->name;
      this->name = NULL;
    }
  }
  virtual void speak()
  {
    cout << *this->name << "小猫会说话" << endl;
  }
  string *name;
};
/*void test01()
{
  Animal *animal = new Cat("Tom");
  animal->speak();
  // 父类指针在析构时候，不会调用子类中析构函数，导致子类如果有堆区属性，出现内存泄露
  delete animal;
}*/
int main5()
{
  // test01();
  return 0;
}