#include <iostream>
#include <cstdlib>

using namespace std;

class balonik
{
    private:

        string nazwa;
        float wysokosc;
        float srednica;

    public:

       void start(string n);

       void zmien_wysokosc(float w);

       void zmien_srednice(float s);

       void wypisz();


};

void pompuj(balonik bal, float &r);