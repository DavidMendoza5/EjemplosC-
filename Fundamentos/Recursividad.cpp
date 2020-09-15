#include <iostream>

using namespace std;

int sacarFactorial(int);
int sumar(int);
int sacarFibonacci(int);

int main() {
    int numero=0, factorial, suma, fibonacci;
    cout<<"Digite un número mayor a cero: ";
    cin>>numero;

    factorial = sacarFactorial(numero);
    suma = sumar(numero);
    cout<<"El factorial es: "<<factorial<<"\n";
    cout<<"La suma hasta el valor escogido es: "<<suma<<"\n";
    cout<<"Fibonacci:\n";
    for (int i = 0; i < numero; i++) {
        cout<<sacarFibonacci(i)<<" ";
    }
    cout<<"\n";


    return 0;
}

int sacarFactorial(int numero) {
    if (numero == 0) {
        numero = 1;
    } else {
        numero = numero * sacarFactorial(numero-1);
    }
    return numero;
}

int sumar(int numero) {
    if (numero == 1) {
        numero = 1;
    } else {
        numero = numero + sumar(numero-1);
    }

    return numero;
}

int sacarFibonacci(int numero) {
    if (numero < 2) {
        return numero;
    } else {
        return (sacarFibonacci(numero-1) + sacarFibonacci(numero-2));
    }
}