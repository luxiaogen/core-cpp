#include <iostream>

using namespace std;
/*
 * 构造函数的分类及调用
 *  分类
 *    按照参数分类 无参构造(默认构造)和有参构造
 *    按照类型分类 普通构造 拷贝构造
 */
/*class Person2
{
public:
  Person2()
  {
    age = 18;
    cout << "Person3 无参构造函数的调用" << endl;
  }
  Person2(int a)
  {
    age = a;
    cout << "Person3 有参构造函数的调用" << endl;
  }
  // 拷贝构造函数
  Person2(const Person2 &p)
  {
    // 将传入的人身上的所有属性，拷贝到我身上
    age = p.age;
    cout << "Person3 拷贝构造函数的调用" << endl;
  }
  ~Person2()
  {
    cout << "Person3 析构函数的调用" << endl;
  }
  int age;
};
// 调用
void test01()
{
  // 1、括号法
  // Person3 p; // 默认构造函数的调用
  // Person3 p2(10); // 有参构造方法的调用  有参构造函数
  // Person3 p3(p2); // 拷贝构造函数

  // 注意事项
  // 调用默认构造函数时候，不要加()
  // Person3 p1() 编译器会认为是一个函数的声明;
  void func();

  // cout << "p2的年龄为：" << p2.age << endl;
  // cout << "p3的年龄为：" << p3.age << endl;

  // 2、显示法
   Person2 p1;
   Person2 p2 = Person2(10); // 有参构造
   Person2 p3 = Person2(p2); // 拷贝构造
  // Person3(10); // 匿名对象，特点：当前执行结束后，系统会立即回收掉匿名对象
  // cout << "。。。。" << endl;

  // 注意事项2
  // 不要利用拷贝构造函数 初始化匿名对象 编译器会认为 Person3(p3) === Person3 p3; 对象声明
  // Person3(p3);
  // 3. 隐式转换法
  Person2 p4 = 10; // 相当于 写了 Person3 p4 = Person3(10);
  Person2 p5 = p4; // 拷贝构造


}*/
int main2()
{
  // test01();
  return 0;
}