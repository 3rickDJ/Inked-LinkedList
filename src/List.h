#pragma once
#include "Node.h"
class List {
    Node *pList;
    public:
    List();
    void insertarInicio(int x);
    void insertarFinal(int x);
    void imprimir();
    void eliminarPrimero();
    void eliminarUltimo();
    bool listaVacia();
};
