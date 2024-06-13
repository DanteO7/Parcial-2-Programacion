#include<iostream>
#include<vector>
using namespace std;

bool asientosDisponiblesFuncion(int asiento){
   bool asientoEncontrado=false;
   vector<int>asientosDisponibles={15,28,44,45,70};
   for(int i=0;i<asientosDisponibles.size();i++){
       if(asiento==asientosDisponibles[i]){
          asientoEncontrado=true;
       }
   }
   if(asientoEncontrado){
      return true;
   }else{
      return false;
   }
}
int main(){
int asientoUsuario;
vector<int>asientosDisponibles={15,28,44,45,70};
cout<<"Asientos disponibles: ";
for(int elementos : asientosDisponibles){
    cout<< elementos<<" ";
}
cout<<endl<<"Ingrese el numero de asiento que quiera ocupar: ";
cin>>asientoUsuario;
bool funcion = asientosDisponiblesFuncion(asientoUsuario);
if(funcion){
   cout<<"Felicitaciones, el asiento numero "<<asientoUsuario<<" esta disponible";
}else{
   cout<<"Lo sentimos, el asiento numero "<<asientoUsuario<<" esta ocupado, pero aun quedan 5 asientos disponibles: ";
   for(int elementos : asientosDisponibles){
   cout<< elementos<<" ";
   }
}
return 0;
}
