#include "List.h"
#include <cstdlib>
#include <iostream>
List::List(){
    pList = nullptr;
}
void List::insertarInicio(int x){
    Node *p;
    p = (Node*) malloc(sizeof(Node));
    p->value = x;
    p->next = pList;
    pList =p;
}
void List::insertarFinal(int x){
    if(listaVacia()){
        insertarInicio(x);
    }else{
        Node *p = pList;
        while(p->next != 0){
            p = p->next;
        }
        p->next = (Node*) malloc(sizeof(Node));
        p->next->next=0;
        p->next->value=x;
    }
}
void List::imprimir(){
    Node *p = pList;
    while(p!=0){
        std::cout << p->value << ", ";
        p = p->next;
    }
    std::cout << "\n";
}
void List::eliminarPrimero(){
    if(listaVacia()){
        std::cout << "No hay elementos.\n";
    }else{
        Node *p = pList;
        pList = pList->next;
        /* std::cout << "Eliminado '"<< pList->value <<"'\n"; */
        free(p);
    }
}
void List::eliminarUltimo(){
    if(listaVacia()){
        std::cout << "No hay elementos.\n";
    }else{
        Node *p = pList;
        while(p->next->next != 0){
            p = p->next;
        }
        /* std::cout << "Eliminado '"<< pList->value <<"'\n"; */
        free(p->next);
        p->next=0;
    }
}
bool List::listaVacia(){
    return pList == 0;
}
