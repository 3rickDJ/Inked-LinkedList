#include "List.h"
#include <cstdlib>
#include <iostream>
List::List(){
    //inicializar el apuntador en nullo
    pList = nullptr;
}
void List::insertarInicio(int x){
    //variable auxiliar
    Node *p;
    p = (Node*) malloc(sizeof(Node));
    //asignar valor al nodo
    p->value = x;
    //linkear nodo a la lista
    p->next = pList;
    pList =p;
}
void List::insertarFinal(int x){
    //si esta vacio no podemos acceder a p->next->next
    //nos da un error
    if(listaVacia()){
        //por si es el primer elemento
        insertarInicio(x);
    }else{
        Node *p = pList;
        //avanzar al siguiente nodo mientras no sea el ultimo
        while(p->next != 0){
            p = p->next;
        }
        //encontrando el ultimo nodo
        //obtenemos espacio para el siguiente nodo
        p->next = (Node*) malloc(sizeof(Node));
        //ultimo elemento apunta a nulo
        p->next->next=0;
        //asignar el valor del ultimo elemento
        p->next->value=x;
    }
}
void List::imprimir(){
    Node *p = pList;
    //recorrer cada nodo mientras no apuntemos a nulo
    while(p!=0){
        //imprimir el valor del i-esimo nodo
        std::cout << p->value << ", ";
        //pasar al siguiente nodo
        p = p->next;
    }
    //imprimir enter final
    std::cout << "\n";
}
void List::eliminarPrimero(){
    if(listaVacia()){
        //verificar si esta vacia
        std::cout << "No hay elementos.\n";
    }else{
        Node *p = pList;
        //apuntar al siguiente elemento
        pList = pList->next;
        //eliminar el primer elemento
        free(p);
    }
}
void List::eliminarUltimo(){
    if(listaVacia()){
        //si esta vacia mandar mensaje
        std::cout << "No hay elementos.\n";
    }else{
        Node *p = pList;
        //iterar hasta llegar al penultimo nodo
        while(p->next->next != 0){
            //siguiente nodo
            p = p->next;
        }
        //liberar el ultimo nodo
        free(p->next);
        //ultimo nodo apuntando a null
        p->next=0;
    }
}
bool List::listaVacia(){
    //lista no tiene elementos si apunta a nullo
    return pList == 0;
}
