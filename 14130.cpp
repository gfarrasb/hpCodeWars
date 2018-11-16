#include <cstdlib>
#include <iostream>
#include <string.h>

using namespace std;


int main()
{
    int a;
    cin >> a;

    int dades[a];
  
    for ( int i=0 ; i < a ; i++ ) { 
		cin >> dades[i]; 
    }

    int rep = 0;
    for ( int j = 0; j < a-1 ; j++ ) {
	if (dades[j] == dades[a-1]) rep++;
    }

    cout << rep << endl;

    return 0;
    
}
