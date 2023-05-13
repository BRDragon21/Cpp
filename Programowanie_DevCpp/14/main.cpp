#include <iostream>
#include <cstdlib>

using namespace std;


string Dec2Bin(int dziesietna);
int Bin2Dec(string binarna);

int main() {
	
	cout<<"Kalkulator zmiany liczb binarnych na dziesietne i na odwrot."<<endl<<endl;
	
	int wk;
	cout<<"Ktora operacje chcesz wykonac?"<<endl;
	cout<<"  1. Zmiana liczby dziesietnej na binarna."<<endl;
	cout<<"  2. Zmiana liczby binarnej na dziesietna."<<endl;
	cout<<"  3. Tabela liczb dziesietnych i ich reprezentacja binarna."<<endl;
	cout<<"Wybotu dokonaj podajac liczbe 1, 2 lub 3. "<<endl;
	cin>>wk;
	
	string lb;
	int ld;

	switch(wk){
		
		case 1:	
			cout<<endl<<"Zmiana liczby dziesietnej na binarna."<<endl;
			cout<<"Podaj liczbe dziesietna: ";
			cin>>ld;
			
			lb=Dec2Bin(ld);
			cout<<lb;
		break;
		
		case 2:
			cout<<endl<<"Zmiana liczby binarnej na dziesietna."<<endl;
			cout<<"Podaj liczbe binarna: ";
			cin>>lb;
			
			ld=Bin2Dec(lb);
			cout<<ld;
		break;
		
		case 3:
			cout<<endl<<"Tabela liczb dziesietnych i ich reprezentacja binarna."<<endl;
			int w;
			cout<<"Ile liczb wyswietlic?"<<endl;
			cin>>w;
			cout<<endl<<"Liczba dziesietna\tLiczba binarna"<<endl;
			
			for(int i=0; i<=w; i++)
			{
				cout<<i<<"\t\t\t"<<Dec2Bin(i)<<endl;
			}
		break;
	}
	
	cout<<endl;
	system("pause");
	return 0;
}

//--------------------------------------------------------------

string Dec2Bin(int dziesietna){
    string binarna = "";
    
    while (dziesietna > 0){
        if(dziesietna % 2 == 0) binarna = '0' + binarna;
            else binarna = '1' + binarna;
        dziesietna = dziesietna / 2; 
        }
    return binarna;
}

//--------------------------------------------------------------

int Bin2Dec(string binarna){
    int dziesietna = 0;

    for (int i = 0; i < binarna.size(); i++){
        dziesietna *= 2;
        if (binarna[i] == '1') dziesietna++;
        }
    return dziesietna;
}


