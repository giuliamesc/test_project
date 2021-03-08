#include <iostream>
#include"subdirectory/my_class.hpp"
int main(int argv, char **argv){
  MyClass m;
  std::cout << "Hello world!" << std::endl;
  std::cout << "This is a new added line" << std::endl;
  return 0;
}
