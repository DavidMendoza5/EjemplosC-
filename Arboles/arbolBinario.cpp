#include <iostream>
#include "arbol.cpp"

using namespace std;

int main() {
    arbol a1,a2,a3, a4, a;
    Nodo * n1,*n2,*n3, *n4;

    n1 = a1.nuevoArbol(NULL,"Tercer nivel",NULL);
    n2 = a2.nuevoArbol(NULL,"Tercer nivel",NULL);
    n3 = a3.nuevoArbol(n1,"Segundo nivel",n2);
    n1 = a1.nuevoArbol(NULL,"Tercer nivel",NULL);
    n2 = a2.nuevoArbol(NULL,"Tercer nivel",NULL);
    n4 = a4.nuevoArbol(n1,"Segundo nivel",n2);
    n1 = a1.nuevoArbol(n3,"Raíz",n4);
    a.Praiz(n1);
    a.preorden();

    return 0;
}