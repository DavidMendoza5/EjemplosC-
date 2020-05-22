#include <iostream>
//#include <conio.h>

using namespace std;

struct Nodo
{
    int dato;
    Nodo *siguiente;
};

//Prototipos de funciones
void insertarLista(Nodo *&, int);
void mostrarLista(Nodo *);

int main() {    
    Nodo *lista = NULL;
    int dato;

    cout<<"Ingrese un número: \n";
    cin>>dato;
    insertarLista(lista,dato);

    cout<<"Ingrese un número: \n";
    cin>>dato;
    insertarLista(lista,dato);

    cout<<"Ingrese un número: \n";
    cin>>dato;
    insertarLista(lista,dato);

    cout<<"Ingrese un número: \n";
    cin>>dato;
    insertarLista(lista,dato);

    mostrarLista(lista);

    return 0;
}

void insertarLista(Nodo *&lista, int n) {
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo -> dato = n;

    Nodo *aux1 = lista;
    Nodo *aux2;

    if ((aux1 != NULL) && (aux1->dato == n)) {
    cout<<"Elemento repetido\n";
    aux1 = nuevo_nodo;
    }
//&& (aux1->dato < n)
    while ((aux1 != NULL)) {
        aux2 = aux1;
        aux1 = aux1->siguiente;
    }
    
    if(lista == aux1) {
        lista = nuevo_nodo;
    } else {
        aux2->siguiente = nuevo_nodo;   
    }
    nuevo_nodo->siguiente = aux1;
    cout<<"Elemento "<< n << " insertado correctamente\n";
    
}

void mostrarLista(Nodo *lista) {
    Nodo *actual = new Nodo();
    actual = lista;

    while (actual != NULL) {
        cout<< actual->dato<<" -> ";
        actual = actual->siguiente;
    }
    
}