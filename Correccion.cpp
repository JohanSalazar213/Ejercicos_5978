#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
using namespace std;

void ingresonombres (int numero, string nombre [10])
{    
    
    cout << "ingresar los nombres :" "\n";
    for (int i = 0; i < numero; i++)
    {
    cin >> nombre[i];
    }

}
void lista (int numero, string nombre[10])
{
    
    cout << "\n" "los nombres que se ingresaron son : ""\n" ;
    for ( int i = 0; i < numero; i++)
    {
    cout <<"Jugador # " << i + 1 << "  ";
    cout << nombre[i] << "\n";
    }
}
int puntoss (int numero, string nombre[10], int puntos)

{
    
    puntos = 1 + rand() % (5 - 30);
    cout << "\n" "los nombres son : ""\n" ;
    for ( int i = 0; i < numero; i++)
    {
    cout << nombre[i] << "  " << puntos << "\n";
    srand(time(NULL));
    }
    return puntos;
}
int main ()
{
    int numero, puntos;
    string nombre [10];
    cout << "Ingrese la cantidad de jugadores" "\n";
    cin >> numero;
    ingresonombres ( numero, nombre);
    lista (numero, nombre);
    puntoss (numero, nombre, puntos);
}