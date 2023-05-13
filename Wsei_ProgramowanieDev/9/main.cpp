#include <iostream>
#include <cstdlib>
#include <windows.h>

using namespace std;

int main() {

	int i = 10;
	cout << "\n\n";

	while (i > 0) {
 	   cout << "\tODLICZANIE " << ((i < 10) ? " " : "") << i;
	    Sleep(1000);
	    cout << "\r";
	    i--;
    }

	system("cls");
	cout << "\n\n\tBUUM!!!\n";

	cout << endl;
	system("pause");

	return 0;
}
