#include <iostream>
using namespace std;

// 1、new的基本语法
int *method()
{
  // 在堆区创建整型数据
  // new返回的是 该数据类型的指针
  int *p = new int(10);
  return p;
}

int test01()
{
  int *p = method();
  cout << *p << endl;
  cout << *p << endl;
  cout << *p << endl;
  // 堆区的数据 由程序员管理开辟，程序员管理释放
  // 如果想释放堆区的数据，利用关键字 delete
  delete p; // 释放
  // 内存已经被释放，再次访问 就会报错
}

// 2、在堆区利用new开辟数组
void test02()
{
  // 创建10个整型数据的数组,在堆区
  int *arr = new int[10];
  for (int i = 0; i < 10; i++)
    arr[i] = i + 100;
  for (int i = 0; i < 10; i++)
    cout << arr[i] << "\t";
  // 释放属猪的时候 要加[]才可以
  delete[] arr; // 释放数组
}

int main4()
{
  // test01();
  test02();
  return 0;
}