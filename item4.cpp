#include <iostream>
#include <string>

#include <boost/type_index.hpp>

//Know how to view deduced type
template<typename T>
void f(const T& param)
{
 using std::cout;
 using boost::typeindex::type_id_with_cvr;
 // show T
 cout << "T = "
 << type_id_with_cvr<T>().pretty_name()
 << '\n';
 // show param's type
 cout << "param = "
 << type_id_with_cvr<decltype(param)>().pretty_name()
 << '\n';
}

int main() {
    const int theAnswer = 42;
    auto x = "aas";
    auto y = &theAnswer;
    std::cout << typeid(x).name() << std::endl;
    std::cout << typeid(y).name() << std::endl;    
    f(y);
}