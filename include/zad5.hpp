#include "zad1.hpp"

#include <algorithm>
#include <deque>
#include <vector>

// tutaj algorytm liczPopularnych(T begin, T end)
template <typename T>
int liczPopularnych(T iter, T ite) {
	return count_if(iter, ite, [](Artysta h) {
		return h.getSluchacze() > 1000;
	}
	)
}
