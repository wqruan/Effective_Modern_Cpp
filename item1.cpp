#include <iostream>
#include <typeinfo> 


//Understand template type deduction

template<typename T>
void f(T& param) { // param is a reference
    std::cout<< typeid(param).name()<<std::endl;
}

template<typename T>
void f1(T* param) {
    *param = 2; 
}

template<typename T>
void f2(T& param) {

}
void someFunc(int a, double b) {

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

int x1 = 27;

f(someFunc);
}