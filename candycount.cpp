/*
 * 	Solució al problema CandyCount http://www.hpcodewars.org/past/cw17/problems/Prob04--CandyCount.pdf
 * 	Gerard Farràs (gerard.farras@escolaarrels.com)
 */


#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

int main () {

	
	int preu;
	cin >> preu;
	
	int minim=1001;
	
	int numlinies;
	cin >> numlinies;		
	
	string guanyador;
	
	
	for ( int i=0;i<numlinies;i++ ) {
	  
	      int aposta;
	      string nom;
	      cin >> aposta >> nom;
	      
	      if (( abs ( apsta - preu ) ) < minim ) {
		
			    guanyador = nom;			    
			    minim = abs ( aposta - preu );
			    
	      } else if (( abs ( aposta - preu ) ) == minim ) {			  
		
			    guanyador = guanyador + " " + nom;			    
	      }
	            
	}
	
	cout << guanyador << endl;

}
