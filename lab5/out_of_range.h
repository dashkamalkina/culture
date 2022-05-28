#pragma once
#include "array_exception.h"

namespace my {
    class OutOfRangeException: public ArrayException{
    public:
        virtual const char* what() const noexcept;
    };
}