#include <iostream>

using namespace std;

// Prototipo de funciones
int valorMayor(int, int);

int main() {
    int primer_valor=0, segundo_valor=0, valor_mayor=0;
    cout<<"Ingrese el primer valor:\n";
    cin>>primer_valor;
    cout<<"\nIngrese el segundo valor:\n";
    cin>>segundo_valor;

    valor_mayor = valorMayor(primer_valor, segundo_valor);
    cout<<"El valor más grande es: "<<valor_mayor<<"\n";

    return 0;
}

int valorMayor(int primer_valor, int segundo_valor) {
    int valor_mas_grande=0;
    if(primer_valor>segundo_valor) {
        valor_mas_grande = primer_valor;
    } else {
        if(segundo_valor>primer_valor) {
            valor_mas_grande = segundo_valor;
        } else {
            valor_mas_grande=primer_valor;  // En este caso los dos valores son iguales
        }
    } 

    return valor_mas_grande;
}