#include <iostream>
#include <vector>

namespace my {
    template<class ForwardIterator, class Pred>
    bool all_of (ForwardIterator first, ForwardIterator last, Pred pred)
    {
        while (first!=last) {
            if (!pred(*first)) {
                return false;
            }
            first++;
        }
        return true;
    }

    template <class ForwardIterator, class Pred>
    bool is_partitioned (ForwardIterator first, ForwardIterator last, Pred pred)
    {
        while (first!=last && pred(*first)) {
            first++;
        }
        while (first!=last) {
            if (pred(*first)) {
                return false;
            }
            first++;
        }
        return true;
    }

    template<class BiDirIterator, class T>
    BiDirIterator find_backward (BiDirIterator first, BiDirIterator last, const T& val)
    {
        while (first!=last) {
            if (*last==val) return last;
            --last;
        }
        return --last;
    }
}

bool is_0(int a) {
    return a == 0;
}

bool is_even(int i) {
    return i % 2 == 0;
}

class CPoint {
public:
    int x,y;
    CPoint(int x, int y) {
        this->x = x;
        this->y = y;
    }
};

bool is_xy_sum_odd(CPoint p) {
    return (p.x + p.y)%2 != 0;
}

int main() {
    std::vector a = {1,2,2,2,2,2,4,4,4,4,2};
    std::cout << "array size :"<< a.size() << std::endl;
    for (auto i : a) {
        std::cout << i << " ";
    }

    std::cout << std::boolalpha;
    std::cout << std::endl << "Are all of elements are 0" << std::endl;
    std::cout << my::all_of(a.begin(), a.end(), is_0);
    std::cout << std::endl << "Are elements partitioned by is_even" << std::endl;
    std::cout << my::is_partitioned(a.begin(), a.end(), is_even);
    std::cout << std::endl << "Find first index from tail which equals 2" << std::endl;
    std::cout << my::find_backward(a.begin(), a.end(), 2) - a.begin();

    std::vector b = {CPoint(1,2), CPoint(2,3), CPoint(3,4)};
    std::cout << std::endl << "Are all of elements are is_xy_sum_odd" << std::endl;
    std::cout << my::all_of(b.begin(), b.end(), is_xy_sum_odd) << std::endl;
    return 0;
}
