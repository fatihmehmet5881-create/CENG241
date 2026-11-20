#include <iostream>

namespace ScopeA {
    void print() {
        std::cout << "Namespace Scope A\n";
    }
}

namespace ScopeB {
    void print() {
        std::cout << "Namespace Scope B\n";
    }
}

namespace ScopeC {
    void print() {
        std::cout << "Namespace Scope C\n";
    }
}
using namespace ScopeC;

int main() {
    ScopeA::print();
    ScopeB::print();
    print();
    return 0;
}
