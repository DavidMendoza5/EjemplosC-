# include <iostream>

using namespace std;

void transformarARomano(int);

int main() {
    int numeroDecimal=0;
    cout<<"Ingrese un número:\n";
    cin>>numeroDecimal;
    transformarARomano(numeroDecimal);

    return 0;
}


void transformarARomano(int numero) {
    int unidades=0, decenas=0, centenas=0, valor=numero;
    string conversion;

    unidades = valor%10;
    valor /= 10;
    decenas = valor%10;
    valor /= 10;
    centenas = valor%10;
    valor /= 10;

    switch (centenas) {
    case 1: conversion+="C"; break;
    case 2: conversion+="CC"; break;
    case 3: conversion+="CCC"; break;
    case 4: conversion+="CD"; break;
    case 5: conversion+="D"; break;
    case 6: conversion+="DC"; break;
    case 7: conversion+="DCC"; break;
    case 8: conversion+="DCCC"; break;
    case 9: conversion+="CM"; break;
    
    default:
        break;
    }

    switch (decenas) {
    case 1: conversion+="X"; break;
    case 2: conversion+="XX"; break;
    case 3: conversion+="XXX"; break;
    case 4: conversion+="XL"; break;
    case 5: conversion+="L"; break;
    case 6: conversion+="LX"; break;
    case 7: conversion+="LXX"; break;
    case 8: conversion+="LXXX"; break;
    case 9: conversion+="XC"; break;
    
    default:
        break;
    }

    switch (unidades) {
    case 1: conversion+="I"; break;
    case 2: conversion+="II"; break;
    case 3: conversion+="III"; break;
    case 4: conversion+="IV"; break;
    case 5: conversion+="V"; break;
    case 6: conversion+="VI"; break;
    case 7: conversion+="VII"; break;
    case 8: conversion+="VIII"; break;
    case 9: conversion+="IX"; break;
    
    default:
        break;
    }

    cout<<conversion<<"\n";
}

