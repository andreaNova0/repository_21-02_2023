#pragma once
#include "Cbatteria.h"
class Ctelefono {
private:
	Cbatteria batteria;
public:
	void sms(int numSms);
	void chiamata(int numChiamata);
};

