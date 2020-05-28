#include "iostream"
using namespace std;
int main(void)
{
    int n;
    
    cout << endl;
    cout << "DETERMINAR SI UN NUMERO ES POSITIVO, NEGATIVO O CERO" << endl << endl;

    cout << "Digite un numero entero: " << endl;
    cin >> n;

    if(n > 0)
    {
        cout << "El numero " << n << " es positivo" << endl;
    }
    else if (n < 0)
    {
        cout << "El numero " << n << " es negativo" << endl;
    }

    else
    {
        cout << "El numero es cero" << endl;
    }
    
    cout << endl;
    return 0;

}