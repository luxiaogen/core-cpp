#include <iostream>
#include <string>

using namespace std;


class Student
{
public:
  // 类中的属性和行为 统称为成员
  // 属性 成员属性 成员变量
  // 行为 成员函数 成员发那个发

  string name;
  int stu_no;

  void show_info()
  {
    cout << "姓名:" << name << "，学号：" << stu_no << endl;
  }

  void set_name(string stu_name)
  {
    name = stu_name;
  }

  void set_no(int no)
  {
    stu_no = no;
  }


};


int main2()
{
  Student student;
  student.name = "小皮";
  student.stu_no = 1;
  student.show_info();

  return 0;
}