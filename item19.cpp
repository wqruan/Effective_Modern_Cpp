#include <iostream>
#include <atomic>
#include <mutex>
#include <memory>
#include <vector>
#include <string>
#include <tuple>

//Use std::shared_ptr for shared-ownership resource management

class Widget {};

class Fraction
{
private:
    int m_numerator = 0;
    int m_denominator = 1;

public:
    Fraction(int numerator = 0, int denominator = 1) :
        m_numerator(numerator), m_denominator(denominator)
    {
    }

    friend std::ostream& operator<<(std::ostream& out, const Fraction &f1)
    {
        out << f1.m_numerator << "/" << f1.m_denominator;
        return out;
    }
};

int main() {
    auto pw = new Widget;

    std::shared_ptr<Widget> spw1(pw);

    std::shared_ptr<int> p3 = std::make_shared<int>(43);

    auto p4(p3);

    std::unique_ptr<Fraction> f1{new Fraction{3, 5}};
    std::cout << *f1 << std::endl;

    std::unique_ptr<Fraction> f2;

    f2 = std::move(f1);

    auto f3 = std::make_unique<Fraction>(2, 7);

    std::cout << *f3 << std::endl;  

}