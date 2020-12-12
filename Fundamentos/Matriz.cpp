#include <iostream>

using namespace std;

int main() {
    int orden;

    cout<<"Introduzca el orden de la matriz: ";
    cin>>orden;
    int matriz_bidimensional[orden][orden];

    for(int i = 0; i < orden; i++) {
        for (int j = 0; j < orden; j++) {
            if(i == j) {
                matriz_bidimensional[i][j] = 1;
                cout<<"["<<matriz_bidimensional[i][j]<<"]";
            } else {
                matriz_bidimensional[i][j] = 0;
                cout<<"["<<matriz_bidimensional[i][j]<<"]";
            }
        }
        cout<<"\n";
    }
    return 0;
}