#include <iostream>
#include <atomic>
#include <mutex>
#include <memory>
#include <vector>
#include <string>
#include <tuple>

//Make const member functions thread safe
class Polynomial  {
public:
    using RootsType = std::vector<double>;
    RootsType roots() const {
        if (!rootsAreValid) {
            rootsAreValid = true;
        }
        return rootVals;
    }

private:
    mutable bool rootsAreValid{ false };
    mutable RootsType rootVals{};
};

class Widget {
public:
    int magicValue() const {
        if (cacheValid) return cachedValue;
        else
        {
           auto val1 = 1;
           auto val2 = 2;
           cacheValid = true;
           cachedValue = val1 + val2;
           return cachedValue;
        }

        
    }
    private:
        mutable std::atomic<bool> cacheValid{ false };
        mutable std::atomic<int> cachedValue;
};

int main() {}