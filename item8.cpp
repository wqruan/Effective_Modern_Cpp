#include <iostream>
#include <atomic>
#include <mutex>
#include <memory>
using MuxGuard = std::lock_guard<std::mutex>;

std::mutex f1m, f2m, f3m; // mutexes for f1, f2, and f3

//Prefer nullptr to 0 and NULL

int f1(std::shared_ptr<int> spw) {} // call these only when
double f2(std::unique_ptr<int> upw) {} // the appropriate
bool f3(int* pw) {} // mutex is locked

void f(int x) {

}

void f(bool x) {

}

void f(void* x) {

}

template<typename FuncType, typename MuxType, typename PtrType>
auto lockAndCall(FuncType func, MuxType& mutex, PtrType ptr) -> decltype(func(ptr)) {
    MuxGuard g(mutex);
    return func(ptr);
}


int main() {
    f(0);
    f(nullptr);
    //auto result1 = lockAndCall(f1, f1m, 0);
    //auto result2 = lockAndCall(f2, f1m, NULL);
    auto result3 = lockAndCall(f3, f1m, nullptr);  
}

