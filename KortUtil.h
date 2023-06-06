#pragma once

#include <random>
#include "KortStokk.h"
#include "Spiller.h"
#include "Kort.h"
#include <vector>

class KortUtil {
public:
	Kort* tilfeldigKort(KortStokk kortstokk);
	void DelUtKort(std::vector<Spiller*> spillere, KortStokk kortstokk);
};