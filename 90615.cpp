#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;


int main()
{
    int a, b, c;
	 cin >> a >> b >> c;

    if (a > b) {
		if (a > c) {
			cout << a << endl;
		}

		if (c > a) {
			cout << c << endl;
		}
	}

    if (b > a) {
		if (b > c) {
			cout << b << endl;
		}

		if (c > b) {
			cout << c << endl;
		}
    }

    
            
    return 0;
    
}
