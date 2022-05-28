#pragma once

#include <vector>
#include <iostream>
#include "out_of_range.h"

namespace my {
    template<typename T, int N>
    class Array {
    private:
        std::vector<T> _vec;
    public:
        Array() {
            _vec.resize(N);
        };
        Array(const Array<T,N>& copy_array) {
            this->_vec = copy_array._vec;
        };
        ~Array() {
            _vec.clear();
        };

        T operator[](int i) {
            if(i < _vec.size() && i > 0) {
                return _vec[i];
            }
            else {
                throw OutOfRangeException();
            }
        };
    };
}