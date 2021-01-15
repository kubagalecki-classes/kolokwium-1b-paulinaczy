#pragma once

#include "zad1.hpp"

#include <cctype>

// tutaj klasy PopGwiazda, RapGwiazda oraz funkcja stworzArtyste
class PopGwiazda: public Artysta {
public:
	PopGwiazda(const string& a, const unsigned& b):pseudonim(a), licz_sl(b){}
	virtual void graj(ostream& stream) const override {
		stream << "Pop Gwiazda" << pseudonim;
	}
private:
	string pseudonim;
	unsigned licz_sl;
};

class RapGwiazda : public Artysta {
public:
	RapGwiazda(const string& c, const unsigned& d):pseudonim(c), licz_sl(d){}
	virtual void graj(ostream& stream) const override {
		stream << "Rap Gwiazda" << pseudonim;
	}
private:
	string pseudonim;
	unsigned licz_sl;
};

Artysta* stworzArtyste(string e) {

}
