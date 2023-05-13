#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

	int p;
	pp:
	cout<<"Wybierz program podajac odpowiednia liczbe: "<<endl;
	cout<<"[1] \"Kukulka\" "<<endl;
	cout<<"[2] \"Ranking gwiazdkowy\" "<<endl;
	cout<<"Podaj liczbe 1 lub 2: ";
	cin>>p;

	int i=0;
	
	switch(p){

	case 1:
	
		int l; 
		cout<<"Program \"kukulka\""<<endl<<endl;
		cout<<"Podaj liczbe: ";
		cin >> l;
	
	
		while ( i < l ) {
	
			cout << endl << i + 1 <<": Ku-kuuu!";
	
			i++;
		}
		
	break;

	case 2:
		
		int o;
		cout<<"Program \"Ranking gwiazdkowy\""<<endl<<endl;
		cout<<"Twoja ocena (1-5): "; 
		cin>>o;	
	
		cout<<endl;
		cout <<"Oto przyznane gwiazdki: ";
	

		do{
	
			cout<<"*";
	
			i++;
		}while(i<o && i<5);
	
	break;
	
	}
	
	if(p>=3)
	{
		cout<<endl;
		cout<<"Podales nieprawidlowa liczbe."<<endl;
		cout<<"Sprubuj ponownie."<<endl;
		cout<<endl;
		goto pp;
	}

	cout<<endl<<endl;
	system("pause");
	return 0;
}
