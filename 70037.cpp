#include <cstdlib>
#include <iostream>
#include <string.h>

using namespace std;


int main()
{
    float a, b;

    cin >> a >> b;

    if ( b == 0) {
		cout << "divisio per zero" << endl;
		return 0;

    }

    cout.setf(ios::fixed );
    cout.precision(3);

    cout << a/b << " " << (int(a)) / (int(b)) << " " << int(a) % int(b) << endl;

    return 0;
    
}
