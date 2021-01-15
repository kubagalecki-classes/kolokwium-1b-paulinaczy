#pragma once

#include "catch.hpp"

#include <ostream>
#include <sstream>
#include <string>

// tutaj klasa Artysta
using namespace std;

class Artysta {
public:
	Artysta():pseudonim("Anonim"), licz_sl(0){}
	Artysta(const string& x, unsigned y): pseudonim(x), licz_sl(y){}
	virtual void graj(ostream& stream) const {
		stream << pseudonim << ": " << licz_sl;
	}
	const string& getPseudonim(ostream& l) const {
		return pseudonim;
	}
	unsigned getSluchacze() const {
		return licz_sl;
	}
private:
	string pseudonim;
	unsigned licz_sl;
};
