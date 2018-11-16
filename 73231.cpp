#include <cstdlib>
#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int max2(int a, int b) {

	if ( a > b) {
		return a; 
	} else {
		return b;
	}
}

int max4(int a, int b, int c, int d ) {
	
	return max2 ( max2( a, b), max2 ( c, d) );

}

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

	cout << max4(a, b, c, d) << endl;

    return 0;
    
}
