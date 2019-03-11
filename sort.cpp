/*
    sort.cpp

    Sorting functions
*/

#include "sort.hpp"

// sort the entire vector in ascending order
void sort(std::vector<int>& v) {

	if (v.size() <= 1)
		return;

	int t = v[0];
	v[0] = v[1];
	v[1] = t;
}
