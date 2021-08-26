#include <iostream>
#include <atomic>
#include <mutex>
#include <memory>
#include <vector>
#include <string>
#include <tuple>

//Declare functions noexcept if they won't emit exceptions

int f(int x) noexcept {

}

template <class T, size_t N>
void swap (T (&a)[N], T (&b)[N]) noexcept(noexcept(swap(*a, *b))) {

}

template <class T1, class T2>
struct pair {
    T1 first;
    T2 second;
    void swap (pair& p) noexcept(noexcept(swap(first, p.first)) && noexcept(swap(second, p.second))) {

    }
};