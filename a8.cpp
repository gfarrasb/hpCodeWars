#include <cstdlib>
#include <iostream>
#include <cmath>
#include <string>


using namespace std;


int main()
{

   int numLines;
   cin >> numLines;
   string nom;
   int cube;

   int emptyCubes = 0;
   int duplicate = 0;
   int employees = 0;
   int arrayCubes[300];

   for (int j = 0; j<300; j++ ) arrayCubes[j]=0;

   for ( int i = 0; i<numLines; i++ ) {

	   cin >> nom >> cube;
	   if (nom == "NA") emptyCubes++;
	   if (cube == 0 ) employees++;
	   arrayCubes[cube]++;

   }

   for ( int z = 0; z < 300; z++) {	
	   if ( arrayCubes[z] > 1) duplicate++;
   }

   cout << "Empty cubes: " <<  emptyCubes << endl;
   cout << "Duplicate Cube Assignments: " << duplicate << endl;
   cout << "Employees without Cube: " <<  employees << endl;

    return 0;
    
}
