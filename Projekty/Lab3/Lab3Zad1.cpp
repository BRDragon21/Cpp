#include <iostream>
#include <cstdlib>
#include <windows.h>

using namespace std;

class kasa
{
    private:
        
        bool z;
        int b200, b100, b50, b20, b10;
        int m5, m2, m1;
        int g50, g20, g10, g5, g2, g1;

    public:
        
        kasa(){
            
            z= 1;
            b200=b100=b50=b20=b10=0;
            m5=m2=m1=0;
            g50=g20=g10=g5=g2=g1=0;

        }

        void otw(){
           
            if(z==0)
            {
                return;
            }
            z = 0;
            cout<<"Kasa została otwarta."<<endl;

        }

        void zam(){
           
            if(z==1)
            {
                return;
            }
            z = 1;
            cout<<"Kasa została zamknięta."<<endl;

        }

        void dodb(int i_b200, int i_b100, int i_b50, int i_b20, int i_b10){
            
            if(z==1)
            {
                cout<<"Kasa jest zamknięta."<<endl;
                return;
            }
            
            b200+=i_b200;
            b100+=i_b100;
            b50+=i_b50;
            b20+=i_b20;
            b10+=i_b10;

        }
        
        void dodm(int i_m5, int i_m2, int i_m1){

            if(z==1)
            {
                cout<<"Kasa jest zamknięta."<<endl;
                return;
            }

            m5+=i_m5;
            m2+=i_m2;
            m1+=i_m1;

        }

        void dodg(int i_g50, int i_g20, int i_g10, int i_g5, int i_g2, int i_g1){

            if(z==1)
            {
                cout<<"Kasa jest zamknięta."<<endl;
                return;
            }
            
            g50+=i_g50;
            g20+=i_g20;
            g10+=i_g10;
            g5+=i_g5;
            g2+=i_g2;
            g1+=i_g1;

        }

        void odjb(int i_b200, int i_b100, int i_b50, int i_b20, int i_b10){
            
            if(z==1)
            {
                cout<<"Kasa jest zamknięta."<<endl;
                return;
            }
            
            b200-=i_b200;
            b100-=i_b100;
            b50-=i_b50;
            b20-=i_b20;
            b10-=i_b10;

        }
        
        void odjm(int i_m5, int i_m2, int i_m1){

            if(z==1)
            {
                cout<<"Kasa jest zamknięta."<<endl;
                return;
            }

            m5-=i_m5;
            m2-=i_m2;
            m1-=i_m1;

        }

        void odjg(int i_g50, int i_g20, int i_g10, int i_g5, int i_g2, int i_g1){

            if(z==1)
            {
                cout<<"Kasa jest zamknięta."<<endl;
                return;
            }
            
            g50-=i_g50;
            g20-=i_g20;
            g10-=i_g10;
            g5-=i_g5;
            g2-=i_g2;
            g1-=i_g1;

        }

        void wys(){

            if(z==1)
            {
                cout<<"Kasa jest zamknięta."<<endl;
                return;
            }

            cout<<"W kasie znajdują się: "<<endl;
            cout<<"-banknoty: "<<b200<<" x 200zł, "<<b100<<" x 100zł, "
                <<b50<<" x 50zł, "<<b20<<" x 20zł, "<<b10<<" x 10zł. "<<endl;
            cout<<"-monety zł: "<<m5<<" x 5zł, "<<m2<<" x 2zł, "<<m1<<" x 1zł. "<<endl;
            cout<<"-monety gr: "<<g50<<" x 50gr, "<<g20<<" x 20gr, "<<g10<<" x 10gr, "
                <<g5<<" x 5gr, "<<g2<<" x 2gr, "<<g1<<" x 1gr. "<<endl;

        }

        void war_p(){

            if(z==1)
            {
                cout<<"Kasa jest zamknięta."<<endl;
                return;
            }
            
            float w=0;
            float zl=0;
            float gr=0;

            zl=(b200*200)+(b100*100)+(b50*50)+(b20*20)+(b10*10)+(m5*5)+(m2*2)+(m1);
            gr=(g50*0.5)+(g20*0.2)+(g10*0.1)+(g5*0.05)+(g2*0.02)+(g1*0.01);
            w=zl+gr;

            cout<<"Wartość pieniędzy w kasie wynosi "<<w<<"zł"<<endl;
        }

};

//-----------------------------------------------------------------------------

