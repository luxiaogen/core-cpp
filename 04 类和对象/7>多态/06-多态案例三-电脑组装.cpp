#include <iostream>
using namespace std;

// 抽象不同零件类
class CPU
{
public:
  // 抽象的计算函数
  virtual void calculate() = 0;
};

// 抽象显卡类
class VideoCard
{
public:
  virtual void display() = 0;
};

// 抽象存储类
class Memory
{
public:
  virtual void storage() = 0;
};

// 电脑类
class Computer
{
public:
  Computer(CPU *cpu, VideoCard *videoCard, Memory *memory)
  {
    this->cpu = cpu;
    this->videoCard = videoCard;
    this->memory = memory;
  }

  ~Computer()
  {
    if (this->cpu != NULL)
    {
      delete this->cpu;
      this->cpu = NULL;
    }
    if (this->videoCard != NULL)
    {
      delete this->videoCard;
      this->videoCard = NULL;
    }
    if (this->memory != NULL)
    {
      delete this->memory;
      this->memory = NULL;
    }
  }

  // 提供工作的函数
  void work()
  {
    // 让零件工作起来
    this->cpu->calculate();
    this->videoCard->display();
    this->memory->storage();
  }

private:
  CPU *cpu; // CPU零件指针
  VideoCard *videoCard;
  Memory *memory;
};

// 具体厂商
class IntelCPU : public CPU
{
public:
  virtual void calculate()
  {
    cout << "Intel的CPU开始计算了~~" << endl;
  }
};

class IntelVideoCard : public VideoCard
{
public:
  virtual void display()
  {
    cout << "Intel的VideoCard开始显示了~~" << endl;
  }
};

class ChangXinMemory : public Memory
{
public:
  virtual void storage()
  {
    cout << "长鑫的内存条开始存储了~~" << endl;
  }
};


void test01()
{
  // 第一太电脑零件
  CPU *intelCPU = new IntelCPU;
  VideoCard *intelVideoCard = new IntelVideoCard;
  Memory *changxinMemory = new ChangXinMemory;
  // 创建一个电脑
  Computer *computer = new Computer(intelCPU, intelVideoCard, changxinMemory);
  computer->work();
  delete computer;
}

int main()
{
  test01();
  return EXIT_SUCCESS;
}