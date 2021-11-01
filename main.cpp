#include <iostream>
#include <ctime>
const int ARRAY_SIZE = 5000;

int staticArray(){
  std::clock_t start = std::clock();
  static int foo[ARRAY_SIZE];
  for (int i = 0; i < ARRAY_SIZE; i++) {
      foo[i] =  0;
  }
  double duration = ( std::clock() - start ) / (double) CLOCKS_PER_SEC;
  std::cout<<"Static Array: "<<duration<<'\n';
  return 0;
}

int stackArray(){
  std::clock_t start = std::clock();
  int baz[ARRAY_SIZE];
    for (int i = 0; i < ARRAY_SIZE; i++) {
      baz[i] =  0;
  }
  double duration = ( std::clock() - start ) / (double) CLOCKS_PER_SEC;
  std::cout<<"Stack Array: "<<duration<<'\n';
  return 0;
}

int heapArray(){
  std::clock_t start = std::clock();
  int *bar= new int[ARRAY_SIZE];
      for (int i = 0; i < ARRAY_SIZE; i++) {
      bar[i] = 0;
  } 
  double duration = ( std::clock() - start ) / (double) CLOCKS_PER_SEC;
  std::cout<<"Heap Array: "<<duration<<'\n';
  return 0;
}


int main() {

    staticArray();
    stackArray();
    heapArray();

}

/*
Create in C++ 3 functions, one that uses and creates a static array, one that uses and creates a stack dynamic array, and the other a heap dynamic array. Each will initialize an integer array of 5000 or more elements you will also use the std::clock_t variable to determine how much time it takes each function to run.
 
Explain the difference in the time it took for each, where they expected.

*/