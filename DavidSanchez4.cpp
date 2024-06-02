//Ejecicio 4


#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string nombreArticulo;
    int cantidad;
    double precioUnitario;

    cout << "Ingrese el nombre del articulo: ";
    getline(cin, nombreArticulo);
    cout << "Ingrese la cantidad adquirida: ";
    cin >> cantidad;
    cout << "Ingrese el precio unitario del articulo: ";
    cin >> precioUnitario;

    double precioVenta = cantidad * precioUnitario;
    double iva = precioVenta * 0.12;
    double precioBruto = precioVenta + iva;

    cout << fixed << setprecision(2);
    cout << "\n--- Factura ---\n";
    cout << "Articulo: " << nombreArticulo << endl;
    cout << "Cantidad: " << cantidad << endl;
    cout << "Precio unitario: " << precioUnitario << " bs" << endl;
    cout << "Precio de venta: " << precioVenta << " bs" << endl;
    cout << "IVA (12%): " << iva << " bs" << endl;

    if (precioBruto > 50000) {
        double descuento = precioBruto * 0.05;
        double precioTotal = precioBruto - descuento;
        cout << "Descuento (5%): " << descuento << " bs" << endl;
        cout << "Precio total con descuento: " << precioTotal << " bs" << endl;
    } else {
        cout << "Precio total: " << precioBruto << " bs" << endl;
    }

    return 0;
}

