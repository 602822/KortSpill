#include <vector>
#include "Kort.h"
using namespace std;

class Kortstokk {

private:
	vector<Kort*> kortstokk;

public:
	KortStokk();
	~KortStokk();

	vector<Kort*> getKortstokk();
	void setKortstokk(vector<Kort*> kortstokk);






};