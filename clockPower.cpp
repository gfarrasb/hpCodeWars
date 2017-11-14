/*
 * 	Solució al problema ClockPower http://www.hpcodewars.org/past/cw17/problems/Prob03--ClockPower.pdf
 * 	Gerard Farràs (gerard.farras@escolaarrels.com)
 */


#include <sstream>
#include <iostream>
#include <string>

using namespace std;

int main () {

	
	int numlinies;
	cin >> numlinies;		
	
	int mili= 0;
	string minuts, hores;
	
	for ( int i=0;i<numlinies;i++ ) {
	
	      string linia;
	      cin >> linia;
	      
	      hores =  linia.substr( 0, linia.find(":"));
	      minuts  =  linia.substr( linia.find(":")+1, linia.length());
	      
	      
	      int h =  stoi( hores );

	      if ( h==1 ) {  mili = mili + 2*15; }
	      if ( h==2 ) {  mili = mili + 5*15; }
	      if ( h==3 ) {  mili = mili + 5*15; }
	      if ( h==4 ) {  mili = mili + 4*15; }
	      if ( h==5 ) {  mili = mili + 5*15; }
	      if ( h==6 ) {  mili = mili + 6*15; }
	      if ( h==7 ) {  mili = mili + 3*15; }
	      if ( h==8 ) {  mili = mili + 7*15; }
	      if ( h==9 ) {  mili = mili + 6*15; }
	      if ( h==10 ) {  mili = mili + 8*15; }
	      if ( h==11 ) {  mili = mili + 4*15; }
	      if ( h==12 ) {  mili = mili + 7*15; }
	      
	      /* fer el mateix amb els minuts serà molt pesat, per tant...*/
	
	int m =  stoi( minuts );
	int fm = m / 10;
	
	      if ( fm==0 ) {  mili = mili + 6*15; }
	      if ( fm==1 ) {  mili = mili + 2*15; }
	      if ( fm==2 ) {  mili = mili + 5*15; }
	      if ( fm==3 ) {  mili = mili + 5*15; }
	      if ( fm==4 ) {  mili = mili + 4*15; }
	      if ( fm==5 ) {  mili = mili + 5*15; }
	      if ( fm==6 ) {  mili = mili + 6*15; }
	      if ( fm==7 ) {  mili = mili + 3*15; }
	      if ( fm==8 ) {  mili = mili + 7*15; }
	      if ( fm==9 ) {  mili = mili + 6*15; }
	      if ( fm==10 ) {  mili = mili + 8*15; }
	      if ( fm==11 ) {  mili = mili + 4*15; }
	      if ( fm==12 ) {  mili = mili + 7*15; }
	      
	int mm = m % 10;
	
	      if ( mm==0 ) {  mili = mili + 6*15; }
	      if ( mm==1 ) {  mili = mili + 2*15; }
	      if ( mm==2 ) {  mili = mili + 5*15; }
	      if ( mm==3 ) {  mili = mili + 5*15; }
	      if ( mm==4 ) {  mili = mili + 4*15; }
	      if ( mm==5 ) {  mili = mili + 5*15; }
	      if ( mm==6 ) {  mili = mili + 6*15; }
	      if ( mm==7 ) {  mili = mili + 3*15; }
	      if ( mm==8 ) {  mili = mili + 7*15; }
	      if ( mm==9 ) {  mili = mili + 6*15; }
	      if ( mm==10 ) {  mili = mili + 8*15; }
	      if ( mm==11 ) {  mili = mili + 4*15; }
	      if ( mm==12 ) {  mili = mili + 7*15; }
	

	mili = mili + 20;
	cout << mili << " milliamps" << endl;
	mili = 0;
	      
	}
	
	




}
