#include <cstdlib>
#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    string a;
    cin >> a;

    int i = a.length();
    for ( i = a.length() ; i >= 0 ; i-- ) {
		cout << a.substr( i,1 ) ;
    }

    cout << endl;

    return 0;
    
}
