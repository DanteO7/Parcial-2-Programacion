#include<iostream>
using namespace std;

/*
declarar e inicializar una variable string en la funcion main
pasarla por la funcion y guardarla en una variable string
mostrar esa variable

en la funcion miniCompilador declaramos una variable para guardar el numero al que se le van a aplicar las operaciones
declarar una variable string para el resultado final
iteramos el mensaje y hacemos un if para todos las opciones de los simbolos
si el simbolo es "#" se suma 1
si el simbolo es "@" se resta 1
si el simbolo es "*" se multiplica el numero por si mismo
si el simbolo es "&" guardamos la variable del numero operado en la variable string resultado final
retornamos el resultado final
*/

string miniCompilador(const string& secretMessage){
int cadenaFinal=0;
string cadenaFinalEscrita;
for(int i=0;i<secretMessage.size();i++){
          if(secretMessage[i]=='#'){
             cadenaFinal+=1;
          }else if(secretMessage[i]=='@'){
             cadenaFinal+=-1;
          }else if(secretMessage[i]=='*'){
             cadenaFinal=cadenaFinal*cadenaFinal;
          }else if(secretMessage[i]=='&'){
             cadenaFinalEscrita+=to_string(cadenaFinal);
          }
}
return cadenaFinalEscrita;
}
int main(){
const string mensaje="&###@&*&###@@##@##&######@@#####@#@#@#@##@@@@@@@@@@@@@@@*&&@@@@@@@@@####@@@@@@@@@#########&#&##@@##@@##@@##@@##@@##@@##@@##@@##@@##@@##@@##@@##@@##@@##@@&";
string mensajeCompilado=miniCompilador(mensaje);
cout<<"Entrada: "<<mensaje<<endl;
cout<<"Salida: "<<mensajeCompilado;
return 0;
}
