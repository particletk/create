#include <particletk/create.hpp>

#include <iostream>
#include <string>

int main(int argc, char** argv) {
  auto ptr = PTK::create<std::string>("Hello, World!");
  std::cout << *ptr.get() << std::endl;

  auto ptr2 = PTK::create_ptr<std::string, std::unique_ptr>("unique_ptr");
  std::cout << *ptr2.get() << std::endl;

  return 0;
}
