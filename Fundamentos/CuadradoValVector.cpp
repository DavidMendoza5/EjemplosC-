#include <iostream>

using namespace std;

void elevarAlCuadrado(int arreglo[], int);
void mostrarArreglo(int arreglo[], int);

int main() {
    int tam=0, arreglo_numeros[tam];

    cout<<"Ingrese el tamaño del arreglo:\n";
    cin>>tam;
    
    for (int i = 0; i < tam; i++) {
        cout<<"Ingrese los valores del arreglo:\n";
        cin>>arreglo_numeros[i];
    }

    elevarAlCuadrado(arreglo_numeros, tam);
    mostrarArreglo(arreglo_numeros, tam);

    return 0;
}

void elevarAlCuadrado(int arreglo[], int tamanio) {
    for (int i = 0; i < tamanio; i++) {
        arreglo[i] *= arreglo[i];
    }
}

void mostrarArreglo(int arreglo[], int tamanio) {
    for (int i = 0; i < tamanio; i++) {
        cout<<arreglo[i]<<" ";
    }
    cout<<"\n";
    
}