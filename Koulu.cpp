#include "Koulu.h"
#include <iostream>
#include "Opettaja.h"
#include "Opiskelija.h"
#include <vector>

using std::cout;
using std::endl;
using std::string;

Koulu::Koulu()
{
	cout << "luodaan koulu..." << endl;
}

Koulu::Koulu(string aKoulunNimi)
	:mKoulunNimi(aKoulunNimi)
{
	cout << "Luotu oppilaitos nimelta " << aKoulunNimi << endl;
}