int main() {
	
    SetConsoleOutputCP(65001);
	
    cout<<endl;
    kasa zaw;

    int p=0;
    bool o=0;

    do
    {
     
    
    cout<<"Co chcesz zrobić z kasą: "<<endl;
    cout<<"1.Otworzyć ją."<<endl;
    cout<<"2.Dodać pieniądze do kasy."<<endl;
    cout<<"3.Wyjąć pieniądze z kasy."<<endl;
    cout<<"4.Wyświetlić zawartość kasy."<<endl;
    cout<<"5.Wyświetlić wartość pieniędzy znajdujących się w kasie."<<endl;
    cout<<"6.Zamknąć ją."<<endl;
    cout<<"7.Zakończyć operacje z kasą."<<endl;
    cin>>p;
    
    int sb200, sb100, sb50, sb20, sb10;
    int sm5, sm2, sm1;
    int sg50, sg20, sg10, sg5, sg2, sg1;
    
    switch (p)
    {
    case 1:
        
        cout<<endl;
        zaw.otw();
        o=1;
        cout<<endl;

        break;
    
    case 2:

        if(o==0)
        {
            cout<<endl;
            cout<<"Kasa jest zamknięta."<<endl;
            cout<<endl;
            break;
        }

        cout<<endl;
        cout<<"Ile chcesz dodać: "<<endl;
        cout<<"Banknotów o nominale 200zł: ";
        cin>>sb200;
        cout<<"Banknotów o nominale 100zł: ";
        cin>>sb100;
        cout<<"Banknotów o nominale 50zł: ";
        cin>>sb50;
        cout<<"Banknotów o nominale 20zł: ";
        cin>>sb20;
        cout<<"Banknotów o nominale 10zł: ";
        cin>>sb10;

        zaw.dodb(sb200, sb100, sb50, sb20, sb10);

        cout<<"Monet o nominale 5zł: ";
        cin>>sm5;
        cout<<"Monet o nominale 2zł: ";
        cin>>sm2;
        cout<<"Monet o nominale 1zł: ";
        cin>>sm1;
        
        zaw.dodm(sm5, sm2, sm1);

        cout<<"Monet o nominale 50gr: ";
        cin>>sg50;
        cout<<"Monet o nominale 20gr: ";
        cin>>sg20;
        cout<<"Monet o nominale 10gr: ";
        cin>>sg10;
        cout<<"Monet o nominale 5gr: ";
        cin>>sg5;
        cout<<"Monet o nominale 2gr: ";
        cin>>sg2;
        cout<<"Monet o nominale 1gr: ";
        cin>>sg1;

        zaw.dodg(sg50, sg20, sg10, sg5, sg2, sg1);
        cout<<endl;
        
        break;
    
    case 3:

        if(o==0)
        {   
            cout<<endl;
            cout<<"Kasa jest zamknięta."<<endl;
            cout<<endl;
            break;
        }

        cout<<endl;
        cout<<"Ile chcesz wybrać: "<<endl;
        cout<<"Banknotów o nominale 200zł: ";
        cin>>sb200;
        cout<<"Banknotów o nominale 100zł: ";
        cin>>sb100;
        cout<<"Banknotów o nominale 50zł: ";
        cin>>sb50;
        cout<<"Banknotów o nominale 20zł: ";
        cin>>sb20;
        cout<<"Banknotów o nominale 10zł: ";
        cin>>sb10;

        zaw.odjb(sb200, sb100, sb50, sb20, sb10);

        cout<<"Monet o nominale 5zł: ";
        cin>>sm5;
        cout<<"Monet o nominale 2zł: ";
        cin>>sm2;
        cout<<"Monet o nominale 1zł: ";
        cin>>sm1;
        
        zaw.odjm(sm5, sm2, sm1);

        cout<<"Monet o nominale 50gr: ";
        cin>>sg50;
        cout<<"Monet o nominale 20gr: ";
        cin>>sg20;
        cout<<"Monet o nominale 10gr: ";
        cin>>sg10;
        cout<<"Monet o nominale 5gr: ";
        cin>>sg5;
        cout<<"Monet o nominale 2gr: ";
        cin>>sg2;
        cout<<"Monet o nominale 1gr: ";
        cin>>sg1;

        zaw.odjg(sg50, sg20, sg10, sg5, sg2, sg1);
        cout<<endl;
        
        break;
    
    case 4:

        cout<<endl;
        zaw.wys();
        cout<<endl;
        
        break;
    
    case 5:
        
        cout<<endl;
        zaw.war_p();
        cout<<endl;

        break;
    
    case 6:
        
        cout<<endl;
        zaw.zam();
        o=0;
        cout<<endl;

        break;
    
    }
	
    } while (p != 7);
	
    system("pause");
	return 0;
}