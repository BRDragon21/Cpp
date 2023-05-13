#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <string>
#include <sstream>
#include <iomanip>
#include <fstream>

using namespace std;

float CelToKel (float t_Cel);
float CelToFahr (float t_Cel);

int main() {
	
    SetConsoleOutputCP(65001);
	
    float t, m, s;
    string tem;

    cout<<"Jaka jest minimalna wartoś zakresu temperatur który chcesz wyświetlić?"<<endl;
    cin>>tem;
    cout<<endl;
    
    cout<<"Jaka jest maksymalna wartoś zakresu temperatur który chcesz wyświetlić?"<<endl;
    cin>>m;
    cout<<endl;

    cout<<"Co ile stopni jest wykonywany skok?"<<endl;
    cin>>s;
    cout<<endl;

    stringstream intValue(tem);
	intValue >> t;

    float c;

    if(tem[0]=='-'){
        
        tem[0] = ' ';
        stringstream intValue(tem);
	    intValue >> c;

        float w;
        w=c+m;

        if(s>(w/2)){
            s=w/2;
            cout<<"Wartość skoku była za duża, więc została ustawiona na "<<s<<endl<<endl;
            
        }
    }
    else
    {
        stringstream intValue(tem);
	    intValue >> c;

        float w;
        w=c+m;

        if(s>(w/2)){
            s=w/2;
            cout<<"Wartość skoku była za duża, więc została ustawiona na "<<s<<endl<<endl;
            
        }
    }

    cout << "\tT[st.C]  T[K]       T[st.F]" << endl;
    cout.setf(ios::fixed | ios::right);

    for(; t<=m; ){

        cout << "\t"
        << setw(3) << setprecision(0) << t << "    "
        << setw(8) << setprecision(2) << CelToKel(t) << "    "
        << setw(6) << setprecision(1) << CelToFahr(t) << endl; 

        t=t+s;
    }

    t=-30;

    string n;

    cout<<endl<<"Jak chcesz nazwać plik do którego zapiszesz dane?"<<endl;
    cin>>n;

    ofstream plik(n+".txt");

    plik.setf(ios::fixed);
    
    plik << "\tT[st.C]  T[K]       T[st.F]" << endl;

    for(; t<=m; ){

        plik << "\t"
        << setw(3) << setprecision(0) << t << "    "
        << setw(8) << setprecision(2) << CelToKel(t) << "    "
        << setw(6) << setprecision(1) << CelToFahr(t) << endl; 

        t=t+s;
    }
    
    plik.close();
	
	system("pause");
	return 0;
}

//------------------------------------------------------------------------

float CelToKel (float t_Cel){

    float t_Kel=0;

    t_Kel=(t_Cel)+273.15;

    return t_Kel;
}

//------------------------------------------------------------------------

float CelToFahr (float t_Cel){

    float t_Fahr=0;

    t_Fahr=(1.8*(t_Cel))+32;

    return t_Fahr;
}

//------------------------------------------------------------------------