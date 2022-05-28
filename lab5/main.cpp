#include <iostream>
#include "array.h"
#include "array_exception.h"
#include <exception>

namespace my {

    template<typename T>
    void swap(T &a, T &b) {
        T tmp = a;
        a = b;
        b = tmp;
    }

}


int main() {
    int t,p;
    t = 5;
    p = 10;
    std::cout << t << " " << p << std::endl;
    my::swap(t,p);
    std::cout << t << " " << p << std::endl;

    auto a = my::Array<int, 10>();



    try {
        std::cout << "a[5] = " << a[5] << std::endl;
        std::cout << "a[20] = " << a[20] << std::endl;
    }
    catch (const my::ArrayException& e) {
        std::cout << std::endl << e.what() << std::endl;
    }
    catch (const std::exception& e) {
        std::cout << e.what();
    }
    catch (...) {
        std::cout << "any" << std::endl;
    }

    return 0;
}
