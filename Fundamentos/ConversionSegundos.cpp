#include <iostream>

using namespace std;

void convertiSegundosAHorarioEquivalente(int, int&, int&, int&);

int main() {
    int total_segundos, horas, minutos, segundos;

    cout<<"Digite el tiempo total en segundos: ";
    cin>>total_segundos;

    convertiSegundosAHorarioEquivalente(total_segundos, horas, minutos, segundos);

    cout<<"El equivalente en horas es: "<<horas<<"\n";
    cout<<"El equivalente en minutos es: "<<minutos<<"\n";
    cout<<"El equivalente en segundos es: "<<segundos<<"\n";

    return 0;
}

void convertiSegundosAHorarioEquivalente(int total_segundos, int& horas, int& minutos, int& segundos) {
    horas = total_segundos/3600;    // Sacamos el equivalente en horas
    total_segundos %= 3600; // Eliminamos las horas
    minutos = total_segundos/60;    // Sacamos los minutos
    segundos = total_segundos%60;   // Sacamos los segundos
}