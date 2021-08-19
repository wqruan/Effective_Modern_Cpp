#include <iostream>
#include <atomic>
#include <mutex>
#include <memory>
#include <string>

using UPtrMapSS = 
    std::unique_ptr<std::unordered_map<std::string, std::string>>;

template<typename T>
using MyAllocList = std::list<T, MyAlloc<T>>; 
