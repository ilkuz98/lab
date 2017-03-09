#include"header2.h"
#include <ctime>
#include <stdlib.h>

void hak(){

  cout << "Randomise of numbers!" << endl;
const int size = 52; int iii; int pom; int y;
	srand(time(0));
	int mass[size] = {1,2,3,4,5,6,7,8,9,10,11,12,13,1,2,3,4,5,6,7,8,9,10,11,12,13,1,2,3,4,5,6,7,8,9,10,11,12,13,1,2,3,4,5,6,7,8,9,10,11,12,13};
	for (iii=0; iii<size; iii++)
	{
	   y = rand() % size;
  		pom = mass[iii];
  		mass[iii] = mass[y];
  		mass[y] = pom;
	}
for (iii=0; iii<size-40;iii++)
	{
		cout << iii+1 << ")" << mass[iii] << endl;
	}
}
