// Programa que solicita al usuario dos números y muestra el máximo común divisor
#include <iostream>

using namespace std;

int sacarMCD(int m, int n);

int main() {
    int digito, digito2, resultado;

    cout<<"Ingrese un número: ";
    cin>>digito;

    cout<<"Ingrese un número: ";
    cin>>digito2;

    resultado = sacarMCD(digito, digito2);
    cout<<resultado<<"\n";

    return 0;
}

int sacarMCD(int m, int n) {
    if(n <= m && (m%n == 0) ) {
        return n;
    } else {
        if(m < n) {
            return sacarMCD(n, m);
        } else {
            return sacarMCD(n, m%n);
        }
    }
}