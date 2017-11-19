#include <iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()

{
   int dado = 0; //il dado è non tratto
   int y = 0; //Numero di volte per cui il numero appare di seguito.
   int lanci = 0, dado_conc=0; //il dado che conc
   cout << " Questo programma lancia un dado numerose volte, finche' non ottiene cinque num. uguali di seguito.";
   cout << "\n Sotto vedrai riportato il numero di lanci effettuati.\n";
   srand(time(0));
   while (y < 4)

      {
        int aux = rand();
        dado = (aux % 6) + 1;
        cout<<" "<<dado<<" ";
        if (dado==dado_conc)
        { 
        	cout<<endl;
        	dado=0;
        	y++;
        }
    	else if (dado!=dado_conc) 
		{
        	dado_conc=dado;             //dado conc uguale al daddino
        	y=1;
		}
        lanci++; 
      } 
   cout << "\nLanci effettuati : " << lanci << endl; 
   return 0;

} // end sta minchia

    
