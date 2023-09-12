#include <iostream>
using namespace std;

// 多态案例二-制作饮品
class AbstractDrinking
{
public:
  // 煮水
  virtual void Boil() = 0;
  // 冲泡
  virtual void Brew() = 0;
  // 导入杯中
  virtual void PourIntoCup() = 0;
  // 加入辅料
  virtual void PutSomething() = 0;

  // 制作饮品
  void makeDrink()
  {
    Boil();
    Brew();
    PourIntoCup();
    PutSomething();
  }
};

class Coffee : public AbstractDrinking
{
  // 煮水
  virtual void Boil()
  {
    cout << "煮水" << endl;
  }
  // 冲泡
  virtual void Brew()
  {
    cout << "冲泡咖啡" << endl;
  }
  // 导入杯中
  virtual void PourIntoCup()
  {
    cout << "倒入杯中" << endl;
  }
  // 加入辅料
  virtual void PutSomething()
  {
    cout << "加入糖和牛奶" << endl;
  }
};

class Tea : public AbstractDrinking
{
  // 煮水
  virtual void Boil()
  {
    cout << "煮开水" << endl;
  }
  // 冲泡
  virtual void Brew()
  {
    cout << "冲泡茶叶" << endl;
  }
  // 导入杯中
  virtual void PourIntoCup()
  {
    cout << "倒入杯中" << endl;
  }
  // 加入辅料
  virtual void PutSomething()
  {
    cout << "加入枸杞" << endl;
  }
};


void doWork(AbstractDrinking *ad)
{
  ad->makeDrink();
  delete ad; // 释放
}

/*void test01()
{
  AbstractDrinking *coffee = new Coffee;
  doWork(coffee);
  doWork(new Tea);
}*/
int main4()
{
  // test01();
  return 0;
}