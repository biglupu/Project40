
#pragma once
#include <string>
#include <vector>
#include "Opettaja.h"
#include "Opiskelija.h"

using std::string;
using std::vector;

class Koulu
{
public:

	Koulu();
	Koulu(string mKoulunNimi);
	void lisaaOpiskelija(Opiskelija aOpiskelijat);
	void printOpiskelijat()const;

private:

	string mKoulunNimi = "xxxx";
	vector <Opiskelija> mOpiskelijat;
	vector <Opettaja> mOpettajat;

};