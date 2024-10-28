#ifndef COMPUTER_H
#define COMPUTER_H

#include <iostream>

class Computer
{
private:
  std::string cpu;
  std::string ram;
  std::string storage;
  std::string gpu;

public:
  Computer(const std::string &cpu, const std::string &ram,
           const std::string &storage, const std::string &gpu)
      : cpu(cpu), ram(ram), storage(storage), gpu(gpu) {}

  std::string getCpu() const
  {
    return cpu;
  }

  std::string getRam() const
  {
    return ram;
  }

  std::string getStorage() const
  {
    return storage;
  }

  std::string getGpu() const
  {
    return gpu;
  }

  void setCpu(const std::string &cpu)
  {
    this->cpu = cpu;
  }

  void setRam(const std::string &ram)
  {
    this->ram = ram;
  }

  void setStorage(const std::string &storage)
  {
    this->storage = storage;
  }

  void setGpu(const std::string &gpu)
  {
    this->gpu = gpu;
  }

  void toString() const
  {
    std::cout << "Computer Specifications:\n"
              << "-------------------------\n"
              << "CPU: " << cpu << "\n"
              << "RAM: " << ram << "\n"
              << "Storage: " << storage << "\n"
              << "GPU: " << gpu << "\n"
              << "-------------------------\n";
  }
};

#endif // COMPUTER_H
