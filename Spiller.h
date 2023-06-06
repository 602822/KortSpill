#pragma once

#include <vector>
#include "Kort.h"
using namespace std;
#include <iostream>



class Spiller {

private:

	const wchar_t* navn;
	int verdi;
	vector<Kort*> spillerSineKort;


public:
	Spiller(const wchar_t* navn) {
		this->navn = navn;
	};

	const wchar_t* getNavn() {
		return navn;
	};

	void setNavn(const wchar_t* navn) {
		this->navn = navn;
	};

	int getVerdi() {
		return verdi;
	};

	void setVerdi(int verdi) {
		this->verdi = verdi;
	};

	vector<Kort*> getKort() {
		return spillerSineKort;
	};

	void leggTilKort(Kort* kort) {
		this->spillerSineKort.push_back(kort);
	};

	void VisKort() {
		for (Kort* kort : spillerSineKort) {
			wcout << kort->getSymbol() << kort->getVerdi() << endl;
		}
	};


};