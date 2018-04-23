/*
Programa_37 almacenar 10 elementos en un vector, imprimir posicion y valor
Estructura for y arreglos
Autor: Luis Alberto García Rodríguez
N° lista 11
Fecha: 11 de marzo de 2015
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    system ("color f0");
    int x, vec[10], mayor=0, pos;
    cout << "\n Imprimir de entre 10 numeros, la posicion y valor del elemento mayor";
    cout << "\n\n Estructura repetitiva for \n";

    for (x=0; x<10; x=x+1)
        {
        cout<<"\n Dame un valor: ";
        cin>>vec[x];

        if (vec[x]>mayor)
            {
            mayor=vec[x];
            pos=x;
            }
        }

        cout<<"\n Elemento con mayor valor: "<<mayor<<"\t posicion en el vector: "<<pos<<"\n\n\t\t\t";

        system ("pause");

    return 0;
}
