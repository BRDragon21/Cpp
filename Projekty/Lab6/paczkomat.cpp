#include "paczkomat.h"

bool skrzynka::wloz_paczke(float w, float s)
{

    if(czy_wol==0)
    {
        cout<<endl<<"Skrzynka jest zajęta."<<endl<<endl;

        return false;
    }
    else if(czy_wol==1)
    {
        if(w<=wys && s<=szer)
        {
            cout<<endl<<"Skrzynka jest wolna oraz paczka się mieści."<<endl<<endl;

            return true;
        }
        else
        {
            cout<<endl<<"Skrzynka jest wolna, ale paczka się nie mieści."<<endl<<endl;

            return false;
        }
    }
    return false;
}

//--------------------------------------------------------------------------------------------------

void paczkomat::los_skrzy()
{
    cout<<endl<<"Ustalanie rozmiaru skrzynek w paczkomacie...";
        for(int i=0; i<16; i++)
        {
            Sleep(500);                    // Jeżeli wylosuje się liczba 1 to oznacza to to że skrzynka jest mała czyli ma wymiary 10x10
            srand(time(NULL));              // Jeżeli wylosuje się liczba 2 to oznacza to to że skrzynka jest średnia czyli ma wymiary 25x25
            skrzy[i] = rand() % 3+1;        // Jeżeli wylosuje się liczba 3 to oznacza to to że skrzynka jest duża czyli ma wymiary 50x50
            Sleep(500); 
        }

        for(int i=0; i<16; i++)
        {
            Sleep(250);
            srand(time(NULL));
            dos_skrzy[i] = rand() % 2;
            if(dos_skrzy[i]==0)
            {
                skrzy_kod[i]=999999;
            }
            Sleep(250); 
        }  
    cout<<" rozmiar skrzynek został ustalony."<<endl<<endl;

    
}

//--------------------------------------------------------------------------------------------------

void paczkomat::wyp_skrzy()
{
     for(int i=0; i<16; i++)
        {
            cout<<"Rozmiar skrzynki "<<i+1<<" to ";

            if(skrzy[i]==1)
            {
                cout<<"mała (10x10cm)."<<endl;
            }
            else if(skrzy[i]==2)
            {
                cout<<"średnia (25x25cm)."<<endl;
            }
            else if(skrzy[i]==3)
            {
                cout<<"duża (50x50cm)."<<endl;
            }

            cout<<"Skrzynka "<<i+1<<" jest obecnie ";
            
            if(dos_skrzy[i]==0)
            {
                cout<<"zajęta."<<endl<<endl;
            }
            else if(dos_skrzy[i]==1)
            {
                cout<<"wolna."<<endl<<endl;
            }
        }  
}

//--------------------------------------------------------------------------------------------------

void paczkomat::wloz_paczka(int ID_skrzy, float wys_p, float szer_p)
{   
    skrzynka abc;

    bool do_skry = dos_skrzy[ID_skrzy];
    abc.dos_skrzy = do_skry;
    bool po_wy_op;
    
    if(skrzy[ID_skrzy]==1)
    {
        abc.skrzynia(10,10);
    }
    else if(skrzy[ID_skrzy]==2)
    {
        abc.skrzynia(25,25);
    }
    else if(skrzy[ID_skrzy]==3)
    {
        abc.skrzynia(50,50);
    }

    po_wy_op = abc.wloz_paczke(wys_p, szer_p);

    if(po_wy_op==1)
    {
        dos_skrzy[ID_skrzy] = 0;
        cout<<endl<<"Paczka została włożona do skrytki."<<endl;
        cout<<"Generowanie kodu do skrzynki...";

        for(int i=0; i<6; i++)
        {
            Sleep(250);
            srand(time(NULL));
            kod[i] = rand() % 10;
        
            if(i==0 && kod[i]==0)
            {
                srand(time(NULL));
                kod[i] = rand() % 9+1;
            }
         }   

        string s_kod;

        for(int i=0; i<6; i++)
        {
            string z_k;
            z_k = to_string(kod[i]); 
            s_kod = s_kod+z_k;
        }

        stringstream intValue(s_kod);
	    intValue >> skrzy_kod[ID_skrzy];
        cout<<" kod to: "<<skrzy_kod[ID_skrzy]<<endl;
    }
    else if(po_wy_op==0)
    {
        cout<<"Podaj inne ID skrzynki."<<endl;
        cin>>ID_skrzy;

        wloz_paczka(ID_skrzy-1, wys_p, szer_p);
    }

}

//--------------------------------------------------------------------------------------------------

void paczkomat::wyjm_paczka(int ID_skrzynka, int kod_skrzy)
{
    if(dos_skrzy[ID_skrzynka]==1)
    {
        cout<<endl<<"Skrzynka jest pusta."<<endl;
        cout<<"Podaj inne ID skrzynki: ";                   //DI skrzynek które zostały wylosowane zamknięte to 999999
        cin>>ID_skrzynka;

        paczkomat::wyjm_paczka(ID_skrzynka-1, kod_skrzy);
    }
    else if(skrzy_kod[ID_skrzynka]!=kod_skrzy && dos_skrzy[ID_skrzynka]==0)
    {
        cout<<endl<<"Kod do skrzynki jest nieprawidłowy."<<endl;
        cout<<"Podaj poprawny kod: ";
        cin>>kod_skrzy;

         paczkomat::wyjm_paczka(ID_skrzynka, kod_skrzy);
    }
    else if(skrzy_kod[ID_skrzynka]==kod_skrzy && dos_skrzy[ID_skrzynka]==0)
    {
        cout<<endl<<"Wszystkie dane się zgadzają."<<endl;
        cout<<"Paczka została wyjęta."<<endl;

        dos_skrzy[ID_skrzynka]=1;
    }
}

//--------------------------------------------------------------------------------------------------

void paczkomat::interfejs()
{
	float w,s;
	int id,k;
	int o;

	cout<<endl<<"Jaką operacje chcesz wykonać?"<<endl;
	cout<<"1.Włożenie paczki do skrzynki."<<endl;
	cout<<"2.Wyjęcie paczki ze skrytki."<<endl;
	cout<<"3.Odejście od paczkomatu (koniec programu)."<<endl;
	cout<<"Podaj numer przypisany do operacji którą chcesz wykonać: ";
	cin>>o;

	switch (o)
	{
		case 1:

			cout<<endl<<"Włożenie paczki do skrzynki."<<endl<<endl;

            cout<<"Maksymalny tozmiar paszki to 50x50cm."<<endl<<endl;
			
			cout<<"Podaj wysokość paczki: ";
			cin>>w;
			cout<<"Podaj szerokość paczki: ";
			cin>>s;
			cout<<"Podaj ID skrzynki w której chcesz umieścić paczkę: ";
			cin>>id;

			wloz_paczka(id-1, w, s);

			interfejs();
		
		break;

		case 2:

			cout<<endl<<"Wyjęcie paczki ze skrytki."<<endl<<endl;

			cout<<"Podaj ID skrzynki: ";
			cin>>id;
			cout<<"Podaj kod do skrzynki: ";
			cin>>k;

			wyjm_paczka(id-1, k);

			interfejs();

		break;

		case 3:

			cout<<endl<<"Odejście od paczkomatu (koniec programu)."<<endl<<endl;

		break;
	}

}