#include <iostream>
#include <cstdlib>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
    
    cout<<"Program wyswietla wizytowke!"<<endl;
    
    cout<<"*********************************"<<endl;
    cout<<"*\t\t \t\t*"<<endl;
    cout<<"*\tDawid Pawlowski\t\t*"<<endl;
    cout<<"*\tMam 19 lat\t\t*"<<endl;
    cout<<"*\t\t \t\t*"<<endl;
    cout<<"*********************************"<<endl;
    cout<<endl;
    
    int r;
    string i, n;
    
    cout<<"Podaj imie: ";
    cin>>i;
    cout<<endl;
    cout<<"Podaj nazwisko: ";
    cin>>n;
    cout<<endl;
    cout<<"Podaj rok urodzenia: ";
    cin>>r;
    cout<<endl;
    
    cout<<"*********************************"<<endl;
    cout<<"*\t\t \t\t*"<<endl;
    cout<<"*\t"<<i<<" "<<n<<"\t\t*"<<endl;
    cout<<"*\tMa "<<2020 - r<<" lat\t\t*"<<endl;
    cout<<"*\t\t \t\t*"<<endl;
    cout<<"*********************************"<<endl;
    
    system("pause");
	return 0;
}
