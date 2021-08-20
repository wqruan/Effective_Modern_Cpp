#include <iostream>


//Understand auto type deduction


template<typename T>
void f(T param) {
    printf("%d\n", param);
}

int main() {
    auto x = 27;
    auto cx(27);
    auto x3 = { 27, 28, 29 };
    f(x);
    f(cx);
    f(x3);
}