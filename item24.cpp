#include <iostream>
#include <atomic>
#include <mutex>
#include <memory>
#include <vector>
#include <string>
#include <tuple>
#include <chrono>

//Distinguish universal references from rvalue references

//If you see "T&&" without type deductin, you're looking at an rvalue reference

template<typename T>
void f(std::vector<T>&& param) {} // param is a rvalue reference

template<typename T>
void f(const T&& param) {} // param is an universe reference

int main() {
    std::vector<int> v;
    f(v);
    auto tmp = [](auto&& func, auto&& ... params) {
        
    };
    int x = 10;

    f(10);
}