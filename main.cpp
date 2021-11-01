#include <iostream>
#include <ctime>
const int ARRAY_SIZE = 50000;

int staticArray(){
  static int foo[ARRAY_SIZE];
  return 0;
}

int stackArray(){
  int baz[ARRAY_SIZE];
  return 0;
}

int heapArray(){
  int *bar= new int[ARRAY_SIZE];
  return 0;
}


int main() {
    std::clock_t start;
    double duration1;
    double duration2;
    double duration3;

    start = std::clock();
    staticArray();
    duration1 = ( std::clock() - start ) / (double) CLOCKS_PER_SEC;

    start = std::clock();
    stackArray();
    duration2 = ( std::clock() - start ) / (double) CLOCKS_PER_SEC;

    start = std::clock();
    heapArray();
    duration3 = ( std::clock() - start ) / (double) CLOCKS_PER_SEC;

  std::cout<<"Static Array: "<< duration1 <<'\n';
  std::cout<<"Stack Array: "<< duration2 <<'\n';
  std::cout<<"Heap Array: "<< duration3 <<'\n';

}

/*
Create in C++ 3 functions, one that uses and creates a static array, one that uses and creates a stack dynamic array, and the other a heap dynamic array. Each will initialize an integer array of 5000 or more elements you will also use the std::clock_t variable to determine how much time it takes each function to run.
 
Explain the difference in the time it took for each, where they expected.

*/