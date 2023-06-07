#include <iostream>
using namespace std;

int main(){

    int arreglo[4][3];

    cout<<"Ingreso de los elementos del arreglo\n";
  for (int fila = 0; fila < 4; fila++)
  {
    for (int col = 0; col < 3; col++)
    {
        cin>>arreglo[fila][col];
    }
    
  }

  cout<<"Impresion de los elementos de los arreglos\n";
  cout<<"\t\t\tsuma\n";

  for (int fila = 0; fila < 4; fila++)
  {
   int suma=0;
   for(int c=0; c<3; c++){
    cout<<arreglo[fila][c];
    suma+=arreglo[fila][c];
   }
   cout<<suma<<"\n";

  }
  

  
    
return 0;









}