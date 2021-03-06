/*
    sort.cpp

    Sorting functions
*/

#include "sort.hpp"

namespace {

    void swap(int& n1, int& n2) {
        int t = n1;
        n1 = n2;
        n2 = t;
    }

    void order(int& n1, int& n2) {
        if (n1 > n2)
            swap(n1, n2);
    }
}

// sort the entire vector in ascending order
void sort(std::vector<int>& v) {

    if (v.empty())
        return;

    for (int i = 0; i < (v.size() - 1); ++i) {
        for (int j = i + 1; j < v.size(); ++j) {
            order(v[i], v[j]);
        }
    }

}
