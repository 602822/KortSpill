// Kortspill.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Spiller.h"
#include "KortStokk.h"
#include "KortUtil.h"
#include <vector>
#include <random>
using namespace std;






int main()
{
	vector<Spiller*> spillere;

	Spiller* spiller1 = new Spiller(L"Vebjorn");
	Spiller* spiller2 = new Spiller(L"Sondre");

	spillere.push_back(spiller1);
	spillere.push_back(spiller2);

	KortStokk* kortstokk = new KortStokk();

	DelUtKort(spillere, *kortstokk);

	for (Spiller* spiller : spillere) {
		spiller->VisKort();
	}














}
