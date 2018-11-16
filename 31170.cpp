#include <cstdlib>
#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main()
{

	int x, a, b, c, d;

	cin >> x >> a >> b >> c >> d;

	if ((( x >= a ) && ( x <= b)) || (( x >= c ) && ( x <= d))) {
		cout << "si" << endl;
	} else {
		cout << "no" << endl;
	}
    

    return 0;
    
}
