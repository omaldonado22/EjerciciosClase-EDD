//Funcion Sort para ordenar los numeros de mayor a menor 
#include<iostream>
using namespace std;
int main(){
int arreglo[5]={3,1,7,8,12};

cout<<"\nImpresion del arreglo desordenado \n";

for(int i=0;i<5; i++){
    cout<<"\n["<<i<<"]"<<arreglo[i]<<"\n";
}

sort(arreglo,arreglo +5);
cout<<"\nImpresion de los elementos de menor a mayor\n";
for(int d=0;d<5; d++){

cout<<"\n["<<d<<"]-->"<<arreglo[d]<<"\n";

}

sort(arreglo,arreglo +5,greater<int>());

cout<<"\nImpresion de los elementos de menor a mayor\n";
for(int m=0;m<5; m++){

cout<<"\n["<<m<<"]-->"<<arreglo[m]<<"\n";


}
}