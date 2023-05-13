#include <iostream>
#include <cstdlib>
#include <math.h>

float pole_trojkata(float podst, float wysok);
float pole_trapezu(float b1, float b2, float w);
float pole_kola(float r);

using namespace std;

int main(int argc, char** argv) {
	
	cout  << "Program oblicza pola powierzchni figur plaskich\n"
    	  << "\n\t1 - pole trojkata\n"
	      << "\n\t2 - pole trapezu\n"
    	  << "\n\t3 - pole kola\n";
	int wybor;
	cout <<"\n\nTwoj wybor: "; 
	cin >> wybor;

	float a, b, wynik;
	float h;

	switch(wybor){
    	case 1:
        	cout << "\n\tPodaj dlugosc podstawy: "; cin >> a;
        	cout << "\n\tPodaj wysokosc trojkata: "; cin >> b;
        	wynik = pole_trojkata(a, b);        
    	break;

    	case 2:
    		cout<<endl<<"\tPodaj dlugosc pierwszej podstawy: ";
    		cin>>a;
    		cout<<endl<<"\tPodaj dlugosc drugiej podstawy: ";
    		cin>>b;
    		cout<<endl<<"\tPodaj wysokosc trapezu: ";
    		cin>>h;
    		wynik = pole_trapezu(a, b, h);
    	break;
    	
    	case 3:
    		cout<<endl<<"\tPodaj promien kola: ";
    		cin>>a;
    		wynik = pole_kola(a);
    	break;
    }

	cout << "\nWYNIK = " << wynik << endl;

	cout << endl;
	system("pause");
	return 0;
}

float pole_trojkata(float podst, float wysok){
	return 0.5 * podst * wysok;
}

float pole_trapezu(float b1, float b2, float w)
{
	return ((b1+b2)/2)*w;
}

float pole_kola(float r)
{
	return M_PI*(r*r);
}
