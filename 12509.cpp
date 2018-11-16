#include <cstdlib>
#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int factorial (int n) {

	if ( n == 0 ) { 
			return 1;
	} else {
			return n * factorial ( n - 1);
	}

}

int main()
{
    int a;
    cin >> a;

	cout << factorial(a) << endl;

    return 0;
    
}
