// MENU PARA UTILIZAR LA LISTA, compilarlo con g++ -o main.exe src/main.cpp
// incluir el header del template de una clase
#include "List.h"
#include "iostream"
using std::cin;
using std::cout;
using std::endl;
int main(){
    int opt, elm;
    List lista;
    do{
    cout << "================================================================================" <<endl;
    cout << "                                     MENU                                       " <<endl;
    cout << "================================================================================" <<endl;
    cout << " 1. Insertar primero"<<endl;
    cout << " 2. Insertar ultimo"<<endl;
    cout << " 3. Eliminar primero"<<endl;
    cout << " 4. Eliminar ultimo"<<endl;
    cout << " 5. Mostrar lista"<<endl;
    cout << " 6. Lista vacia"<<endl;
    cout << " 7. Salir"<<endl;
    cout << " Ingrese una opcion: ";
    cin >> opt;
    cout << endl;

    switch(opt){
        case 1:
            cout << "Elemento a insertar: " ;
            cin >> elm;
            lista.insertarInicio(elm);
            break;
        case 2:
            cout << "Elemento a insertar: " ;
            cin >> elm;
            lista.insertarFinal(elm);
            break;
        case 3:
            cout << "Elemento eliminado\n";
            lista.eliminarPrimero();
            break;
        case 4:
            cout << "Elemento eliminado\n";
            lista.eliminarUltimo();
            break;
        case 5:
            lista.imprimir();
            break;
        case 6:
            if(lista.listaVacia()){
                cout << "La lista esta vacia" << endl;
            } else {
                cout << "La lista no esta vacia" << endl;
            }
            break;
        case 7:
            cout << "Hasta luego\n";
            break;
        default:
            opt=7;
            cout << "opcion no valida.\nSaliendo\n";
    }
    }while(opt!=7);
}
