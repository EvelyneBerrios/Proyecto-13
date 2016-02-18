#include <iostream>
/*Producir la siguiente salida
*****
****
**
*
Usando ciclo for anidados*/
using namespace std;

int main()
{
  int i,k;
  for (i=5;i>=1;i--)
  {
      for(k=0;k<i;k++)
      {
          cout<<"*";
      }
      cout<<"\n";
  }
  return 0;

}



