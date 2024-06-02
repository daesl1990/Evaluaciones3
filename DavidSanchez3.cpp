//Ejercicio 3


#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int opcion;
    cout << "Elija la figura para calcular el area: \n";
    cout << "1. Cuadrado\n";
    cout << "2. Triangulo\n";
    cout << "3. Circulo\n";
    cin >> opcion;

    switch (opcion) {
        case 1: {
            double lado;
            cout << "Introduzca la longitud del lado del cuadrado: ";
            cin >> lado;
            double areaCuadrado = lado * lado;
            cout << "El area del cuadrado es: " << areaCuadrado << endl;
            break;
        }
        case 2: {
            double base, altura;
            cout << "Introduzca la base del triangulo: ";
            cin >> base;
            cout << "Introduzca la altura del triangulo: ";
            cin >> altura;
            double areaTriangulo = (base * altura) / 2;
            cout << "El area del triangulo es: " << areaTriangulo << endl;
            break;
        }
        case 3: {
            double radio;
            cout << "Introduzca el radio del circulo: ";
            cin >> radio;
            double areaCirculo = M_PI * pow(radio, 2);
            cout << "El area del círculo es: " << areaCirculo << endl;
            break;
        }
        default:
            cout << "Opción no válida" << endl;
    }

    return 0;
}

