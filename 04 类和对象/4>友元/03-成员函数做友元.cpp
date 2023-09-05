#include <iostream>

using namespace std;

class Building;

class GoodGay
{
public:
  GoodGay();

  void visit(); // 让 visit 函数可以访问Building中私有成员
  void visit2(); // 不可以访问Building中私有成员
  Building *building;
};

class Building
{
  // 告诉编译器  GoodGay类下的visit成员函数作为本类的好朋友，可以访问私有成员
  friend void GoodGay::visit();

public:
  Building();

public:
  string settingRoom;
private:
  string bedRoom;
};

Building::Building()
{
  this->settingRoom = "客厅";
  this->bedRoom = "卧室";
}

GoodGay::GoodGay()
{
  building = new Building;
}

void GoodGay::visit()
{
  cout << "visit 函数正在访问：" << building->settingRoom << endl;
  cout << "visit 函数正在访问：" << building->bedRoom << endl;
}

void GoodGay::visit2()
{
  cout << "visit 函数正在访问：" << building->settingRoom << endl;
  // cout << "visit 函数正在访问：" << building->bedRoom << endl;
}

void test01()
{
  GoodGay gg;
  gg.visit();
  gg.visit2();
}


int main3()
{

  test01();
  return 0;
}