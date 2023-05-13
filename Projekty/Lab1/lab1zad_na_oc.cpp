#include <iostream>
#include <cstdlib>
#include <windows.h>

using namespace std;

float kalkulator(char o,float z,float w);
char znak();
char pn();
int main();

int t=0;

int main() {
	
    SetConsoleOutputCP(65001);
	
    
    if(t==0)
    {
        cout<<"Kalkulator"<<endl<<endl;
        t++;
    }
    

    float a, b;
    char o;


    o=znak();

    cout<<"Podaj pierwszą liczbę: ";
    cin>>a;

    cout<<"Podaj drógą liczbę: ";
    cin>>b;

    if(o=='/' && a==0)
    {
        do
        {
            cout<<endl<<"Przy dzieleniu wartość nie może wynosić 0."<<endl;
            cout<<"Podaj pierwszą liczbę: ";
            cin>>a;
        } while (a==0);
        
    }

    if(o=='/' && b==0)
    {
        do
        {
            cout<<endl<<"Przy dzieleniu wartość nie może wynosić 0."<<endl;
            cout<<"Podaj drógą liczbę: ";
            cin>>b;
        } while (b==0);
        
    }

    kalkulator(o,a,b);

    o=pn();

    if(o=='t' || o=='T')
    {
        main();
    }
    else
    {
        cout<<endl;
	    system("pause");
	    return 0;
    }

	
}

//-------------------------------------------------------------------

float kalkulator(char o,float z1,float z2){

    float w;

    switch (o)
    {
        case '+':
        
        w=z1+z2;
        cout<<endl<<z1<<"+"<<z2<<"="<<w<<endl;

        break;

        case '-':

        w=z1-z2;
        cout<<endl<<z1<<"-"<<z2<<"="<<w<<endl;

        break;
        
        case '*':

        w=z1*z2;
        cout<<endl<<z1<<"*"<<z2<<"="<<w<<endl;

        break;

        case '/':

        w=z1/z2;
        cout<<endl<<z1<<"/"<<z2<<"="<<w<<endl;

        break;
    }

    return w;
}

//-------------------------------------------------------------------

char znak(){
    
    char o;
    cout<<"Podaj jaką operację chcesz wykonać: ";
    cin>>o;
    
    if(o!='-' && o!='+' && o!='*' && o!='/')
    {
        znak();
    }
    else
    {
        return o;
    }
    
     return 0;
}

//-------------------------------------------------------------------

char pn(){

    char o;
    cout<<endl<<"Czy chcesz wykonać kolejne obliczenia?"<<endl;
    cout<<"(T/N): ";
    cin>>o;
    cout<<endl;

    if(o=='t' || o=='T' || o=='n' || o=='N')
    {
        return o;
    }
    else
    {
        pn();
    }
    
    return 0;
}