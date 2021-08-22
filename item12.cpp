#include <iostream>
#include <atomic>
#include <mutex>
#include <memory>
#include <vector>
#include <string>
#include <tuple>

class Base {
    public:
     virtual void doWork() & { std::cout << "123" << std::endl; }
     virtual void doWork() && { std::cout << "12344" << std::endl; }
};

class Derived: public Base {
    public:
        void doWork() & { std::cout << "1234" << std::endl; }
        void doWork() && override { std::cout << "1234444" << std::endl; }
};

Derived generate() {
    Derived tmp;
    return tmp;
}

int main() {
    std::unique_ptr<Base> upb = std::make_unique<Derived>();
   // generate().doWork();
    upb->doWork();

}

