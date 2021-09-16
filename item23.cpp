#include <iostream>
#include <atomic>
#include <mutex>
#include <memory>
#include <vector>
#include <string>
#include <tuple>
#include <chrono>

//Understand std::move and std::forward

class Annotation {
    public:
        explicit Annotation (const std::string text) : value(std::move(text)) {

        }
    
    private:
        std::string value;
};

void process(const Annotation& lvalArg) {
    std::cout << "lval" << std::endl;
}

void process(Annotation&& rvalArg) {
    std::cout << "rval" << std::endl;
}

template<typename T>
void logAndProcess(T&& param) {
    auto now = std::chrono::system_clock::now();

    std::cout << "Calling process" <<std::endl;
    process(std::forward<T>(param));
}

int main() {
    Annotation tmp("123");

    logAndProcess(tmp);

    logAndProcess(std::move(tmp));
}