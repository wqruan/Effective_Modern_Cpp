#include <iostream>
#include <atomic>
#include<initializer_list>
class item7
{
private:
    int x{5};
public:
    item7(int x);
    item7(std::initializer_list<long double> il);
    ~item7();
};

item7::item7(int x)
{

    std::cout << this->x << std::endl;
}
item7:: item7( std::initializer_list<long double> il) {
    
}

item7::~item7()
{
}

int main() {
    item7 item(2);
    item7 tmp{5,6};


}
