#include <iostream>
#include <atomic>
#include <mutex>
#include <memory>
#include <vector>
#include <string>
#include <tuple>
enum  class Color {black, white, red};
std::vector<std::size_t> primeFactors(std::size_t x) { }
enum class Status: std::uint64_t { good = 0,
 failed = 1,
 incomplete = 100,
 corrupt = 200,
 audited = 500,
 indeterminate = 0xFFFFFFFFFFF
 };
enum UserInfoFields { uiName, uiEmail, uiReputation };
using UserInfo = std::tuple<std::string, std::string, std::size_t>;
int main() {
    Color x = Color::red;
    auto y = Color::black;
    Color c = Color::red;
    if (static_cast<double>(c) < 14.6) {
        auto factors = primeFactors(static_cast<std::size_t>(c));
    }

    UserInfo uinfo;
    auto val = std::get<uiEmail>(uinfo);
}


