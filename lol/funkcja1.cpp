#include "header.h"
#include <cstring>
void hul(){

  cout << "Funkcja 1!!!" << endl;
  char* s; int a,b,c,d;
  a = 1; b = 4; c = 67; d = 88;

    for(int i = 1;i < 11;i++)
{

    s = new char[20];
    strcpy(s, "Downloading: ");
     cout << s << ++i << "0%" << endl;

a++; b++; c++; d++;
}
delete [] s;

}
