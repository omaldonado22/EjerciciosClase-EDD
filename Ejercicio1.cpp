//Ordenamiento de burbuja 
#include <iostream>
using namespace std;

int main(){
int arreglo [10];
int aux;
for(int x=0; x<10;x++){

    cin>>arreglo[10];
}

for(int e=0; e<10;e++){
for(int p=0;p<9; p++){
if(arreglo[p]>arreglo[p+1]){
 aux=arreglo[p];
arreglo[p]=arreglo[p+1];
arreglo[p+1]=aux;

}
}
}
cout<<"\nImpresion de los elementos del arreglo ordenado\n";
for(int i=0; i<10;i++){
cout<<"["<<i<<"]-->"<<arreglo[i]<<"\n";
}

return 0;

}

