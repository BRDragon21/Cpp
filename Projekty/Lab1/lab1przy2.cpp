#include <iostream>

using namespace std;
//---------------------------------------------

int main(int argc, char** argv) {
int a = 10;     // inicjalizacja zmiennej 'a' wartości 10
int &ala = a;   // referencja o nazwie 'ala' zmiennej 'a'
                // tylko inicjalizacja referencji!

cout << "Liczba a = " << a << endl;

ala = 5;
cout << "Liczba a = " << a << endl;

//int *wsk_int = &a; // inicjalizacja wskaźnika typu 'int'
int *wsk_int; // ...inaczej - definicja wskaźnika typu 'int'
wsk_int = &a; // ...i ustawienie wskaźnika na adres zmiennej 'a'
*wsk_int = 8;
cout << "Liczba a = " << a << endl;

//---------------------------------------------------
// PRZYKŁAD 1
// zdefiniuj referencję typu zmiennoprzecinkowego o nazwie 'liczba_flo'
// do zmiennej tego samego typu o nazwie 'zmienna'

float zmienna; // zakładamy z treści zadania, że taka zmienna istnieje
float &liczba_flo = zmienna;

//---------------------------------------------------
// PRZYKŁAD 2
// Zdefiniuj referencję typu znakowego o nazwie 'znaczek' do zmiennej
// tego samego typu o nazwie 'znak'. Przypisz tej zmiennej wartość 'z'.

char znak;
char &znaczek = znak;
znaczek = 'z';  // ...używając referencji do zmiennej 'znak'
znak = 'z';     // ...używając nazwy zmiennej

//---------------------------------------------------
// PRZYKŁAD 3
// Zdefiniuj referencję typu logicznego o nazwie 'faza' do zmiennej 'stan'
// Przypisz tej zmiennej wartość 'true'

bool stan, &faza = stan; // w jednej instrukcji definicja zmiennej
                        // oraz inicjalizacja referencji
stan = true;

//---------------------------------------------------
// PRZYKŁAD 4
// Wyjaśnij poniższe instrukcje: (odpowiedzi w komentarzach)

int b;              // definicja zmiennej typu całkowitego o nazwie 'b'
int &beta = b;      // referencja typu całkowitego o nazwie 'beta' do zmiennej 'b'
char znak1;         // definicja zmiennej typu znakowego o nazwie 'znak1'
char &z = znak1;    // referencja typu znakowego o nazwie 'z' do zmiennej 'znak1'
z = 'z';            // przypisanie zmiennej 'znak' wartości 'z' przez refencję 'z'

//---------------------------------------------------
// PRZYKŁAD 5
// Zdefiniuj wskaźnik typu zmiennoprzecinkowego o nazwie 'wsk_flo' i
// ustaw go na zmienną o nazwie 'dana'. Przypisz tej zmiennej wartość '5

float dana, *wsk_flo;   // definicje zmiennej i wskaźnika w jednej instrukcji
wsk_flo = &dana;        // ustawienie wskaźnika
*wsk_flo = 5;           // przypisanie wartości zmiennej przez wskaźnik

//------------------------------------------------------
// Kontynuacja zabawy ze wskaźnikiem 'wsk_flo':

cout << "\nwsk_flo pokazuje na zmienna o wartosci " << *wsk_flo << endl;
float liczba1 = 0;
wsk_flo = &liczba1; // przestawienie wskaźnika na adres innej zmiennej

cout << "\nwsk_flo pokazuje na zmienna o wartosci " << *wsk_flo << endl;

//------------------------------------------------------

cout << endl; system("pause"); return 0;
}