#include <iostream>

const int arrSize = 10;

int* conversely (int* a, int* b){
  
  int* x = b;
  std::cout << b << "\n";
  for (int i = 0; i < arrSize; i++){
  b[9 - i] = *(a + i);
  }
  
  return b;
}

int main() {
  int a[arrSize] = {10, 15, 20, 35, 40, 555, 60, 70, 888, 90};
  int b[arrSize];
  
  int* z = conversely (a, b);
  for (int i = 0; i < arrSize; i++){
  std::cout << i << ") " << *(z + i) << std::endl;
  }
}  