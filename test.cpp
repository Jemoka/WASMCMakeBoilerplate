#include <vector>
#include <iostream>

std::vector<int> fib_numbers;

extern "C" {
    int fib(int num);
}

int fib(int num) {
    if (num==0) return 0;
    else if (num==1) return 1;
    else return fib(num-1)+fib(num-2);
}

