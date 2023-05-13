#include <iostream>
#include <cstdlib>

using namespace std;



int main() {
	
	cout << "Przyklad umozliwia uzytkownikowi ponowienie pracy z programem\n";
	
	int a, b, c;
	
	start:
	cout << "\nPodaj wartosc liczby\n"<<"A: ";
	cin >> a;
	cout << "B: ";
	cin >> b;
	c=a+b;
	cout << "A+B="<<c<<endl<<endl;
	
	char odp = 'N';
	cout << "\nCzy chcesz kontynuowac? (T/N): "; 
	cin >> odp;
	
	if (odp == 'T' || odp == 't'){
	 	goto start;
	}
	
	system("pause");
	
	return 0;
}
