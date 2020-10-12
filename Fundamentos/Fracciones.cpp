// Leer una fracción de la forma n/m y escribirlo como fracción mixta : a b/m = n/m (Problema de omegaUp)
#include <iostream>
using namespace std;
int main() {
    unsigned int a, b, c;

    cin>>a>>b;

    if (a%b == 0) {
        cout<<a/b;  // Se puede imprimir sólo la variable b, pero el problema pide que sea la división
    } else {
        c = a/b;
        a = a%b;
        cout<<c<<" "<<a<<"/"<<b<<"\n";
    }

    return 0;
}