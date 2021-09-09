#include <iostream>
#include <atomic>
#include <mutex>
#include <memory>
#include <vector>
#include <string>
#include <tuple>

//Prefer std::make_unique and std::make_shared to direct use of new.

class Widget {};

int main() {
    auto upw1(std::make_unique<Widget>());

    std::unique_ptr<Widget> upw2(new Widget);

    auto spw1(std::make_shared<Widget>());

    std::shared_ptr<Widget> spw2(new Widget);

    auto upv = std::make_unique<std::vector<int>>(10, 20);
    
    auto spv = std::make_shared<std::vector<int>>(10, 20); //make functions cannot move initialize_list perfectly
    //for large object, do not use make_unique or make_shared
}