#include <iostream>
#include <cstdlib>

using namespace std;

float pln_na_dolary(float pln);
float dolary_na_pln(float dolary);

int main() {
	
    int w=0;
    float k=0;
    int zp=0;

	cout<<"Program przelicza Dolary na Pln lub na odwrot."<<endl;
    cout<<"1 - Dolary na Pln."<<endl;
    cout<<"2 - Pln na Dolary."<<endl;
    cout<<"Wybru dokonujesz podajac odpowiednia liczbe."<<endl;
   
    do{
        if(zp == 1){
            cout<<"Podaj ponownie swoj wybu."<<endl;
        }
        
        cin>>w; 

        zp=1;
    }
    while (w != 1 && w != 2);

    switch (w)
    {
    case 1:

        cout<<"Podaj kwote w Dolarach ktora chcesz przeliczyc."<<endl;
        cin>>k;

        cout<<endl;
        cout<<k<<" dolarow = "<<dolary_na_pln(k)<<" pln."<<endl;

        break;

    case 2:

        cout<<"Podaj kwote w Pln ktora chcesz przeliczyc."<<endl;
        cin>>k;

        cout<<endl;
        cout<<k<<" pln = "<<pln_na_dolary(k)<<" dolarow."<<endl;

        break;

    }
    
	
	system("pause");
	return 0;
}

//------------------------------------------------------------

float pln_na_dolary(float pln){

    float p=0;
    p=pln/3.85;

    return p;

}

//------------------------------------------------------------

float dolary_na_pln(float dolary){

    float p=0;
    p=dolary*3.85;

    return p;

}