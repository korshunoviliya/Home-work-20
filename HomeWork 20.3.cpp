#include <iostream>

bool substr (const char* a, const char* b){
  bool sub = false;
  for(int i = 0; *(a+i) != '\0' && !sub; ++i){
    sub = true;
    for(int j =0; *(b+j) != '\0' && sub; ++j){
      (*(a+i) == *(b+j))? ++i : sub=false;
    }
  }
  return sub;
}

int main() {

  const char* a = "Hello world";
  const char* b = "wor";
  const char* c = "banana";
 
  substr(a, b)? std::cout << "True\n" : std::cout << "False\n";
  substr(a, c)? std::cout << "True\n" : std::cout << "False\n";
}