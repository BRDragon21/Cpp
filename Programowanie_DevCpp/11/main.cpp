#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

int main() {
	
	cout<<"Program liczacy pierwiastki rownania kwadratowego."<<endl<<endl;
	
	float a, b, c, D, w1, w2, x1, x2;
	
	pz:
	cout<<"Podaj wartosc: "<<endl;
	cout<<"a = ";
	cin>>a;
	cout<<"b = ";
	cin>>b;
	cout<<"c = ";
	cin>>c;
	cout<<endl;
	
	if(a==0)
	{
		cout<<"Zmienna a nie moze przyjmowac wartosci 0."<<endl;
		cout<<"Sprobuj podac wartosci podownie."<<endl;
		goto pz;
	}
	else
	{
		D= (pow(b, 2))-(4*a*c);
		cout<<"Delta = "<<D<<"."<<endl;
		cout<<"Pierwiastek z delty = "<<sqrt(D)<<"."<<endl;	
		w1= (-b)/(2*a);
		w2= (-D)/(4*a);
		cout<<"Wspolrzedne wierzcholka wynosza: ("<<w1<<", "<<w2<<")."<<endl;
		
		if(D>0)
		{
			x1= ((-b)-(sqrt(D)))/(2*a);
			x2= ((-b)+(sqrt(D)))/(2*a);
			
			cout<<"Rownanie posiada dwa miejsca zerowe: x1 = "<<x1<<", x2 = "<<x2<<"."<<endl<<endl;
		}
		else if(D==0)
		{
			x1= (-b)/(2*a);
			
			cout<<"Rownanie posiada jedno miejsce zerowe x0 = "<<x1<<"."<<endl<<endl;
		}
		else if(D<0)
		{
			cout<<"Rownanie nie posiada miejsc zerowych."<<endl<<endl;
		}
	}


	system("pause");
	
	return 0;
}
