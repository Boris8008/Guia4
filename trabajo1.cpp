#include "iostream"
using namespace std;
int main(void)
{
    int n1, n2;

    cout << endl;
    cout << "NUMERO ES DIVISIBLE ENTRE OTRO" << endl << endl;

    cout << "Digite el numero divisor: " << endl;
    cin >> n1;
    cout << "Digite el numero dividiendo: " << endl;
    cin >> n2;

    if (n1 % n2 == 0)
    {
        cout << n2 << " es divisible de " << n1 << endl;
    }
    else
    {
        cout << n2 << " no es divisible de " << n1 << endl;
    }
    
    cout << endl;
    return 0;

}