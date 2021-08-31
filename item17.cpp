#include <iostream>
#include <atomic>
#include <mutex>
#include <memory>
#include <vector>
#include <string>
#include <tuple>

//Understand special member function generation

class Widget {
    public:
        ~Widget();
        Widget(const Widget&) = default;
        Widget& operator=(const Widget&) = default;
};


class Base {
    public:
        virtual ~Base() = default;
        Base(Base &&) = default;
        Base& operator=(Base &&) = default;

        Base(const Base&) = default;
        Base& operator=(const Base&) = default;
}