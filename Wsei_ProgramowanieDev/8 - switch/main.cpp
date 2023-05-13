#include <iostream>
#include <cstdlib>
#include <math.h>
#include <windows.h>

using namespace std;


void koniecpro()
{
	
	
	
}


int main() {
	
	
	HANDLE hOut;
	hOut = GetStdHandle( STD_OUTPUT_HANDLE );
	
	
	int bryla;  
	
	startpro:
	cout<<"Kalkulator prostopadlosciana, walca oraz ostroslupa.";
	cout<<"Obliczenia do jakiej bryly chcesz prowadzic?"<<endl;
	cout<<"[1] - Prostopadloscizn"<<endl;
	cout<<"[2] - Walec"<<endl;
	cout<<"[3] - Ostroslup prawidlowy czworokatny"<<endl;
	cout<<"[4] - Stozek"<<endl;
	cout<<"[5] - Kula"<<endl;
	cout<<"[6] - Graniastoslup prawidlowy trojatny."<<endl;
	cout<<"Wybierz liczbe od 1 do 6: ";
	cin>>bryla;
	cout<<endl;
	
	double V, P, a, b, c, Pp, Pb, h, r, H;
	
	switch(bryla){
    
    case 1:
	
	cout<<"Wybrales prostopadloscian."<<endl<<endl;
	cout<<"Podaj dlugosc: "<<endl;
	cout<<"a - ";
	cin>>a;
	cout<<"b - ";
	cin>>b;
	cout<<"c - ";
	cin>>c;
	cout<<endl;
	
	V=a*b*c;
	P=2*(a*b + a*c + b*c);
	
	cout<<"Pole tej bryly wynosi: "<<P<<"."<<endl;
	cout<<"Objetosc tej bryly wynosi: "<<V<<"."<<endl<<endl;

    break;

    case 2:  	
    	    
    cout<<"Wybrales walec."<<endl<<endl;
	cout<<"Podaj dlugosc: "<<endl;
	cout<<"r - ";
	cin>>r;
	cout<<"h - ";
	cin>>h;
	cout<<endl;
	
	V=M_PI*(r*r)*h;
	Pp=M_PI*(r*r);
	Pb=2*M_PI*r*h;
	P=(2*Pp)+Pb;
	
	cout<<"Pole tej bryly wynosi: "<<P<<"."<<endl;
	cout<<"Objetosc tej bryly wynosi: "<<V<<"."<<endl<<endl;

    break;
    
    case 3:
	    
    cout<<"Wybrales ostroslup prawidlowy czworokatny."<<endl<<endl;
	cout<<"Podaj dlugosc: "<<endl;
	cout<<"a - ";
	cin>>a;
	cout<<"h - ";
	cin>>h;
	cout<<"H - ";
	cin>>H;	
	cout<<endl;
	
	Pp=a*a;
	Pb=2*a*h;
	P=2*Pp+Pb;
	V=(Pp*H)/3;
	
	cout<<"Pole tej bryly wynosi: "<<P<<"."<<endl;
	cout<<"Objetosc tej bryly wynosi: "<<V<<"."<<endl<<endl;
    
    break;
    
    case 4:  	
    	    
    cout<<"Wybrales stozek."<<endl<<endl;
	cout<<"Podaj dlugosc: "<<endl;
	cout<<"r - ";
	cin>>r;
	cout<<"h - ";
	cin>>h;
	cout<<"s - ";
	cin>>H;
	cout<<endl;
	
	V=(M_PI*(r*r)*h)/3;
	Pp=M_PI*(r*r);
	Pb=2*M_PI*r*H;
	P=Pp+Pb;
	
	cout<<"Pole tej bryly wynosi: "<<P<<"."<<endl;
	cout<<"Objetosc tej bryly wynosi: "<<V<<"."<<endl<<endl;

    break;
    
    case 5:  	
    	    
    cout<<"Wybrales kule."<<endl<<endl;
	cout<<"Podaj dlugosc: "<<endl;
	cout<<"r - ";
	cin>>r;
	
	V=((M_PI*(r*r*r))*4)/3;
	P=4*(M_PI*(r*r));
	
	cout<<"Pole tej bryly wynosi: "<<P<<"."<<endl;
	cout<<"Objetosc tej bryly wynosi: "<<V<<"."<<endl<<endl;

    break;
    
    case 6:  	
    	    
    cout<<"Wybrales graniastoslup prawidlowy trojkatny."<<endl<<endl;
	cout<<"Podaj dlugosc: "<<endl;
	cout<<"a - ";
	cin>>a;
	cout<<"h - ";
	cin>>h;
	cout<<endl;
		
	Pp=(a*sqrt(3))/2;
	Pb=3*(a*h);
	V=Pp*h;
	P=(2*Pp)+Pb;
	
	cout<<"Pole tej bryly wynosi: "<<P<<"."<<endl;
	cout<<"Objetosc tej bryly wynosi: "<<V<<"."<<endl<<endl;

    break;

    }
    
    if( bryla != 1 && bryla != 2 && bryla != 3 && bryla != 4 && bryla != 5 && bryla != 6){
    	
    	SetConsoleTextAttribute ( hOut, FOREGROUND_RED );
    	cout<<"Podana opcja jest nieprawidlowa."<<endl;
    	SetConsoleTextAttribute ( hOut, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE );
    	cout<<"Wybierz ponownie opcje bryle do obliczen."<<endl;
    	goto startpro;
    	
	}
    
    
    ponur:
    string pu=" ";
    cout<<"Czy chcesz uruchomic program ponownie?"<<endl;
    cout<<"Podaj tak lub nie."<<endl;
    SetConsoleTextAttribute ( hOut, FOREGROUND_GREEN );
    cout<<"t/n ";
    SetConsoleTextAttribute ( hOut, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE );
    cin>>pu;

    
    if(pu != " "){

    
 	   if( pu == "Tak" || pu == "tak" || pu == "T" || pu == "t")
	    {
	    	cout<<endl<<"Program zaraz uruchomi sie podobnie."<<endl<<endl<<endl;
	    	goto startpro;
		}
		else if( pu == "Nie" || pu == "nie" || pu == "N" || pu == "n")
		{
			cout<<endl<<"Program zaraz sie zakonczy."<<endl<<endl;
			system("pause");
			return 0;
		}
  	    else
 	   {
	 	   	cout<<endl<<"Podane zmienne zostalu nierozpoznane ponownie wykonaj wyboru podajac tak lub nie."<<endl<<endl;
	    	goto ponur;
		}

	}
	else{
		SetConsoleTextAttribute ( hOut, FOREGROUND_RED );
		cout<<endl<<endl<<endl;
		cout<<"ERROR"<<endl;
		cout<<"Program napotkal nieznany error ktory spowodowal jego zatrzymanie."<<endl;
		SetConsoleTextAttribute ( hOut, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE );
	}

}

