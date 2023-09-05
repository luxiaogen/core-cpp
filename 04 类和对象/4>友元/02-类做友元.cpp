#include <iostream>
#include <string>
using namespace std;

/*// 类做友元
class Building;
class GoodGay
{
public:
  GoodGay();
  void visit(); // 参观函数 访问Building中的属性

  Building *building;
};

class Building
{
  friend class GoodGay; // 可以访问本类中的私有成员
public:
  Building();
public:
  string settingRoom;
private:
  string bedRoom;
};

// 类外写成员函数
Building::Building()
{
  this->settingRoom = "客厅";
  this->bedRoom = "卧室";
}
GoodGay::GoodGay()
{
  // 创建一个建筑物对象
  this->building = new Building;
}

void GoodGay::visit()
{
  cout << "好基友正在访问" << this->building->settingRoom << endl;
  cout << "好基友正在访问" << this->building->bedRoom << endl;
}

void test01()
{
  GoodGay goodGay;
  goodGay.visit();
}*/
int main2()
{
  // test01();
  return 0;
}