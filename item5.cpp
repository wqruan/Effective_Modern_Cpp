#include <iostream>
#include <map>
#include <string>

//Prefer auto to explicit type declarations

int main() {
    auto x2= 1;
    std::map<std::string, int> store;
    store["wqruan"] = 0;
    for (auto p:store) {
        std::cout << p.first  << std::endl;
    }
}