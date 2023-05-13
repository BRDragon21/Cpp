#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>

using namespace std;


int main() {
	
	cout<<"Losowanie lotto."<<endl<<endl;
	
	int l[6];
	
	pp:
	for(int i=0; i<6; i++)
	{
		lo:
		l[i] = rand() % 49 +1;
		
		for(int j=0; j<i; j++)
		{
			if(l[i]==l[j])
			{
				goto lo;
			}
		}
		cout<<l[i]<<" ";
		Sleep(100);
	}
	
	cout<<endl<<endl;
	
	bool p = 0;
	string pu;
	
	ou:
	cout<<"Czy chcesz losowac jeszcze raz?"<<endl;
	cout<<"T/N ";
	cin>>pu;
	cout<<endl;
	
	if(pu=="t" || pu=="T" || pu=="Tak" || pu=="tak" || pu=="Y" || pu=="y" || pu=="Yes" || pu=="yes")
	{
		p=1;
	}
	else if(pu=="n" || pu=="N" || pu=="nie" || pu=="Nie" || pu=="no" || pu=="No")
	{
		p=0;
	}
	else
	{
		cout<<"Podana odpowiedz nie zostala rozpoznana."<<endl;
		cout<<"Sprobuj ponownie."<<endl<<endl;
		goto ou;
	}
	
	if(p==1)
	{
		goto pp;
	}
	else if(p==0)
	{
		system("pause");
		return 0;
	}
		
}

