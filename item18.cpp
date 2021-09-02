#include <iostream>
#include <atomic>
#include <mutex>
#include <memory>
#include <vector>
#include <string>
#include <tuple>

// Use std::unique_ptr for exclusive-ownership resource management

class Investment {

};



template<typename Ts>
auto makeInvestment(Ts param) {
    auto delInvmt = [](Investment* pInvestment) {
    std::cout << "delete" << std::endl;
    delete pInvestment;
}; // custom delete function
    std::unique_ptr<Investment, decltype(delInvmt)> pInv(nullptr, delInvmt);
    return pInv;
}

int main() {
    auto inves = makeInvestment(1);
}