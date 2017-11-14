#include <iostream>
#include <iomanip>

using namespace std;

int main ( ) {

	int a;
	int h;

	do {

		cin >> a;
		
		h = ( 60 - a ) / 5;

		if ( a != -1 ) {

				cout << h << ":" << setw(2) << setfill('0') << a << endl;
		}

		

	} while ( a != -1 ) ;


}
