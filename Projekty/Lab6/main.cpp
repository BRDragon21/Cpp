#include <iostream>
#include <cstdlib>
#include <windows.h>

#include "paczkomat.cpp"

using namespace std;

void interfejs();
int main();

int main() {
	
    SetConsoleOutputCP(65001);

	cout<<endl<<"Witaj w paczkomacie."<<endl<<endl;
	
	paczkomat lublin;

	lublin.los_skrzy();

	cout<<"Liczba skrzynek w paczkomacie wynosi 16."<<endl;

	lublin.interfejs();

	system("pause");
	return 0;
}
