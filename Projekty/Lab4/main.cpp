#include <iostream>
#include <cstdlib>

#include "balonik.cpp"

using namespace std;


int main() {
	
    balonik czerwony;
    balonik zielony;
    balonik niebieski;
    float a=4;

    czerwony.start("czerwony");
    czerwony.zmien_wysokosc(5);
    czerwony.zmien_srednice(6);
    czerwony.wypisz();
	
    zielony.start("zielony");
    zielony.zmien_wysokosc(14);
    pompuj(zielony, a);
    zielony.wypisz();

    niebieski.start("niebieski");
    niebieski.zmien_wysokosc(10);
    niebieski.zmien_srednice(12);
    pompuj(niebieski,a);
    niebieski.wypisz();
	
	system("pause");
	return 0;
}

