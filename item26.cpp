#include <iostream>
#include <atomic>
#include <mutex>
#include <memory>
#include <vector>
#include <string>
#include <tuple>
#include <chrono>
#include <set>


//Avoid overloading on universal references

std::multiset<std::string> names;

template<typename T>
void logAndAdd(T&& name) { //Functions taking universal references are the greediest functions in C++
    auto now = std::chrono::system_clock::now();

    names.emplace(std::forward<T>(name));
}

class Person {
    public:
    template<typename T>
    explicit Person(T&& n): name(std::forward<T>(n)) {

    }

    explicit Person(int idx) {}

    Person(const Person& rhs) {}

    Person(Person&& rhs) {}

    private:
        std::string name;
};


int main() {
    std::string petName("Darla");

    logAndAdd(petName); // pass lvalue std::string

    logAndAdd(std::string("Persephone")); //pass rvalue std::string

    logAndAdd("Patty Dog"); //pass string literal

    const Person p("Nancy");

    auto cloneOfP(p);
}