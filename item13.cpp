#include <iostream>
#include <atomic>
#include <mutex>
#include <memory>
#include <vector>
#include <string>
#include <tuple>

//Prefer const_iterators to iterators

template<typename C, typename V>
void findAndInsert(C& container, const V& targetValue, const V& insertValue) {
    using std::cbegin;
    using std::cend;

    auto it = std::find(cbegin(container), cend(container), targetValue);

    container.insert(it, insertValue);
}


int main() {
    using IterT = std::vector<int>::iterator;
    using ConstIterT = std::vector<int>::const_iterator;

    std::vector<int> values;
    auto it = std::find(values.cbegin(), values.cend(),1983);
    values.insert(it, 1998);
}