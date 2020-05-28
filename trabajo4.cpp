#include <iostream>
#include <string>
using namespace std;
int main(void)
{
    string palabra;
    int longitud;
    
    cout << endl;
    cout << "LONGITUD DE UNA CADENA DE CARACTERES" << endl << endl;

    cout << "Digite una palabra: " << endl;
    cin >> palabra;

    longitud = palabra.length();

    if (longitud > 10)
    {
        cout << "El numero de elemntos es mayor que diez y son: " << longitud << endl;
    }
    else if (longitud < 10)
    {
        cout << "El numero de elementos es menor que diez y son: " << longitud << endl;
    }
    else
    {
        cout << "El numero de elemntos es exactamente diez y son: " << longitud << endl;
    }
    
   if (longitud %2 == 0)
   {
       cout << "El numero de elementos de la cadena es par" << endl;
   }
   else
   {
       cout << "El numero de elementos de la cadena es impar" << endl;
   }

   return 0;

   }