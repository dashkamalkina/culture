#pragma once
#include <exception>
namespace my {
    class ArrayException: public std::exception {
    public:
        virtual const char* what() const noexcept= 0;
    };
}