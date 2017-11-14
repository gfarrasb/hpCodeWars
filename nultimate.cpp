#include <string.h>
#include <iostream>

using namespace std;

int main() {

	string a[1000];
	int num;

	cin >> num;

	do {

	
	cin >> a[0];

	if (( a[0].compare("$") == 0) && (num==0)) return 0;
	
	int i = 0;

	do {
		i++;
		cin >> a[i];

	} while ( a[i].compare("$") != 0 );

	for ( int j=0; j<i; j++) {
		if ( i-num == j) cout << a[j] << endl;
	}
	
	cin >> num;

	} while ( num != 0 ) ;


}
