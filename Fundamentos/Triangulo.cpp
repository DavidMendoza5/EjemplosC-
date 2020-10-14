#include <iostream>

using namespace std;

int main() {
    int i, j, filas;

    cout<<"Inserte un número entero para el alto del triángulo: ";
    cin>>filas;

    for (i = 1; i <= filas; i++) {
        for (j = 1; j <= i; j++) {
            cout<<"*";
        }
        cout<<"\n";
    }
    
    return 0;
}