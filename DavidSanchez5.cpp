//ejercicio


#include <iostream>
using namespace std;

int main() {
    int distancia;
    int diasEstancia;
    double precioPorKilometro = 2.5;
    double costoTotal;

    cout << "Ingrese la distancia a recorrer en kilometros: ";
    cin >> distancia;
    cout << "Ingrese el numero de dias de estancia: ";
    cin >> diasEstancia;

    costoTotal = distancia * 2 * precioPorKilometro;

    if (diasEstancia > 7 && distancia > 800) {
        costoTotal *= 0.3;
    }

    cout << "El costo total del billete de ida y vuelta es: " << costoTotal << " bs" << endl;

    return 0;
}

