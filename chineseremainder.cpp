/*
 * 	Solució al problema Chinese Remainder Thorem http://www.hpcodewars.org/past/cw17/problems/Prob11--ChineseRemainder.pdf
 * 	Gerard Farràs (gerard.farras@escolaarrels.com)
 */


#include <iostream>

using namespace std;

int main () {

	int a, b, c, x, y, z;
	
	do {
	  
	  cin >> a >> b >> c >> x >> y >> z;
	  
	  for ( int i = 1 ; i<=a*b*c; i++ ) {
	    
	      if (( i % a == x ) && ( i % b == y ) && ( i % c == z )) cout << i << endl;
	    
	  }

	  
	} while (( a != -1 ) &&  ( b != -1 ) && ( c != -1 ) && ( x != -1 ) &&  ( y != -1 ) && ( z != -1 ));

return 0;	      
}
	
	



