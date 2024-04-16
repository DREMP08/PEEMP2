/*NOMBRE: Emmanuel Murillo Picazo
FECHA: 12 de Abril de 2024
PROGRAMACION ESTRUCTURADA 
programa de arreglos
torrehanoi. cpp
Universidad de Guadalajara Centro Cualtos
PROFESOR: Sergio Franco Casillas
DESCRIPCION:Usar el juego torre de hanoi*/
#include <iostream>
#include <vector>
using namespace std;

void imprimirTorres(vector<int> torre[], int n) // La función imprimirTorres imprime las torres en su estado actual

{
    for (int i = n - 1; i >= 0; i--) {
        for (int j = 0; j < 3; j++) {
            if (i < torre[j].size())
                cout << torre[j][i] << "\t";
            else
                cout << "\t"; //imprimimos una tabulación vacía

        }
        cout << "\n";        // Imprimimos un salto de línea después de cada torre

    }
    cout << "a\tb\tc\n";
}
// La función moverDisco mueve un disco de una torre a otra
void moverDisco(vector<int> torre[], int origen, int destino) {
    int disco = torre[origen].back();
    torre[origen].pop_back();
    torre[destino].push_back(disco);
}

bool esMovimientoValido(vector<int> torre[], int origen, int destino) {
    if (torre[origen].empty())
        return false;
    if (torre[destino].empty())
        return true;
    return torre[origen].back() < torre[destino].back();
}

int main() {
    int n;
    cout << "Introduce el numero de discos de 3 a 8: ";
    cin >> n;

    vector<int> torre[3];
    for (int i = n; i >= 1; i--)
        torre[0].push_back(i);

    int origen, destino;    // Declaramos las variables origen y destino para el movimiento actual
    int movimientos = 0;     // Declaramos la variable movimientos para contar el número de movimientos

    while (torre[2].size() < n) {
        imprimirTorres(torre, n);
        do {
            cout << "Introduce la torre de origen (0=a, 1=b, 2=c): ";
            cin >> origen;
            cout << "Introduce la torre de destino (0=a, 1=b, 2=c): ";
            cin >> destino;
        } while (!esMovimientoValido(torre, origen, destino));
        moverDisco(torre, origen, destino);
        movimientos++;
    }

    cout << "¡Felicidades, has completado el juego de la Torre de Hanoi!\n";
    cout << "Número de movimientos realizados: " << movimientos << "\n";
    return 0;
}


