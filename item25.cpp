#include <iostream>
#include <atomic>
#include <mutex>
#include <memory>
#include <vector>
#include <string>
#include <tuple>
#include <chrono>

//Use std::move on rvalue references, std::forward on universal refernces

class Widget {
    public:
        Widget(Widget&& rhs): name(std::move(rhs.name)), p(std::move(rhs.p)) {  // rhs is rvalue reference

        }
        template<typename T>
        void setName(T&& newName) {
            name = std::forward<T>(newName); //newName is universal reference
        }
    private:
        std::string name;
        std::shared_ptr<std::string> p;
};

//Complier will automatically elide the copy operation when you return the local object inside a function 

int main() {
    
}