#include <iostream>

using namespace std;

void serieFibonacci(int);

int main() {
    int repeticiones;

    cout<<"Ingrese el número de elementos de la serie de fibonacci:";
    cin>> repeticiones;
    serieFibonacci(repeticiones);

    return 0;
}

void serieFibonacci(int repeticiones) {
    int numero=0, numero_siguiente=1, numero_serie=1;
    for(int i=0; i<repeticiones; i++) {
        cout<<" "<<numero_serie<<" ";
        numero_serie = numero+numero_siguiente;
        numero = numero_siguiente;
        numero_siguiente = numero_serie;
    }
}