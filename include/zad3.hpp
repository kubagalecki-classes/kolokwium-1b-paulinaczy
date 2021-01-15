#pragma once

#include "zad1.hpp"

//tutaj szablon ArtystaPlusInstrument
template <class T>
class ArtystaPlusInstrument {
public:
	ArtystaPlusInstrument(const Artysta& i, const T& j) : a(i), i(j) {}
	unsigned koncert() {
		i.liczbaUczestnikow(a);
	}
private:
	Artysta a;
	T i;
};
