#include <iostream>
using namespace std;
/**
 * 继承的对象模型
 *
 * 利用开发人员命令提示工具查看对象模型
 * 跳转盘符 F:
 * 跳转文件路径 cd 具体路径下
 * 查看命令
 * cl /d1 reportSingleClassLayout类名 文件名
 */

/*class Father
{
public:
  int a;
protected:
  int b;
private:
  int c; // 私有属性会被子类继承 只是编译器隐藏了
};

class Son : public Father
{
public:
  int d;
};

void test01()
{
  Son son;
  // 父类中所有非静态成员属性都会被子类继承下去
  // 父类总私有成员属性 是被编译器给隐藏了，因此是访问不到，但是确实被继承了
  cout << "sizeof(son) = " << sizeof(son) << endl; // 16
}*/
int main3()
{
  // test01();
  return 0;
}