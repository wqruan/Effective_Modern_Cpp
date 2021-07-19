#include <iostream>

template<typename Container, typename Index>
auto authAndAccess(Container& c, Index i) {
    return c[i];
}

int main() {
    int c[3] = {1,2,3};
    authAndAccess(c, 1);
}