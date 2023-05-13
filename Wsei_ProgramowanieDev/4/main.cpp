#include <iostream>
#include <cstdlib>

using namespace std;


int main() {
	
	cout<<"Program sprawdza czy z podanych dlugosci trzech bokow mozna zbudowac trojkat."<<endl<<endl;
	
	int a, b, c, s;
	
	cout<<"Podaj dlugosc odcinka a: ";
	cin>>a;
	cout<<endl;
	
	cout<<"Podaj dlugosc odcinka b: ";
	cin>>b;
	cout<<endl;
	
	cout<<"Podaj dlugosc odcinka c: ";
	cin>>c;
	cout<<endl;
	
	
	if(a<=0 || b<=0 || c<=0)
	{

		cout<<"Jedna lub wiecej podanych liczb jest na minusie lub jest zeram."<<endl;
		cout<<"Bok trojkata nie moze przyjac wartosci na minusie lub rownej zero."<<endl<<endl;
		
	}
	else if(a>b && a>c){
		
		s=b+c;
		
		if(a>s)
		{
			cout<<endl<<"Z bokow o dlugosci "<<a<<", "<<b<<" i "<<c<<", mozna stworcyc trojkat."<<endl<<endl;
		}
		else
		{
			cout<<endl<<"Z bokow o dlugosci "<<a<<", "<<b<<" i "<<c<<", nie mozna stworcyc trojkat."<<endl<<endl;
		}	
	
	}
	else if(b>a && b>c){
		
		s=a+c;
		
		if(b>s)
		{
			cout<<endl<<"Z bokow o dlugosci "<<a<<", "<<b<<" i "<<c<<", mozna stworcyc trojkat."<<endl<<endl;
		}
		else
		{
			cout<<endl<<"Z bokow o dlugosci "<<a<<", "<<b<<" i "<<c<<", nie mozna stworcyc trojkat."<<endl<<endl;
		}	
	
	}
	else if(c>b && c>a){
		
		s=b+a;
		
		if(c>s)
		{
			cout<<endl<<"Z bokow o dlugosci "<<a<<", "<<b<<" i "<<c<<", mozna stworcyc trojkat."<<endl<<endl;
		}
		else
		{
			cout<<endl<<"Z bokow o dlugosci "<<a<<", "<<b<<" i "<<c<<", nie mozna stworcyc trojkat."<<endl<<endl;
		}	
	
	}
	
	string k;
	
	cout<<"Czy chcesz uruchomic program ponownie?"<<endl;
	cout<<"Ponowne uruchomienie programu wiaze sie z potrzeb¹ ponownego wpisania danych."<<endl;
	cout<<"Jezeli chcesz uruchomic program ponownie napisz tak jezeli nie chcesz napisz nie."<<endl;
	cout<<"Karzdy nierozpoznane polecenie wprowadzone z klawiatur zakonczy program."<<endl;
	cout<<"Czy chcesz ponownie utruchomic program t/n ";
	cin>>k;
	
	if(k=="tak" || k=="Tak" || k=="t" || k=="T"){
		
		main();
	
	}
	else if(k=="nie" || k=="Nie" || k=="n" || k=="N"){
		
		return 0;
		
	}
	
	system("pause");

	return 0;
}
