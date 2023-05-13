#include <iostream>
#include <cstdlib>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

    int a, b, c;
   
    cout<<"Dodawnie i odekmowanie liczb."<<endl;
    
    cout<<"Podaj pierwsza liczbe: ";
    cin>>a;
    cout<<"Podaj droga liczbe: ";
    cin>>b;
    
    cout<<"Dodawanie: "<<endl;
    cout<<a<<" + "<<b<<" = "<<a+b<<endl;
    
    c = b+a;
    
    cout<<b<<" + "<<a<<" = "<<c<<endl;
    
    cout<<"Odejmowanie: "<<endl;
    cout<<a<<" - "<<b<<" = "<<a-b<<endl;
    
    c = b-a;
    
    cout<<b<<" - "<<a<<" = "<<c<<endl;
   
   cout<<"Pole trojkata."<<endl;
   
   int p, h;
   
   cout<<"Podaj podstawe trojkata: ";
   cin>>p;
   
   cout<<"Podaj wysokosc: ";
   cin>>h;
   
   int w;
   
   w = (p*h)/2;
   
   cout<<"Pole trojkata = "<<w<<endl;
   
    system("pause");

	return 0;
}
