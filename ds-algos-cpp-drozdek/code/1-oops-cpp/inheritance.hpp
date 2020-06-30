#include <iostream>
#include <vector>
#include <string>

class Base {
    public:
    Base() {}
    void f(std::string caller = "unknown caller") {
        std::cout << "Base.f() invoked from " << caller << std::endl;
    }
};

void runInheritanceDemo() {
    Base b;
    b.f();
    b.f("runInheritanceDemo");
}