#include <stdio.h>
#include <iostream>

using namespace std;

void ordenarBurbuja(int a[], int n);
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
    ordenarBurbuja(arreglo, no_elementos);
    
    // Mostramos el arreglo ordenado
    mostrarElementos(arreglo, no_elementos);
    

    return 0;
}

void ordenarBurbuja(int a[], int n) {
    int interruptor = 1, pasada, j;
    for (pasada = 0; pasada < n-1 && interruptor; pasada++) {
        // Bucle externo que controla la cantidad de pasadas
        interruptor = 0;
        for (j = 0; j < n-pasada-1; j++) {
            if (a[j] > a[j+1]) {
                // Elementos desordenados, es necesario intercambiar
                int aux;
                interruptor = 1;
                aux = a[j];
                a[j] = a[j+1];
                a[j+1] = aux;
            }
            
        }
        
    }
    
}

void mostrarElementos(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout<<"Elemento: "<<a[i]<<" posición: "<<i<<"\n";
    }
    
}