#include<iostream>
#include<vector>
using namespace std;

int main(){
int numeroNuevo;
vector<int> arrayInicial={10,20,30,40,50};
vector<int> arrayCon2Elementos;
vector<int> arrayElemento3;
cout<<"Array inicial: ";
for(int elementos : arrayInicial){
    cout << elementos<<" ";
    arrayCon2Elementos.push_back(elementos);
}cout<<endl;
for(int i=0;i<2;i++){
    cout<<"Ingresar un numero para agregar al array: ";
    cin>>numeroNuevo;
    arrayCon2Elementos.push_back(numeroNuevo);
}
cout<<"Array despues de agregar dos elementos: ";
for(int elementos : arrayCon2Elementos){
    cout << elementos<<" ";
    arrayElemento3.push_back(elementos);
}cout<<endl;
for(int i=0;i<arrayElemento3.size();i++){
    if(i==2){
       arrayElemento3.erase(arrayElemento3.begin()+i);
    }
}
cout<<"Array despues de eliminar el tercer elemento: ";
for(int elementos : arrayElemento3){
    cout << elementos<<" ";
}
return 0;
}
