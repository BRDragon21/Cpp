#include <iostream>
#include <cstdlib> //Dla system("pause")

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
    
    cout<<"\n\tPrzykladowy tekst\n"<<endl;
    int liczba;
    
    cout<<"Podaj liczbe: ";
    cin>>liczba;
    
    cout<<endl;
    cout<<"Podales liczbe: "<<liczba<<endl;
    
    system("pause");
	
    return 0;
}
