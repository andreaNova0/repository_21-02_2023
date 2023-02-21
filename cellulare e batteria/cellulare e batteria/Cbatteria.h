#pragma once
#include <string>
using namespace std;
class Cbatteria
{
private:
	int capacitàcarica, livelloCarica;
public:
	Cbatteria();
	Cbatteria(int capacitàcarica, int livelloCarica);
	int getBatteria();
};

