#include <iostream>
#include <atomic>
#include <mutex>
#include <memory>
#include <vector>
#include <string>
#include <tuple>

//Use constexpr whenever possible
class Point {
   public:
    constexpr Point(double xVal = 0, double yVal = 0) noexcept : x(xVal), y(yVal)
    {}
    constexpr double xValue() const noexcept { return x; } constexpr double yValue() const noexcept { return y; }
     void setX(double newX) noexcept { x = newX; }
     void setY(double newY) noexcept { y = newY; }
   private:
     double x, y;
};

constexpr int pow(int first, int exp) {
    //return (exp == 0 ? 1 : first * pow(first, exp - 1));
    auto result = 1;
    for (int i = 0; i < exp; ++i) result *= first;
    return result;
}

int main() {
    int tmp =10;
    constexpr auto x = 10;

    constexpr int t = pow(3, 10);
   // std::array<int, x> data1;
   // std::array<int, x> data2;
}