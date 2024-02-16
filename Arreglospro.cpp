/*NOMBRE: Emmanuel Murillo Picazo
FECHA: 15 de Febrero de 2024
PROGRAMACION ESTRUCTURADA 
programa de arreglos
arreglospro. cpp
Universidad de Guadalajara Centro Cualtos
PROFESOR: Sergio Franco Casillas
DESCRIPCION:Usar el sistema de arreglos sin usar aun matrices o vectores creando un listado*/
#include <iostream>
using namespace std;

int main() {
    bool ciclo = true;
    int ar[10];  //damos el valor de la funcion ar maxima
    char op; // opción del menú
    int val, suma = 0; // valores de usuario
    int pos = 0;

    while (ciclo) {
        cout << "1. inserta valor" << endl;
        cout << "2. sumar valores" << endl;
        cout << "3. listar valores" << endl;
        cout << "4. borrar valor erroneo" << endl; // opción para borrar un dato erroneo
        cout << "5. vaciar los valores del arreglo" << endl; // opción para vaciar todo el listado de datos
        cout << "6. salir del programa" << endl;
        cout << "elige una opcion: ";

        cin >> op;
        switch (op) {//creamos el menu en orden
            case '1': {
                if (pos == 10) {
                    cout << "arreglo lleno" << endl;
                } else {
                    cout << "introduce un valor: ";
                    cin >> val; // pide valor al usuario
                    ar[pos] = val; // ingresa el valor al arreglo
                    pos++; // incremento de posición
                }
                break;//frena la ejecucion del siguiente caso
            }

            case '2': {
                for (int i = 0; i < pos; i++) {
                    suma += ar[i];//hace que la suma sea continua dependiendo los elementos dados
                }
                cout << "el total del arreglo es: " << suma << endl;
                break;
            }

            case '3': {
                for (int i = 0; i < pos; i++) {
                    cout << "[" << ar[i] << "], ";
                }
                break;
            }

            case '4': {
                if (pos == 0) {
                    cout << "arreglo vacío, no se puede borrar" << endl;
                } else {
                    int pos_borrar;
                    cout << "introduce la posición a borrar (0-" << pos - 1 << "): ";//en que lugar se encuentra el valor
                    cin >> pos_borrar;
                    if (pos_borrar >= 0 && pos_borrar < pos) {
                        // Desplazar elementos hacia la izquierda
                        for (int i = pos_borrar; i < pos - 1; i++) {
                            ar[i] = ar[i + 1];
                        }
                        pos--; // restar el numero de las posiciónes
                        cout << "elemento borrado" << endl;
                    } else {
                        cout << "posición inválida" << endl;
                    }
                }
                break;
            }
     case '5': {
                for (int i = 0; i < pos; i++) {
                    ar[i] = 0; // Restablecer a cero o valor predeterminado
                }
                pos = 0; // El arreglo está vacío y puedes empezar nuevamente
                cout << "Arreglo vaciado correctamente" << endl;
                break;
            }

            case '6': {
                ciclo = false;//termina el programa
                break;
            }
        }
    }

    return 0;
}
          
