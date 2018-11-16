#include <cstdlib>
#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main()
{
    int a;
    cin >> a;

	if (a < 0)  { cout << endl; return 0; }

    int i = 0;

    while ( i < a ) {
	cout << pow(i, 3) << ",";
	i++;
    }
    cout << pow(a, 3) << endl;


    return 0;
    
}
