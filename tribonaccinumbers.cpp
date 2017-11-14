#include <string.h>
#include <iostream>

using namespace std;

int main() {

	int n;

	int tribo[300];

	tribo[0]=0;
	tribo[1]=1;
	tribo[2]=1;
	
	for ( int jere=3; jere <= 30; jere++ ) {
		tribo[jere] = tribo[jere-1] + tribo[jere-2] + tribo[jere-3];
	}

	do {
	
		cin >> n;
	
		if ( n != -1 ) {
				cout << tribo[n] << endl;
		}

	} while ( n != -1 );
	





}
