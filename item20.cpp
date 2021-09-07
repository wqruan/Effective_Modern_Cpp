#include <iostream>
#include <atomic>
#include <mutex>
#include <memory>
#include <vector>
#include <string>
#include <tuple>


//Use std::weak_ptr for std::shared_ptr - like pointers that can dangle

class Widget {};

int main() {
    auto spw = std::make_shared<Widget>();

    std::weak_ptr<Widget> wpw(spw);

    spw = nullptr;

    if (wpw.expired()) {
        std::cout << "asdf" << std::endl;
    }

    std::shared_ptr<Widget> spw1 = wpw.lock();

    auto spw2 =wpw.lock();

    if (spw2 == nullptr)
    {
        std::cout << "asdf" << std::endl;
    }
    
}