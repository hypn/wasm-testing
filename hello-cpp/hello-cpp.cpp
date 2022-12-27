// docker run -ti --rm -v $PWD:/src gcc bash -c "cd /src && g++ hello-cpp.cpp -o hello-cpp && ./hello-cpp"

#include <iostream>

int main() {
  std::cout << "Hello from C++!\n";
  return 0;
}