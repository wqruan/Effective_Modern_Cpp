#include <iostream>
#include <atomic>
#include <mutex>
#include <memory>
#include <vector>
#include <string>
#include <tuple>
#include <chrono>
#include <set>

// Familiarize yourself with alternatives to overloading on universal references

std:: string nameFromIdx(int idx) {
    return "asd";
}
std::multiset<std::string> names;


// void logAndAdd(T&& name)
// {
//     auto now = std::chrono::system_clock::now();
//     std::cout << now << "logAndAdd" << endl;
//     names.emplace(std::forward<T>(name));
// }
template<typename T>
void logAndAddImpl(T&& name, std::false_type) {
    auto now = std::chrono::system_clock::now();
    std::cout <<  "logAndAdd" << std::endl;
    names.emplace(std::forward<T>(name));
}



template<typename T>
void logAndAdd(T&& name)
{
    logAndAddImpl(std::forward<T>(name), std::is_integral<typename std::remove_reference<T>::type>());
}

void logAndAddImpl(int idx, std::true_type) {
    logAndAdd(nameFromIdx(idx));
}
class Person {
    public:
        template<typename T, typename = typename std::enable_if<!std::is_same<Person, typename std::decay<T>::type>::value
        >::type
        >
        explicit Person(std::string n): name(std::move(n)){}
        explicit Person(int idx): name(nameFromIdx(idx)) {}

    private:
        std::string name;
};

int main(){

}