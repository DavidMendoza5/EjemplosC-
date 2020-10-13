// Programa que solicita al usuario un número y muestra la suma de sus dígitos
#include <iostream>

using namespace std;

int sumaDigitos(int numero);

int main() {
    int digito, resultado;

    cout<<"Ingrese un número: ";
    cin>>digito;

    resultado = sumaDigitos(digito);
    cout<<resultado<<"\n";

    return 0;
}

int sumaDigitos(int numero) {
    if(numero <= 9) {
        return numero;
    } else {
        return sumaDigitos(numero/10) + numero%10;
    }
}