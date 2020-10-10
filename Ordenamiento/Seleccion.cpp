#include <iostream>

using namespace std;

void ordenarSeleccion(int a[], int n);
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
    ordenarSeleccion(arreglo, no_elementos);
    
    // Mostramos el arreglo ordenado
    mostrarElementos(arreglo, no_elementos);
    

    return 0;
}

void ordenarSeleccion(int a[], int n) {
    int indiceMenor, i, j;

    for (i = 0; i < n-1; i++) {
        // Comienzo de la exploración en índice i
        indiceMenor = i;

        // Exploramos la sublista de a[i+1] a a[n-1]
        for (j = i+1; j < n; j++) {
            if(a[j] < a[indiceMenor]) {
                indiceMenor = j;
            }
        }
        // Sitúa el elemento más pequeño en a[i]
        if(i != indiceMenor) {
            int aux = a[i];
            a[i] = a[indiceMenor];
            a[indiceMenor] = aux;
        }
    }
    
}

void mostrarElementos(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout<<"Elemento: "<<a[i]<<" posición: "<<i<<"\n";
    }
    
}