// Se le pide al usuario un número y se le devuelve su factorial
#include <iostream>

using namespace std;

int realizarFactorial(int);

int main() {
    int numero=0, factorial;

    cout<<"Ingrese el número del que desea saber su factorial:\n";
    cin>>numero;
    factorial = realizarFactorial(numero);
    cout<<"El factorial del número es: "<<factorial<<"\n";

    return 0;
}

int realizarFactorial(int numero) {
    int factorial=1, contador=1;
    if(numero==0 || numero==1) {
        factorial=1;
    } else {
        for (int i = 1; i <= numero; i++) {
            factorial*=i;   //factorial = factorial * i
            cout<<factorial<<"\n";
        }
        
    }

    return factorial;
}