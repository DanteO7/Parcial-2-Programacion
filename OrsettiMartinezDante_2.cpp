#include<iostream>
using namespace std;

int main(){
int filas,columnas,filas2,columnas2;
cout<<"Ingresar la cantidad de filas para la primera matriz: ";
cin>>filas;
cout<<"Ingresar la cantidad de columnas para la primera matriz: ";
cin>>columnas;
cout<<"Ingresar la cantidad de filas para la segunda matriz: ";
cin>>filas2;
cout<<"Ingresar la cantidad de columnas para la segunda matriz: ";
cin>>columnas2;
cout<<endl;
if(filas==filas2&&columnas==columnas2){
   int matriz1[filas][columnas];
   int matriz2[filas2][columnas2];
   int matrizSuma[filas][columnas];
   for(int i=0;i<filas;i++){
       for(int j=0;j<columnas;j++){
           cout<<"Ingresar el valor ["<<i<<"]["<<j<<"] de la primera matriz: ";
           cin>>matriz1[i][j];
       }
   }cout<<endl;
   for(int i=0;i<filas2;i++){
       for(int j=0;j<columnas2;j++){
           cout<<"Ingresar el valor ["<<i<<"]["<<j<<"] de la segunda matriz: ";
           cin>>matriz2[i][j];
       }
   }cout<<endl;
   for(int i=0;i<filas;i++){
       for(int j=0;j<columnas;j++){
           matrizSuma[i][j]=matriz1[i][j]+matriz2[i][j];
       }
   }
cout<<"La suma de las matrices es: "<<endl;
   for(int i=0;i<filas;i++){
       for(int j=0;j<columnas;j++){
           cout<<matrizSuma[i][j]<<" ";
       }cout<<endl;
   }
}else{
   cout<<"Las matrices no tienen las mismas dimensiones";
}
return 0;
}
