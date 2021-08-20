#include <iostream>
#include <atomic>
#include <mutex>
#include <memory>
#include <vector>
#include <string>
#include <tuple>


bool isLucky(int number) {
    return number > 5;
}

bool isLucky(char number) = delete;

bool isLucky(bool number) = delete;

bool isLucky(double number) = delete;

template<typename T>
void processPointer(T* ptr) {

}

template<>
void processPointer<void>(void*) = delete;


template<>
void processPointer<char>(char*) = delete;


void processPointer(char *) {

}
int main() {
    // if (isLucky('a')) {
    //     std::cout << 123 << std::endl;
    // }
    char tmp = '1';
    processPointer(&tmp);
}