#pragma once
#include <string>
using namespace std;
class Cbatteria
{
private:
	int capacitącarica, livelloCarica;
public:
	Cbatteria();
	Cbatteria(int capacitącarica, int livelloCarica);
	int getBatteria();
};

