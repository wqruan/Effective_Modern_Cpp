
#include <iostream>
#include <deque>
#include <string>
template<typename Container, typename Index>
decltype(auto) authAndAccess(Container&& c, Index i)  {
    return std::forward<Container>(c)[i];
}

std::deque<std::string> makeStringDeque() {
    std::deque<std::string> tmp;
    tmp.push_back("123");
   return tmp; 
}

decltype(auto) f1() {
int x = 0;
return x;
}

decltype(auto) f2() {
// decltype(x) is int, so f1 returns int

int x = 0;

return (x); // decltype((x)) is int&, so f2 returns int&
}


int main() {
    int c[3] = {1,2,3};
    authAndAccess(c, 1) =10;
    std::cout << c[1] << std::endl;
    int w = 0;
    auto tmp = w;
    decltype(auto) tmp1 = w;
    double tmp2 =0.001;
    auto tmp3 = tmp2;
    decltype(auto) tmp4 =  tmp2;

    
    auto s = authAndAccess(c, 5);
} 

