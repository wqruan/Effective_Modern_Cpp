#include <iostream>
#include <atomic>
#include <mutex>
#include <memory>
#include <vector>
#include <string>
#include <tuple>
#include <chrono>
#include <set>

//Understand reference collapsing

//If either reference is an lvalue reference, the result is an lvalue reference. Otherwise (i.e., if both are rvalue references) the result is an rvalue reference
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

template<typename T>
void func(T&& param) {

}
Person personFactory() {
    return Person("123");
}
int main() {
     Person p("1234");
     
     func(p);

     func(personFactory);
}


