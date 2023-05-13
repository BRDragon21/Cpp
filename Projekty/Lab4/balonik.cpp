#include "balonik.h"


void balonik::start(string n){

   wysokosc=0;
   srednica=0;

   nazwa=n;

}

//---------------------------------------------------

void balonik::zmien_wysokosc(float w){

   wysokosc=wysokosc+w;

}

//---------------------------------------------------

void balonik::zmien_srednice(float s){

   srednica=s;

}

//---------------------------------------------------

void balonik::wypisz(){

    cout<<"To balonik "<<nazwa<<" o srednicy "<<srednica<<"cm oraz znajduje sie na wysokosci "<<wysokosc<<"m."<<endl;
}

//---------------------------------------------------

void pompuj(balonik bal, float &r){

    float pi=3.14;
    float p=0;
    p=pi*(r*r);

    bal.zmien_srednice(p);

}