#include <stdio.h>
#include <iostream>

using namespace std;

void ordenarShell(int a[], int n);
void mostrarElementos(int a[], int n);

int main() {
    int no_elementos=0;
    
    cout<<"Indique el número de elementos del arreglo: ";
    cin>>no_elementos;

    // Declaración del arreglo que tendrá los números que se van a ordenar
    int arreglo[no_elementos];

    for (int i = 0; i < no_elementos; i++) {
        cout<<"Ingrese un elemento al arreglo: ";
        cin>>arreglo[i];
    }

    // Llamamos al método que va a ordenar el arreglo
    ordenarShell(arreglo, no_elementos);
    
    // Mostramos el arreglo ordenado
    mostrarElementos(arreglo, no_elementos);
    

    return 0;
}

void ordenarShell(int a[], int n) {
    int intervalo, i, primera_mitad, segunda_mitad;

    intervalo = n / 2;

    while (intervalo > 0) {
        for (i = intervalo; i < n; i++) {
            primera_mitad = i - intervalo;
            while (primera_mitad >= 0) {
                segunda_mitad = primera_mitad + intervalo;
                if(a[primera_mitad] <= a[segunda_mitad]) {
                    primera_mitad = -1; // Así termina el bucle, par ordenado
                } else {
                    int temp;
                    temp = a[primera_mitad];
                    a[primera_mitad] = a[segunda_mitad];
                    a[segunda_mitad] = temp;
                    primera_mitad -= intervalo;
                }
            }
            
        }
        intervalo = intervalo / 2;
    }
}

void mostrarElementos(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout<<"Elemento: "<<a[i]<<" posición: "<<i<<"\n";
    }
    
}