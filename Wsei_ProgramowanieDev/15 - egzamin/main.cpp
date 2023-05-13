#include <iostream>
#include <cstdlib>

using namespace std;

float obl_spalanie(float ile_paliwa, int droga);
int main();
void cialo();
void pp();
void ponu();

string pu;

int main() {
	
	if(pu == "")
	{
		pp();
	}
	
	cialo();
	
	ponu();
	
	return 0;
	
}

//-----------------------------------------------------------------------------------------------------------

void pp(){
	
	cout<<"Program wylicza srednie spalanie przejechanej drogi."<<endl<<endl;
	
}

//-----------------------------------------------------------------------------------------------------------

void cialo() {
	
	float i_p;
	int d;
	
	cout<<"Podaj ile zuzyles paliwa w litrach: ";
	cin>>i_p;
	cout<<endl;
	cout<<"Podaj dlugosc przejechanej drogi w kilometrach: ";
	cin>>d;
	cout<<endl;
	
	cout<<endl;
	cout<<"Srednie spalanie twojego pojazdu wynosi "<<obl_spalanie(i_p, d)<<"L/100km."<<endl;
	
}

//-----------------------------------------------------------------------------------------------------------

float obl_spalanie(float ile_paliwa, int droga) {
	
	return (ile_paliwa/droga)*100;	
	
}

//-----------------------------------------------------------------------------------------------------------

void ponu(){
	
	cout<<endl;
	cout<<"Czy chcesz ponownie wykonac obliczenia?"<<endl;
	cout<<"Tak/Nie  ";
	cin>>pu;
	cout<<endl;
	
	if(pu == "T" || pu == "Tak" || pu == "t" || pu == "tak" || pu == "Y" || pu == "Yes" || pu == "y" || pu == "yes" || pu == "TAK" || pu == "YES")
	{
		main();
	}
	else if(pu == "N" || pu == "Nie" || pu == "n" || pu == "nie" || pu == "No" || pu == "no" || pu == "NIE" || pu == "NO")
	{
		system("pause");
		
	}
	else
	{
		cout<<"Zmienna nie rozpoznana."<<endl;
		cout<<"Sprobuj ponownie."<<endl;
		ponu();
	}
	
}

