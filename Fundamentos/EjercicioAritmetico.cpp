#include <iostream> //Definimos nuestra librerías

using namespace std;  //Se pone para usar el estándar de entrada-salida de datos de C++

void suma(int, int);    //Prototipos de funciones
void resta(int, int);
void multiplicacion(int, int);
void division(int, int);

int main() {
    int numero1=0, numero2=0;  //Definiición de variables

    cout<<"Ingrese el primer número: "; //Pedimos al usuario que ingrese los valores
    cin>>numero1;
    cout<<"Ingrese el segundo número: ";
    cin>>numero2;

    suma(numero1, numero2); //Enviamos los datos a la función
    resta(numero1, numero2);
    multiplicacion(numero1, numero2);
    division(numero1, numero2);
    return 0;
}

void suma(int num1,int num2) {    //Función de suma
    int total=0;

    total = num1+num2;

    cout<<"La suma es: "<<total<<"\n";
}

void resta(int num1, int num2) {    //Función resta
    int total=0;

    total = num1-num2;

    cout<<"La resta es: "<<total<<"\n";
}

void multiplicacion(int num1, int num2) {   //Función multipliación
    int total=0;

    total = num1*num2;

    cout<<"La multiplicación es: "<<total<<"\n";
}

void division(int num1, int num2) {    //Función división
    int total=0;

    total = num1/num2;

    cout<<"La divición es: "<<total<<"\n";
}