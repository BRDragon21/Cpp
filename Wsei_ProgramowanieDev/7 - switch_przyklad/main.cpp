#include <iostream>
#include <cstdlib>
#include<math.h>

using namespace std;



int main() {
	
	cout << "Program oblicza pola figur plaskich\n";
	
	
	cout << "\n\t[1] - pole prostokata";
	cout << "\n\t[2] - pole trojkata";
	cout << "\n\t[3] - pole kola";
	
	int wybor; 
	cout << "\n\nTwoj wybor: "; 
	cin >> wybor;
	
	float a, b, wynik;
	
	switch(wybor){
    
    case 1:
    cout << "\n\tPodaj dlugosc boku a = "; cin >> a;
    cout << "\n\tPodaj dlugosc boku b = "; cin >> b;
    wynik = a * b;
    break;
    
    case 2:
    cout << "\n\tPodaj dlugosc podstawy a = "; cin >> a;
    cout << "\n\tPodaj dlugosc wysokosci h = "; cin >> b;
    wynik = a * b / 2;
    break;
    
    case 3:
    cout << "\n\tPodaj dlugosc promienia R = "; cin >> a;
    wynik = M_PI * a * a;
    break;

    }
    
    cout << "\nWynik = " << wynik << endl;
	
	system("pause");
	return 0;
}
