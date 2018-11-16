#include <cstdlib>
#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int mcd ( int a, int b ) {

	if ( b == 0 ) { 

		return a;

	} else {

		return mcd ( b , a%b );

	}

        

}

int main()
{
    int a, b;

    cin >> a >> b;

     cout << "El mcd de " << a << " i " << b << " es " << mcd ( a , b ) << "." << endl;


    return 0;
    
}
