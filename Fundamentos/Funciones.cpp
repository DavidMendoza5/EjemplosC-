#include <iostream>

using namespace std;

// Prototipo de funciones
int valorMayor(int, int);
void sumar(int&, int&);

int main() {
    int primer_valor=0, segundo_valor=0, valor_mayor=0;
    cout<<"Ingrese el primer valor:\n";
    cin>>primer_valor;
    cout<<"Ingrese el segundo valor:\n";
    cin>>segundo_valor;

    valor_mayor = valorMayor(primer_valor, segundo_valor);
    sumar(primer_valor, segundo_valor);
    cout<<"El valor más grande es: "<<valor_mayor<<"\n";
    cout<<"El nuevo valor del primer dígito es: "<<primer_valor<<"\n";
    cout<<"El nuevo valor del segundo dígito es: "<<segundo_valor<<"\n";

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

// Fucnión a la que se le envían valores por referencia
void sumar(int& primerNumero, int& segundoNumero) {
    int suma=primerNumero+segundoNumero;

    cout<<"El primer valor es: "<<primerNumero<<"\n";
    cout<<"El segundo valor es: "<<segundoNumero<<"\n";
    cout<<"La suma es: "<<suma<<"\n";

    // Al ser valores por referencia, podemos cambiar sus valores a diferencia de cuando sólo se pasan los valores sin referencia
    primerNumero = 10;
    segundoNumero = 5;
}