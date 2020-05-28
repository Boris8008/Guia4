#include <iostream>
#include <string>
using namespace std;
int main(void)
{
    int palabraNum;
    string palabra;

    cout << endl;
    cout << "PALABRA INGRESADA INICIA Y FINALIZA CON LA MISMA LETRA" << endl << endl;

    cout << "Digite una palabra: " << endl;
    cin >> palabra;

    palabraNum = palabra.length();

    if (palabra[0] == palabra[palabraNum - 1])
    {
    cout << "La palabra si inicia con la misma letra y acaba con la misma" << endl;
    }
    else
    {
        cout << "La palabra no inicia con la misma letra y no acaba con la misma" << endl;
    }
    
    cout << endl;
    return 0;
}