#include <iostream>

#include<cstdlib>

#include<time.h>

#include<stdlib.h>



using namespace std;



int main()

{

   int dado = 0; //il dado e basta.
   
   int dado1 = 0; //variabile a cui assegno il numero del lancio precedente.

   int y = 0; //Numero di volte per cui il numero appare di seguito.

   int lanci = 0; //i lanci lmao

   

   cout << " Questo programma lancia un dado numerose volte, finche' non ottiene cinque num. uguali di seguito.";

   cout << "\n Sotto vedrai riportato il numero di lanci effettuati.\n";

   srand(time(0));

    

   while (y < 4)

      {

        int aux = rand();

        dado = (aux % 6) + 1;

        cout<<" "<<dado<<" ";
        
        if (dado==dado1)
        { 
        	y++;
        }
    	else 
		{
        	y=0;
		} 
		dado = dado1;
        lanci++; 
      } 

      

   cout << "\nLanci effettuati : " << lanci << endl; 


   system("PAUSE"); // ns. comodo!

   return 0;

} // end main()

    
