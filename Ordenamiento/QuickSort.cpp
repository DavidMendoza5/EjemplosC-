#include <iostream>

using namespace std;

void ordenarQuickSort(int a[], int primero, int ultimo);
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
    ordenarQuickSort(arreglo, 0, no_elementos-1);
    
    // Mostramos el arreglo ordenado
    mostrarElementos(arreglo, no_elementos);
    

    return 0;
}

void ordenarQuickSort(int a[], int primero, int ultimo) {
    int i, j, central, pivote;

    central = (primero + ultimo) / 2;
    pivote = a[central];
    i = primero;
    j = ultimo;

    do {
        while(a[i] < pivote) i++;
        while(a[j] > pivote) j--;

        if(i<= j) {         // Intercambia a[i] con a[j]
            int tmp;
            tmp = a[i];
            a[i] = a[j];
            a[j] = tmp;
            i++;
            j--;
        }
    } while(i <= j);
    if(primero < j) ordenarQuickSort(a, primero, j); // mismo proceso con sublista izquierda
    if(i < ultimo) ordenarQuickSort(a, i, ultimo); // mismo proceso con sublista derecha
}

void mostrarElementos(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout<<"Elemento: "<<a[i]<<" posición: "<<i<<"\n";
    }
    
}