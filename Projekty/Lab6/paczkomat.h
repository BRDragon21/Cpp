#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
#include <string>
#include <sstream>

using namespace std;

class skrzynka
{
    private:

        float wys=0;
        float szer=0;
        bool czy_wol=1;

    public:
        
        bool &dos_skrzy = czy_wol;

        void skrzynia(float Wys_s, float Szer_s){

            wys=Wys_s;
            szer=Szer_s;

        }
    
        bool wloz_paczke(float w, float s);
};

//--------------------------------------------------------------------------------------------------

class paczkomat
{
    private:

        int skrzy[16];
        int kod[6];
        int skrzy_kod[16];
        bool dos_skrzy[16];

    public:

        void los_skrzy();
        void wyp_skrzy();
        void wloz_paczka(int ID_skrzy, float wys_p, float szer_p);
        void wyjm_paczka(int ID_skrzynka, int kod_skrzy);
        void interfejs();

};




