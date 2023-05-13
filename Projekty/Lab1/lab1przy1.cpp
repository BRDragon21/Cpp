#include <iostream>
#include <cstdlib> // m.in. dla funkcji 'system("pause")'

using namespace std; // rozszerzenie przestrzeni nazw
// aby pomijać 'std::'

//---------------------------------
bool czy_trojkat(float A, float B, float C); // deklaracja funkcji
//---------------------------------

int main(int argc, char *argv[]) {
cout << "Program informuje czy z podanych odcinkow mozna zbudowac trojkat\n";
cout << "\nPodaj dlugosci bokow:\n";

float a, b, c;
cout << "\n\ta = "; cin >> a;
cout << "\n\tb = "; cin >> b;
cout << "\n\tc = "; cin >> c;

if(czy_trojkat(a, b, c)) // wywołanie funkcji w instrukcji warunkowej
    cout << "\nZ podanych odcinkow mozna zbudowac trojkat\n";
else cout << "\nZ podanych odcinkow nie mozna zbudowac trojkata\n";

cout << endl;
system("pause");
return 0;
}

//---------------------------------
bool czy_trojkat(float A, float B, float C){ // ciało funkcji
    if (A < B + C && B < A + C && C < A + B) return true;
    else return false;
}
//---------------------------------