#include "out_of_range.h"

const char *my::OutOfRangeException::what() const noexcept {
    return "\tIndex out of range!\n";
}
