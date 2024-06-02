//ejercicio 1


#include <iostream>
using namespace std;

int main() {
    int numero1, numero2, numero3, numero4; 

    cout << "Introduce el primer numero: ";
    cin >> numero1;

    cout << "Introduce el segundo numero: ";
    cin >> numero2;

    cout << "Introduce el tercer numero: ";
    cin >> numero3;

    cout << "Introduce el cuarto numero: ";
    cin >> numero4;

    int mayor = numero1; 

    if (numero2 > mayor) {
        mayor = numero2;
    }

    if (numero3 > mayor) {
        mayor = numero3;
    }

    if (numero4 > mayor) {
        mayor = numero4;
    }

    cout << "El mayor de los cuatro numeros es: " << mayor << endl;

    return 0;
}

