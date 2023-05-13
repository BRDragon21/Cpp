#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;


int main() {
	
	cp:
	cout<<"Kalkulator kola i jego wycinkow."<<endl<<endl;
	
	double P, Pw, l, O, r, a;
	string w1, w2, pu;
	

	cout<<"Obliczamy pole i opcjonalnie wycinek (p) czy obwod i opcjonalne luk (o)?"<<endl;
	cout<<"P/O ";
	cin>>w1;
	
	if(w1 == "P" || w1 == "p" || w1 == "pole" || w1 == "Pole"){
		
		cout<<endl;
		cout<<"Podaj r: ";
		cin>>r;
		if(r <= 0)
		{
			goto nd;
		}
		cout<<endl;
		cout<<"r = "<<r<<endl;
		P=M_PI*(r*r);
		cout<<"Pole wynowi "<<P<<endl<<endl;
		
		cout<<"Czy chcesz wyliczyc wycinek tego kola?"<<endl;
		cout<<"T/N ";
		cin>>w2;
		
		if(w2 == "T" || w2 == "t" || w2 == "tak" || w2 == "Tak")
		{
			cout<<endl;
			cout<<"Podaj alfe konta w wycinku: ";
			cin>>a;
			if(a <= 0)
			{
				goto nd;
			}
			cout<<"Alfa = "<<a<<endl;
			Pw=(a/360)*P;
			cout<<endl;
			cout<<"Pole wycinka wynosi "<<Pw<<endl<<endl;
			
			goto pup;
		}
		else if(w2 == "N" || w2 == "n" || w2 == "nie" || w2 == "Nie")
		{
			goto pup;
		}
		else
		{
			goto nd;
		}
		
	}
	else if(w1 == "O" || w1 == "o" || w1 == "obwod" || w1 == "Obwod"){
		
		cout<<endl;
		cout<<"Podaj r: ";
		cin>>r;
		if(r <= 0)
		{
			goto nd;
		}
		cout<<endl;
		cout<<"r = "<<r<<endl;
		O=2*M_PI*r;
		cout<<"Obwod wynowi "<<O<<endl<<endl;
		
		cout<<"Czy chcesz wyliczyc luk tego kola?"<<endl;
		cout<<"T/N ";
		cin>>w2;
		
		if(w2 == "T" || w2 == "t" || w2 == "tak" || w2 == "Tak")
		{
			cout<<endl;
			cout<<"Podaj alfe konta w wycinku: ";
			cin>>a;
			if(a <= 0)
			{
				goto nd;
			}
			cout<<"Alfa = "<<a<<endl;
			l=(a/360)*O;
			cout<<endl;
			cout<<"Dlugosc luku wynosi "<<l<<endl<<endl;
			
			goto pup;
		}
		else if(w2 == "N" || w2 == "n" || w2 == "nie" || w2 == "Nie")
		{
			goto pup;
		}
		else
		{
			goto nd;
		}
		
	}
	else {
		
		nd:
		cout<<"Podane dane sa nieprawidlowe."<<endl;
		pup:
		cout<<"Czy chcesz ponownie uruchomic program?"<<endl;
		cout<<"T/N: ";
		cin>>pu;
		
		if(pu == "T" || pu == "t" || pu == "tak" || w1 == "Tak")
		{
			cout<<endl<<endl;
			goto cp;
		}
		
	}
	
	cout<<endl;
	system("pause");

	return 0;
}
