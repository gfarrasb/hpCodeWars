#include <cstdlib>
#include <iostream>

using namespace std;


int main()
{

   int teamCin;
   int pointsCin;
   int teams[1000];
   int maxTeam;
   int maxPointsTeam;

   for (int i=0;i<1000;i++) teams[i]=0;

   do {

	   cin >> teamCin;
	   cin >> pointsCin;
	   teams[teamCin] += pointsCin;

   } while ( (teamCin != 0) && (pointsCin != 0));

   for ( int j=0;j<5;j++ ) {
	   maxTeam = 0;
	   maxPointsTeam = teams[0];

	   for (int k=0;k<1000;k++) {
		   if (teams[k] > maxPointsTeam) {
			   	maxTeam = k;
				maxPointsTeam = teams[k];
		   }
	   }

	   cout << j+1 << " " << maxTeam << " " << maxPointsTeam << endl;
	   teams[maxTeam] = -1;

   }



    return 0;
    
}
