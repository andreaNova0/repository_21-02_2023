#pragma once
#include "Cbatteria.h"
class Ctelefono {
private:
	Cbatteria batteria;
	int sms, chiamate, tempoTot;
public:
	Ctelefono();
	Ctelefono(Cbatteria batteria, int sms, int chiamate, int tempoTot);
	string toString();
};

