#include <iostream>

using namespace std;

typedef string tipoElemento;

class Nodo {
    protected:
        tipoElemento dato;
        Nodo *izdo;
        Nodo *dcho;
    private:
        /* data */
    public:
        Nodo(tipoElemento valor);
        Nodo(tipoElemento valor, Nodo *ramaIzdo, Nodo *ramaDcho);
        
        // Operaciones de acceso
        tipoElemento valorNodo(){ return dato; }
        Nodo* subArbolIzdo(){ return izdo; }
        Nodo* subArbolDcho(){ return dcho; }
        
        // Operaciones de modificación
        void nuevoValor(tipoElemento d){ dato = d; }
        void ramaIzdo(Nodo* n){ izdo = n; }
        void ramaDcho(Nodo* n){ dcho = n; }
        void visitar() {
            cout<<dato<<"\n";
        }
};

Nodo::Nodo(tipoElemento valor) {
    dato = valor;
    izdo = dcho = NULL;
}

Nodo::Nodo(tipoElemento valor, Nodo *ramaIzdo, Nodo *ramaDcho) {
    dato = valor;
    izdo = ramaIzdo;
    dcho = ramaDcho;
}


class arbol {
    private:
        protected:
            Nodo *raiz;
    public:
        arbol() {
            raiz = NULL;
        }
        arbol(Nodo *r) {
            raiz = r;
        }
        void Praiz( Nodo *r) {
            raiz = r;
        }
        Nodo * Oraiz() {
            return raiz;
        }
        Nodo raizArbol() {
            if(raiz)
                return *raiz;
            else
                throw " arbol vacio";
        }
        bool esVacio() {
            return raiz == NULL;
        }
        Nodo * hijoIzdo() {
            if(raiz)
                return raiz->subArbolIzdo();
            else
                throw " arbol vacio";
        }
        Nodo * hijoDcho() {
            if(raiz)
                return raiz->subArbolDcho();
            else
                throw " arbol vacio";
        }
        Nodo* nuevoArbol(Nodo* ramaIzqda, tipoElemento dato, Nodo* ramaDrcha) {
            return new Nodo(dato, ramaIzqda, ramaDrcha);
        }
        void preorden() {
            preorden(raiz);
        }
        void preorden(Nodo *r) {
            if (r != NULL) {
                r->visitar();
                preorden (r->subArbolIzdo());
                preorden (r->subArbolDcho());
            }
        }
};
