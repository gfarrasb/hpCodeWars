#include <cstdlib>
#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main()
{
    int a;
    cin >> a;

    int i = 0;

    while ( i < a ) {

		int c = 0;
		for ( c = 0 ; c <= i ; c++ ) {
				cout << "*";	
		}
		cout << endl;
	
	i++;
    }

    i = a-1;
    while ( i > 0 ) {

		int c = 0;
		for ( c = 0 ; c < i ; c++ ) {
				cout << "*";	
		}
		cout << endl;
	
	i--;
    }

	

    	


    return 0;
    
}
