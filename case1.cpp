#include <iostream>
#include <typeinfo> 

template<typename T>
void f(T& param) { // param is a reference
    std::cout<< typeid(param).name()<<std::endl;
    param = 2; 
}

int main() {
int x = 27;
const int cx = x;
const int& rx = x;
// x is an int
// cx is a const int
// rx is a reference to x as a const int
f(x);
f(cx);
f(rx);
}