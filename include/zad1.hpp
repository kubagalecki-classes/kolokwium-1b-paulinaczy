#pragma once

#include "catch.hpp"

#include <ostream>
#include <sstream>
#include <string>

// tutaj klasa Artysta
class Artysta {
public:
	Artysta():pseudonim("Anonim"), sluchacze(0){}
	Artysta(const string& x, unsigned y): pseudonim(x), sluchacze(y){}
	void graj(std::ostream& stream) const {
		stream << pseudonim << ": " << sluchacze;
	}
	const string& getPseudonim(std::ostream& l) const {
		return pseudonim;
	}
	unsigned getSluchacze() const {
		return sluchacze;
	}
private:
	string pseudonim;
	unsigned sluchacze;
};
